#include "dlib.h"

Dlib::Dlib()
{
}

int Dlib::plus(int a, int b)
{
    return a+b;
}

int Dlib::plusminus(int a, int b, int c, int d)
{
    Dlibsub l;
    return plus(a,b) - l.minus(c,d) ;
}
