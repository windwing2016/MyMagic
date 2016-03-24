#include "NotifiableProperties.h"


using namespace Mcf;


BoolProperty::BoolProperty(bool defaultValue, QObject *parent)
    :QObject(parent),_value(defaultValue),_internalValue(defaultValue)
{

}
//------------------------------------------------
BoolProperty::BoolProperty(const BoolProperty &prop, QObject *parent)
    :QObject(parent),_value(prop._value),_internalValue(prop._internalValue),
      _linkedproperties(prop._linkedproperties)
{

}
//--------------------------------------------------------
bool BoolProperty::Value() const
{
    return _value;
}
//---------------------------------------------------------
void BoolProperty::SetToTrue()
{
    SetValue(MCF_TRUE);
}
//------------------------------------------------------
void BoolProperty::SetToFalse()
{
    SetValue(MCF_FALSE);
}
//-------------------------------------------------------
void BoolProperty::SetValue(bool value)
{
    if(_internalValue==value) return;
    _internalValue=value;
    EvaluateValue();
}

//-------------------------------------------------------
void BoolProperty::SetValue(MCF_UINT value)
{
    if(value==0)
    {
       SetValue(MCF_FALSE);
    }
    if(value==1)
    {
        SetValue(MCF_TRUE);
    }

}
//--------------------------------------------------------------
void BoolProperty::operator =(bool value)
{
    SetValue(value);
}
//-------------------------------------------------
void BoolProperty::operator =(const BoolProperty &prop)
{
    SetValue(prop.Value());
}
//-------------------------------------------------
bool BoolProperty::operator ==(bool value) const
{
    return _value==value;
}
//-----------------------------------------------

bool BoolProperty::operator ==(const BoolProperty &prop)const
{
    return _value==prop._value;
}
//----------------------------------------------------
bool BoolProperty::operator !=(bool value)const
{
    return _value!=value;
}
//------------------------------------------------------
bool BoolProperty::operator !=(const BoolProperty &prop)const
{
    return _value!=prop._value;
}
//-------------------------------------------------------------
BoolProperty::operator bool()const
{
    return Value();
}
//-----------------------------------------------------------
MCF_BOOL BoolProperty::AddDependency(BoolProperty *prop, bool value)
{
    Q_ASSERT(prop!=NULL);
    if(CycliCheck(this,prop))
    {
        Q_ASSERT(MCF_FALSE);
        return MCF_FALSE;
    }
    connect(prop,SIGNAL(ValueChanged(bool)),this,SLOT(OnLinkedPropertyValueChanged(bool)), Qt::DirectConnection);
    _linkedproperties.insert(pair<BoolProperty*,bool>(prop,value));
    EvaluateValue();
    return MCF_TRUE;

}
//--------------------------------------------------------
void BoolProperty::OnLinkedPropertyValueChanged(bool newValue)
{
    (void)newValue;
    EvaluateValue();
}

//--------------------------------------------------------
MCF_BOOL BoolProperty::CycliCheck(BoolProperty *base, BoolProperty *dependentProp)
{
    if(base==dependentProp) return MCF_TRUE;

    map<BoolProperty *,bool>::const_iterator it=dependentProp->_linkedproperties.begin();
    while(it!=dependentProp->_linkedproperties.end())
    {
        if(CycliCheck(base,it->first))
            return MCF_TRUE;
        ++it;

    }
    return MCF_FALSE;
}
//---------------------------------------------------------------
MCF_BOOL BoolProperty::RemoveDependency(BoolProperty *prop)
{
    map<BoolProperty*,bool>::iterator it=_linkedproperties.find(prop);
    if(it==_linkedproperties.end())
        return MCF_FALSE;
    EvaluateValue();
    return MCF_TRUE;
}

//---------------------------------------------------------------
void BoolProperty::EvaluateValue()
{
    bool evaluateValue=_internalValue;
    if(evaluateValue)   //if evaluateValue is true
    {
        map<BoolProperty*,bool>::const_iterator it=_linkedproperties.begin();
        while(it!=_linkedproperties.end())
        {
            evaluateValue=it->first->_value ==it->second;
            if(!evaluateValue)
                break;
            ++it;
        }
    }

    if(_value==evaluateValue)
        return ;
    _value=evaluateValue;
    emit ValueChanged(_value);
    if(_value)
    {
        emit FalseSet();
    }
    else
    {
        emit TrueSet();
    }


}
//-------------------------------------------
IntProperty::IntProperty(int defaultValue, QObject *parent)
    :QObject(parent),_value(defaultValue),_format('f'),_precision(0),_hasNaValue(MCF_FALSE)
{

}
//--------------------------------------------
IntProperty::IntProperty(const IntProperty &prop, QObject *parent)
    :QObject(parent),_value(prop._value),_format(prop._format),_precision(prop._precision)
{

}
//------------------------------------------
int IntProperty::Value() const
{
    return _value;
}
//------------------------------------------
void IntProperty::SetNAValue(int value, MCF_BOOL hasNa)
{
    _hasNaValue=hasNa;
    _naValue=value;
}
//-----------------------------------------------------
QString IntProperty::ToString() const
{
    if (_hasNaValue && _value == _naValue)
    {
        return "";
    }
    return QString::number(_value, _format, _precision);

}
//------------------------------------------------------------------------------------------------------
void IntProperty::operator =(int value)
{
    SetValue(value);
}

//------------------------------------------------------------------------------------------------------
void IntProperty::operator =(const IntProperty &prop)
{
    SetValue(prop._value);
}

//------------------------------------------------------------------------------------------------------
bool IntProperty::operator ==(int value) const
{
    return _value == value;
}

//------------------------------------------------------------------------------------------------------
bool IntProperty::operator ==(const IntProperty &prop) const
{
    return _value == prop._value;
}

//------------------------------------------------------------------------------------------------------
bool IntProperty::operator !=(int value) const
{
    return _value != value;
}

//------------------------------------------------------------------------------------------------------
bool IntProperty::operator !=(const IntProperty &prop) const
{
    return _value != prop._value;
}

//------------------------------------------------------------------------------------------------------
IntProperty &IntProperty::operator ++()
{
    SetValue(_value + 1);
    return *this;
}

//------------------------------------------------------------------------------------------------------
IntProperty &IntProperty::operator --()
{
    SetValue(_value - 1);
    return *this;
}

//------------------------------------------------------------------------------------------------------
void IntProperty::SetFormat(char format, int precision)
{
    _format = format;
    _precision = precision;
}

//------------------------------------------------------------------------------------------------------
IntProperty::operator int() const
{
    return Value();
}

//------------------------------------------------------------------------------------------------------
void IntProperty::SetValue(int value)
{
    if (_value == value) return;
    _value = value;
    emit ValueChanged(value);

    // Emit string version signal.
    emit ValueChanged(ToString());
}

void IntProperty::SetValue(const QString &value)
{
    if (_value == value.toInt()) return;
    _value = value.toInt();
}

void Mcf::IntProperty::SetValue(MCF_UINT value)
{
    if (_value == (int)value) return;
    _value = value;

    emit ValueChanged(value);

    // Emit string version signal.
    emit ValueChanged(ToString());
}

Test::Test()
{

}

Test::~Test()
{

}

MCF_DOUBLE  Test::add(MCF_DOUBLE a,MCF_DOUBLE b)
{
    return a+b;

}
