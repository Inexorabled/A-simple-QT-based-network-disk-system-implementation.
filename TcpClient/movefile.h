#ifndef MOVEFILE_H
#define MOVEFILE_H

#include <QWidget>

namespace Ui {
class MoveFile;
}

class MoveFile : public QWidget
{
    Q_OBJECT

public:
    explicit MoveFile(QWidget *parent = 0);
    ~MoveFile();
    static MoveFile &getInstance();

    void init();

private slots:
    void on_ok_pb_clicked();

    void on_cancel_pb_clicked();

private:
    Ui::MoveFile *ui;
};

#endif // MOVEFILE_H
