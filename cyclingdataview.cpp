// cyclingdataview.cpp : Defines the entry point for the console application.

#include <QApplication>
#include <QSplashScreen>

//#include <windows.h>
#include "mainwindow.h"

int main( int argc, char ** argv )
{
	QApplication a( argc, argv );

	QPixmap pixmap("resources/splash_screen.png");
	QSplashScreen splash(pixmap);
	splash.show();
    sleep(1); // msec

    MainWindow* mw = new MainWindow();
	mw->showMaximized();
	splash.finish(mw);
	mw->refresh();

    return a.exec();
}
