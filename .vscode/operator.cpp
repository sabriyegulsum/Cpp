#include<iostream>
using namespace std;
class ksayi{
    public:
    int reel,sanal;
};
/*simdi burada tam olarak bir operatör aşımı yok çünkü bunu sağlamak için 
o operatörün aslında yapamayacağı bir işlemi yaptırırız mesela iki nesneyi toplamak gibi ya da class taki bir private bir varible a a.x demeden direkt 
cout<<a; diyince ulaşmak gibi normalde yapamayacağı bir işlemi yaptırmaktır 
burada sadece fonkdiyonla ayrı ayrı toplama yaptırıyoruz*/
ksayi operator+(ksayi k1, ksayi k2)   
{
    ksayi sonuc; //ksayi tipinde bir nesne oluşturuyorum
    sonuc.sanal=k1.sanal+k2.sanal;
    sonuc.reel=k1.reel+k2.reel;
    return sonuc;
}
int main()
{
    ksayi a,b,c;
    a.reel=1;       //a=1+3i
    a.sanal=3;
    b.reel=5;       //b=5+2i
    b.sanal=2;
    c=a+b;
    cout<<c.reel<<"+"<<c.sanal<<"i"<<endl;
    return 0;
}
