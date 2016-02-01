#include "mainwindow.h"
#include <QApplication>
#include <../McfCore/mcf.h>
#include <QTextCodec>

int main(int argc, char *argv[])
{
#ifdef WIN32
#ifndef QT_DEBUG
    SetUnhandledExceptionFilter(GTPUnhandledExceptionFilter);
#endif /* QT_DEBUG */
#endif /* WIN32 */
    // Initialize main window and run QT application.
    QApplication a(argc, argv);
    QApplication::addLibraryPath("./plugins");
    //Qt 的安装目录有一个plugins目录 ，该目录放着一些常用插件 如数据驱动文字编码 图像解析等在 发布程序的时候需要与exe文件
    //放在一起 。
    QTextCodec *codec=QTextCodec::codecForName("System");
    QTextCodec::setCodecForLocale(codec);
    //  QTextCodec  是文本的编码形式 而一般的系统的编码方式默认是System  为GBK形式
    MCF_STRING lang=_L("EN");
    try
    {
        QApplication::setApplicationVersion()

    }


    MainWindow w;
    w.show();



    return a.exec();
}
