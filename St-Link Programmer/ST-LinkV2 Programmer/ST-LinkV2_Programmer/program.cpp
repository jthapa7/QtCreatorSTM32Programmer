#include "program.h"
#include "ui_program.h"
#include <QProcess>
#include <QDir>
#include <QFileDialog>
#include <QMessageBox>

program::program(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::program)
{
    ui->setupUi(this);
    setWindowTitle("STM32 Programmer");
}

program::~program()
{
    delete ui;
}


void program::on_selectFile_clicked()
{
    QString filename= QFileDialog::getOpenFileName(this, "Choose File","C:/ProgramFiles"); //Have Program files in this folder.
    qDebug()<<filename;
    QStringList filenameList = filename.split("/");
    QString imageFile = filenameList[filenameList.size()-1];
    ui->programFileName->setText(imageFile);
    progFile = filename;
}

void program::readResult()
{       ui->status->setText("Programming");
        dirout =  pro->readAllStandardOutput();
        pro->write("exit\n\r");

        if(dirout.contains("Verification...OK"))
        {
            programmingStatus+=1;

        }
        diroutBuffer.append(dirout);

}
void program::delay(int n)
{
    QTime dieTime= QTime::currentTime().addSecs(n);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}


void program::on_programming_clicked()
{
    if(ui->programFileName->text()==""){
        ui->programming->setDisabled(true);
        QMessageBox messageError;
        messageError.critical(0,"Error","Select the Program File to Load Before Clicking Program");
    }
    else{

        dirout="";
        diroutBuffer={};
        ui->status->setStyleSheet("background: yellow");
        ui->status->setText("Programming...");
        ui->programming->setDisabled(true);
        delay(2);
        programmingStatus =0;
        int pStat = 0;
        QString filepath ="C:/ST-LINK_CLI";    //Have programmer in this path
        pro = new QProcess(parent());
        pro->setWorkingDirectory(filepath);
        QStringList arguments;
        arguments<<"ST-LINK_CLI.exe"<<"\n";
        QByteArray array = progFile.toLocal8Bit();
        char* progFile=array.data();
        pro->setReadChannel(QProcess::StandardOutput);
        pro->start("cmd.exe",arguments,QIODevice::ReadWrite);
        pro->write("ST-LINK_CLI.exe -P \"");
        pro->write(progFile);
        pro->write("\" 0x08000000 -V\n");
        QObject::connect(pro,&QProcess::readyReadStandardOutput,this,&program::readResult);

        if (!pro->waitForStarted())
            {
              qDebug() << "The process didnt start" << pro->error();
            }
        pro->waitForFinished();
        pStat = programmingStatus;
        if(pStat==1){
            qDebug()<<"Programming Pass" ;
            ui->output->setVisible(true);
            for(int i=0;i<diroutBuffer.length();i++){
                ui->output->append(diroutBuffer[i]);
            }

            ui->status->setStyleSheet("background: green");
            ui->status->setText("PASS");


        }
        else{
           qDebug()<<"Programming Failed" ;
           ui->output->setVisible(true);
           for(int i=0;i<diroutBuffer.length();i++){
               ui->output->append(diroutBuffer[i]);
           }
           ui->status->setStyleSheet("background: red");
           ui->status->setText("FAIL");


        }
    pro->closeReadChannel(QProcess::StandardOutput);
    }
}


void program::on_ok_clicked()
{
    ui->status->setStyleSheet("background: none");
    ui->status->clear();
    ui->output->clear();
    //ui->ok->setVisible(false);
    ui->programming->setDisabled(false);
}

