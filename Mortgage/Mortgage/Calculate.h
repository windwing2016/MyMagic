#ifndef CALCULATE_H
#define CALCULATE_H
#include <QObject>


class FixRate: public QObject
{
   Q_OBJECT
public:
    FixRate();
    FixRate(double totalcash,double rate,int time);
    ~FixRate();

public:
   double  _totalcash;
   double  _rate;
   int  _time;

};












#endif // CALCULATE_H
