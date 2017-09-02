#include "BugZhangSetter.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

	BugZhangSetter *BZS = new BugZhangSetter();
	BZS->show();

    return a.exec();
}
