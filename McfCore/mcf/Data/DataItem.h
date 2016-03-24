#ifndef DATAITEM_H
#define DATAITEM_H

#include <../McfCore/mcf.h>
#include <../McfCore/mcfcore.h>
#include <QRect>
#include <QImage>

NS_MCFC_BEGIN
using namespace Mcf;

class MCFC_API DataItem :public QObject
{
    Q_OBJECT
public:
    DataItem(MCF_UINT key, const QString &name)
          :_key(key),_name(name)
    {}
    MCF_UINT Key()const {return _key;}
    const QString &Name() const {return _name;}

    virtual QVariant VariantDefault() const=0;
    virtual QVariant VariantValue()const=0;
    virtual void SetValue() const=0;
    virtual void RestoreDefault()=0;
    virtual MCF_RESPONSE Validata()=0;

private:
   MCF_UINT _key;
   QString  _name;




};









NS_MCFC_END














#endif // DATAITEM_H
