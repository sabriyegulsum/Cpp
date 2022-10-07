#include "sum.h"        //bu kısımı dahil etmeliyim ki prototipi bilsin gövdenin olduğu kısımda sadece prototip library dahil etderiz  
#include <math.h>
Sum::Sum()
{
    x=10;
    y=20;
}
int Sum::getx(){return x;}
int Sum::gety(){return y;}
void Sum::setx(int x){  this->x=x;}
void Sum::sety(int y){  this->y=y;}
int Sum::sum(){int toplam;  toplam=x+y;     return toplam;}
std::ostream& operator<<(std::ostream&out, Sum& n)
{
    out<<n.x<<","<<n.y;
    return out;
}
find_length::find_length(Sum n, Sum m):n(n),m(m){} //
double find_length::length()                       //
{
    double result;
    double a=m.getx()-n.getx();
    double b=m.gety()-n.gety();
    
    std::cout<<"n.gety:"<<n.gety()<<"a:"<<a<<"b:"<<b<<std::endl;
    a*=a;
    b*=b;
    result=a+b;
    result=sqrt(result);
    return result;
}
Sum find_length::getn(){return n;}
Sum find_length::getm(){return n;}

