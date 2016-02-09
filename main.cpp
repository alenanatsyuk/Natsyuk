#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);

QLabel label("<h2><i>Макаренко самый</i> " "<font color = red > умный! </font></h2>");
label.show( );

return app.exec( );
     }