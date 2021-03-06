#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsSceneMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void addPlot(QString);

public slots:
    void on_exitbutton_pressed();
    void on_readfilebutton_pressed();
    void on_savefilebutton_pressed();
    void on_runbutton_pressed();
    void mousePressEvent(QMouseEvent *mouseEvent);


private:
    Ui::MainWindow *ui;
    std::tuple<float, float, float, float> parseDomain(QString);
    void parseBC(std::vector<float>&);
    void parseRHS(std::vector<float>&);
};

#endif // MAINWINDOW_H
