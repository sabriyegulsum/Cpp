#include "sum.h"        //bu kısımı dahil etmeliyim ki prototipi bilsin
//gövdenin olduğu kısımda sadece prototip library dahil etderiz  
Sum::Sum(int x, int y)
{
    this->x=x;
    this->y=y;
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