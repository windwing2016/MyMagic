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

//--------------------------------
class MCFC_API BoolProperty:public QObject
{
    Q_OBJECT
public:
    BoolProperty(bool defaultValue=true,QObject *parent=NULL);
    BoolProperty(const BoolProperty &prop,QObject *parent=NULL);
    bool Value() const;
    void operator=(const BoolProperty &prop);
    void operator=(bool value);

    bool operator ==(bool value)const;
    bool operator ==(const BoolProperty &prop)const;

    bool operator !=(bool value)const;
    bool operator !=(const BoolProperty &prop)const;

    operator bool()const;

    MCF_BOOL AddDependency(BoolProperty *prop,bool value=true );

    MCF_BOOL RemoveDependency(BoolProperty *prop);

signals:
    void ValueChanged(bool newValue);
    void TrueSet();
    void FalseSet();
public slots:
    void SetValue(bool value);
    void SetToTrue();
    void SetToFalse();
    void SetValue(MCF_UINT value);
private slots:
    void OnLinkedPropertyValueChanged(bool newValue );

private:
    void EvaluateValue();
    MCF_BOOL CycliCheck(BoolProperty * base, BoolProperty * dependentProp);
private:
    bool _value;
    bool _internalValue;
    map<BoolProperty* ,bool> _linkedproperties;
};
//-----------------------------------------------------
class MCFC_API IntProperty:public QObject
{
    Q_OBJECT
public:
    IntProperty(int defaultValue=0,QObject* parent=NULL);
    IntProperty(const IntProperty &prop,QObject *parent=NULL);

    int Value()const;
    void SetNAValue(int value,MCF_BOOL hasNa=MCF_TRUE);

    QString ToString()const;

    void operator =(int value);
    void operator =( const IntProperty &prop);
    bool operator ==(int value) const;
    bool operator ==(const IntProperty &prop)const;
    bool operator !=(int value)const;
    bool operator !=(const IntProperty &prop)const;

    IntProperty & operator ++();
    IntProperty & operator --();

    operator int() const;

    void SetFormat(char format='G',int precision=2);

signals:
    void ValueChanged(int newValue);
    void ValueChanged(const QString &newValue);

public slots:
    void SetValue(int value);
    void SetValue(const QString &value);
    void SetValue(MCF_UINT value);
private:
    MCF_BOOL _hasNaValue;
    int _naValue;
    int _value;
    char _format;
    int _precision;
};






NS_MCFC_END






#endif // BOOLPROPERTY_H
