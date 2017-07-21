#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

    void slotShowGuiConfigur();
    void slotShowAudConfigur();
    void slotShowCamConfigur();
    void slotShowLive();
    void slotShowVidPlayback();
    void slotShowNetRecord();
    void slotShowEducontrol();
    void slotShowChaConsole();
    void slotShowSysConfigur();
    void slotShowDisManagement();
protected:
    virtual void mouseMoveEvent(QMouseEvent *event);
    bool event(QEvent *event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
