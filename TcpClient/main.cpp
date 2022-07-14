#include "tcpclient.h"
#include <QApplication>
#include "book.h"
//#include "sharefile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("Times", 24, QFont::Bold);
    a.setFont(font);

//    ShareFile w;
//    w.test();
//    w.show();

//    TcpClient w;
//    w.show();
    TcpClient::getInstance().show();

//    Book w;
//    w.show();

    return a.exec();
}
