#include <QCoreApplication>
#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <../McfCore/mcf/ViewModels/NotifiableProperties.h>
#include <QDebug>
#include "GetApplicationPath.h"
#include <../McfCore/McfContext.h>
#include "show_bytes.h"

using namespace std;
using namespace Mcf;


//Test temp;





int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
  //  qRegisterMetaType<Test>("Test");
    //  Test temp;
//      MCF_DOUBLE result=temp.add(3.3,3.3);
//   MCF_DOUBLE result=   temp.add(3.3,4.3);
//    qDebug()<<result;

    Call_GetBinFolder();
    //int val=8;

//    int val_x=4;
//    int val_y=8;
//    inplace_swap(&val_x,&val_y);
//    cout<<val_x<<endl;
//    cout<<val_y<<endl;

  //  test_show_bytes(val);



    return a.exec();
}
