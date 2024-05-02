#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QComboBox>
#include <QSerialPort>
#include <QFontDatabase>
#include <QtCharts>
#include <QtWidgets/QMainWindow>
#include <QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QRgb>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #1B1A55");

    angularNumber = 0;
    torqueNumber = 0;
    velocityNumber = 0;
    target = ui->centerText->text().toInt();

    connect(ui->comboBoxChoices, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &MainWindow::handleComboBoxSelection);
    connect(ui->targetSet, &QLineEdit::editingFinished, this,
            &MainWindow::on_numberLineEdit_editingFinished);

    ui->background->setStyleSheet("border-radius: 10px; background-color: #9290C3");

    ui->targetSet->setStyleSheet("border-radius: 10px; background-color: #9290C3");

    ui->currentValue->setStyleSheet("border-radius: 10px; background-color: #9290C3");

    ui->centerText->setStyleSheet("border: 2px solid #FFFFFF;"
                                  " background-color: #9290C3;"
                                  "border-radius: 10px;"
                                  "padding: 5px;"
                                );

    ui->targetSet->setStyleSheet("QLineEdit {"
                            "background-color: white;" // White background color for QLineEdit
                            "border: 1px solid gray;" // Gray border
                            "border-radius: 5px;" // Rounded corners
                            "padding: 2px;" // Add some padding
                            "}"
                            "QLineEdit:focus {"
                            "border-color: #4CAF50;" // Change border color when QLineEdit is focused
                            "}");


    ui->comboBoxChoices->setStyleSheet("QComboBox {"
                            "background-color: white;"
                            "color: black;"
                            "border: 1px solid gray;"
                            "border-radius: 5px;"
                            "padding: 1px 18px 1px 3px;"
                            "min-width: 6em;"
                            "}"
                            "QComboBox::drop-down {"
                            "subcontrol-origin: padding;"
                            "subcontrol-position: top right;"
                            "width: 20px;"
                            "border-left-width: 1px;"
                            "border-left-color: darkgray;"
                            "border-left-style: solid;"
                            "border-top-right-radius: 3px;"
                            "border-bottom-right-radius: 3px;"
                            "}"
                            "QComboBox QAbstractItemView {"
                            "background-color: lightGray;" // Set the background color of the dropdown
                            "color: black;" // Set the text color of the dropdown items
                            "}"
                            );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleComboBoxSelection()
{
    QString selectedText = ui->comboBoxChoices->currentText();
    qDebug() << "Selection changed to" << selectedText;
    updateCenterText();
}

void MainWindow::updateCenterText()
{
    QString selectedText = ui->comboBoxChoices->currentText();
    if (selectedText == "Angle")
    {
        ui->centerText->setText(QString::number(angularNumber));
        ui->currentValue->setText("Current Target Angle");
    }
    else if (selectedText == "Torque")
    {
        ui->centerText->setText(QString::number(torqueNumber));
        ui->currentValue->setText("Current Target Torque");
    }
    else if (selectedText == "Velocity")
    {
        ui->centerText->setText(QString::number(velocityNumber));
        ui->currentValue->setText("Current Target velocity");
    }
}

void MainWindow::on_numberLineEdit_editingFinished()
{
    QString text = ui->targetSet->text();
    bool ok;
    int number = text.toInt(&ok);

    if(ok){
        ui->centerText->setText(text);
    }
    else{
        qDebug() << "Please input a number";
    }
}
