#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineSeries>
#include <QValueAxis>
#include <QBarCategoryAxis>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    void handleComboBoxSelection();
    void updateCenterText();
    void on_numberLineEdit_editingFinished();
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int angularNumber;
    int torqueNumber;
    int velocityNumber;
    int target;

    QLineSeries *series0 = new QLineSeries();
    QLineSeries *series1 = new QLineSeries();
    QLineSeries *series2 = new QLineSeries();
};
#endif // MAINWINDOW_H
