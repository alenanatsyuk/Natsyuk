#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);

QLabel *label = new QLabel ("<h2><i>Semenov is</i> " "<font color = red > the most beautiful! </font> </h2>");
label->show( );

return app.exec( );
}