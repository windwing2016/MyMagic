#include <QCoreApplication>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>
#include <QDebug>

using namespace std;
using namespace Mcf;

//Test temp;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
  //  qRegisterMetaType<Test>("Test");
      Test temp;
//      MCF_DOUBLE result=temp.add(3.3,3.3);
//   MCF_DOUBLE result=   temp.add(3.3,4.3);
//    qDebug()<<result;



    return a.exec();
}
