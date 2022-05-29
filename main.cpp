#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget q;
	QLabel *pLabel = new QLabel(&q);
	pLabel->setText("Hello World");
    pLabel->move(100,100);
    q.show();
    return a.exec();
}
