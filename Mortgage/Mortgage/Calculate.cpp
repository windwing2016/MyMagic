#include "Calculate.h"


FixRate::FixRate()
{

}
//----------------------
FixRate::~FixRate()
{

}
//----------------------
FixRate::FixRate(double totalcash, double rate, int time)
{
    _totalcash=totalcash;
    _rate=rate;
    _time=time;
}
