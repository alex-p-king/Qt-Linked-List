#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_addNodeButton_clicked()
{
    qDebug() << "add node button clicked";
}

void Widget::on_removeNodeButton_clicked()
{
    qDebug() << "remove node button clicked";
}
