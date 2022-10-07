#ifndef sum_h       //burada verdiğin ismi tanımlamak önemli olan
#define sum_h
#include<math.h>
#include<iostream>
//using namespace std;  tüm kütüpü dahil ettiğinde hata veriyo aşağıda tanımladım
class Sum{
    private:
        int x,y;
    public:
        Sum();  //kurucu func
       
        int getx();
        void setx(int);
        int gety();
        void sety(int );
        int sum();
        friend std::ostream& operator<<(std::ostream&out, Sum& n);
};
class find_length{
    private:
        Sum n,m;  //    uzunluk bul class ının içine iki tane sum dan nesne atıyorum
    public:
        find_length(Sum n, Sum m);       //kurucu değerleri alıcam
        double length();
        Sum getn();
        Sum getm();     
};
#include "sum.cpp"      //kütüphanemizin sonuna gövdeyi include etmeliz aynı normaş kodda ki gibi düşün devamına fonksiyonları tanımllıyorduk.
#endif                  //bir koda ifndef ekliyorsan sonunda endif eklemeliyiz 
// ifndef eğer o kütüphaneyi dahil etmediysen ekle demektir tekrar tekrar eklememek için "if not define"