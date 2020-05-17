#include "slib.h"

Slib::Slib()
{
}

int Slib::plus(int a, int b)
{
    return a+b;
}

int Slib::plusminus(int a,int b,int c,int d)
{
    Slibsub l;
    return plus(a,b) - l.minus(c,d);
}
