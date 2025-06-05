#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QMap<QString, QString> currencyMap = {
        {"Доллар", "USD"},
        {"Евро", "EUR"},
        {"Рубль", "RUB"},
        {"Фунт", "GBP"}
    };

    ui->comboBoxFrom->addItems(currencyMap.keys());
    ui->comboBoxTo->addItems(currencyMap.keys());
    connect(ui->pushButtonConvert, &QPushButton::clicked, this, &MainWindow::convertCurrency);
}

void MainWindow::convertCurrency()
{
    QMap<QString, QString> currencyMap = {
        {"Доллар", "USD"},
        {"Евро", "EUR"},
        {"Рубль", "RUB"},
        {"Фунт", "GBP"}
    };

    const QMap<QString, double> rates = {
        {"USD", 1.0},
        {"EUR", 0.85},
        {"RUB", 75.0},
        {"GBP", 0.75}
    };

    QString fromText = ui->comboBoxFrom->currentText();
    QString toText = ui->comboBoxTo->currentText();
    QString from = currencyMap.value(fromText);
    QString to = currencyMap.value(toText);
    double amount = ui->lineEditAmount->text().toDouble();

    if (amount <= 0) {
        ui->labelResult->setText("Введите положительное число");
        return;
    }

    if (!rates.contains(from) || !rates.contains(to)) {
        ui->labelResult->setText("Ошибка: неизвестная валюта");
        return;
    }

    double result = amount * rates[from] / rates[to];

    ui->labelResult->setText(QString::number(result, 'f', 2) + " " + toText);
}

MainWindow::~MainWindow()
{
    delete ui;
}
