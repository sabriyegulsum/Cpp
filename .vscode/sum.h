#ifndef sum_h       //burada verdiğin ismi tanımlamak önemli olan
#define sum_h
#include<iostream>
//using namespace std;  tüm kütüpü dahil ettiğinde hata veriyo aşağıda tanımladım
class Sum{
    private:
        int x,y;
    public:
        Sum(int x, int y);
        int getx();
        void setx(int);
        int gety();
        void sety(int );
        int sum();
        friend std::ostream& operator<<(std::ostream&out, Sum& n);
};
#include "sum.cpp"
#endif