/**
  * \file main.cpp
  *
  * The main entry point for the TikZiT executable.
  */

#include "tikzit.h"

#include <QApplication>
#include <QMenuBar>



int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
    //QCoreApplication::setAttribute(Qt::AA_DisableHighDpiScaling);
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    tikzit = new Tikzit();
    tikzit->init(&a);
	
    if (a.arguments().length() > 1) {
		tikzit->open(a.arguments()[1]);
	}

    return a.exec();
}
