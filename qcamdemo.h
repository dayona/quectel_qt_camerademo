#ifndef QCAMDEMO_H
#define QCAMDEMO_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QDebug>
#include "qcamdata.h"
#include "quecrecorder.h"

namespace Ui {
class QCamDemo;
}

class QCamDemo : public QMainWindow
{
    Q_OBJECT

public:
    explicit QCamDemo(QWidget *parent = 0);
    ~QCamDemo();

    CameraCallBack *thisCb;
    QIcon backbtn, startbtn, funcbtn;
    bool mVideoRecoder;
    bool isVideoGoing = false;

    QuecRecorderThread *quecRecorderThread;

private slots:
    void on_CamExit_clicked();
    void on_CamStart_clicked();
    void on_CamFunction_clicked();
    void QCamUIInit();

private:
    Ui::QCamDemo *ui;

protected:
//    bool event(QEvent *event) override;
    void paintEvent(QPaintEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
};

#endif // QCAMDEMO_H
