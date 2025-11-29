#include <QApplication>

#include <QWidget>
#include <FluWidget.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    FluWidget window;
    window.show();
    return app.exec();
}
