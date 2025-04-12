#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Добавляем валюты
    ui->comboBoxFrom->addItems({"USD", "EUR", "RUB", "GBP"});
    ui->comboBoxTo->addItems({"USD", "EUR", "RUB", "GBP"});

    // Подключаем кнопку
    connect(ui->pushButtonConvert, &QPushButton::clicked, this, &MainWindow::convertCurrency);
}

void MainWindow::convertCurrency()
{
    // Курсы валют (упрощённо)
    const QMap<QString, double> rates = {
        {"USD", 1.0},
        {"EUR", 0.85},
        {"RUB", 75.0},
        {"GBP", 0.75}
    };

    QString from = ui->comboBoxFrom->currentText();
    QString to = ui->comboBoxTo->currentText();
    double amount = ui->lineEditAmount->text().toDouble();

    if (amount <= 0) {
        ui->labelResult->setText("Введите положительное число");
        return;
    }

    // Конвертация через USD как базовую валюту
    double result = amount * rates[from] / rates[to];

    ui->labelResult->setText(QString::number(result, 'f', 2) + " " + to);
}

MainWindow::~MainWindow()
{
    delete ui;
}
