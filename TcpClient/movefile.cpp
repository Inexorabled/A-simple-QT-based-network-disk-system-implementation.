#include "movefile.h"
#include "ui_movefile.h"

MoveFile::MoveFile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoveFile)
{
    ui->setupUi(this);
}

MoveFile::~MoveFile()
{
    delete ui;
}

MoveFile &MoveFile::getInstance()
{
    static MoveFile instance;
    return instance;
}

void MoveFile::on_ok_pb_clicked()
{

}

void MoveFile::on_cancel_pb_clicked()
{

}
