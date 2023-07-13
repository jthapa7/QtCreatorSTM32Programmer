#ifndef PROGRAM_H
#define PROGRAM_H

#include <QMainWindow>
#include <QProcess>
#include <QThread>

QT_BEGIN_NAMESPACE
namespace Ui { class program; }
QT_END_NAMESPACE

class program : public QMainWindow
{
    Q_OBJECT

public:
    program(QWidget *parent = nullptr);
    ~program();

private slots:
    void on_selectFile_clicked();
    void readResult();
    void delay(int n);
    void on_programming_clicked();

    void on_ok_clicked();

private:
    Ui::program *ui;
    QProcess *pro;
    int programmingStatus;
    QString dirout;
    QStringList diroutBuffer;
    QString progFile;
    int testStep;
    const char* binFile[];
};
#endif // PROGRAM_H
