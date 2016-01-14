#ifndef BOOLPROPERTY_H
#define BOOLPROPERTY_H


#include "../McfCore/mcf.h"
#include "../McfCore/mcfcore.h"
#include <map>
#include <QDateTime>
#include <QImage>

using namespace std;

NS_MCFC_BEGIN

class MCFC_API Test :public QObject
{
    Q_OBJECT
public:

    Test();
    ~Test();
public:
    MCF_DOUBLE add(MCF_DOUBLE a,MCF_DOUBLE b);


};








NS_MCFC_END






#endif // BOOLPROPERTY_H
