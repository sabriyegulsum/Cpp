//destructor yıkım demektir. niyi yıkıyoruz: eğer class ının özelliklerinde * var ise onu programını biritidiğinde onu hafıadan silmen gerekir
//aynı c deki free gibi :)
#include<iostream>
using namespace std;
class Nokta{
    private:
        int x;
        int y;
        int *z;           
    public:
        int getx();
        int gety();
        int getz();

        ~Nokta();           //yıkıcı fonksiyonlar yapıcı gibiler fakat parametre almazlar
        Nokta();                    //yıkıcı fonksiyonu yazıyorsam class ımın içinde pointer var  bellek ayırmışım demektir
        
};
int Nokta:: getx()
{
    return x;
}
int Nokta:: gety()
{
    return y;
}
int  Nokta:: getz()
{
    return *z;
}
Nokta::Nokta()
{
    cout<<"yapıcı fonksiyon çalıştı";
    x=1;
    y=2;
    z=new int(3);   
           //ilk değer ataması bu şekilde  yada int in içine bir şey yazmazsın *z=3 yazarsın tek satırda değer vermek için
}
Nokta::~Nokta()
{
    cout<<"yıkıcı fonksiyon çalıştı";
    delete(z);
}
int main()
{
    Nokta n;   //parametresiz kurucu fonksiyon çalıştı
    cout<<"x:"<<n.getx()<<" y:"<<n.gety()<<" z:"<<n.getz()<<endl;
    return 0;
}
//yıkıcı fonksiyon sadece bir tane olur 
//parametre almaz
//structumın kendsi * olsa ve içindeki değereler de * olsa ayrı ayrı hem struc tı free leriz hemde içindeki varibla ı
//yani bir yerde koodlarken malloc kullandın where is the free :)
   