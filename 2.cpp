#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);

QLabel label("<h2><i>Makarenko is</i> " "<font color = red > the best! </font></h2>");
label.show( );

return app.exec( );
}