#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->comboBoxFrom->addItems({"USD", "EUR", "RUB"});
    ui->comboBoxTo->addItems({"USD", "EUR", "RUB"});
    connect(ui->pushButtonConvert, &QPushButton::clicked,
            this, &MainWindow::convertCurrency);
    this->setStyleSheet(
        "QMainWindow { background-color: #333; }"
        "QLabel, QComboBox, QLineEdit, QPushButton { color: white; }"
        "QPushButton { background-color: #555; }"
    );
    QPropertyAnimation *anim = new QPropertyAnimation(ui->pushButtonConvert, "geometry");
    anim->setDuration(100);
    anim->setKeyValueAt(0, ui->pushButtonConvert->geometry());
    anim->setKeyValueAt(0.5, ui->pushButtonConvert->geometry().adjusted(-5, -5, 5, 5));
    anim->setKeyValueAt(1, ui->pushButtonConvert->geometry());
    connect(ui->pushButtonConvert, &QPushButton::pressed, [anim]() { anim->start(); });
}

void MainWindow::convertCurrency()
{
    double amount = ui->lineEditAmount->text().toDouble();
    QString from = ui->comboBoxFrom->currentText();
    QString to = ui->comboBoxTo->currentText();

    double rate = 1.0;
    if (from == "USD" && to == "EUR") rate = 0.85;
    if (from == "EUR" && to == "USD") rate = 1.18;
    if (from == "USD" && to == "RUB") rate = 75.0;
    if (from == "EUR" && to == "RUB") rate = 88.0;
    if (from == "RUB" && to == "USD") rate = 0.013;
    if (from == "RUB" && to == "EUR") rate = 0.011;

    double result = amount * rate;
    ui->labelResult->setText(QString::number(result, 'f', 2));
}

MainWindow::~MainWindow()
{
    delete ui;
}
