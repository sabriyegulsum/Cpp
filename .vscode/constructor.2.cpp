#include<iostream>
using namespace std;
class A{
    private:
    int x;
    int y;
    public:
    A()  //kurucu fonsiyonumun sadece prototipini yazdığımda olmuyor gövdesinide class ın içinde yazmam gerekiyor.Ama bu sadece bu benim derleyici hatası
    {
        cout<<"Parametresiz constructor"<<endl;
        x=0;
        y=0;
    }
    A(int _x,int _y=8)        //ikisine birden değer veremem çünkü o zaman paramatresiz constructor hata vericek 
    {                          //aslında bir fonksiyon overload ettiğinde yazımaşamasında deerleyici karıştırmamalı söyle f(int a=3 int b)
        cout<<"Parametreli constructor"<<endl;                                                                          //f(int)           bu iki fonk da  f(5)
        x=_x;                                                                                                           //şeklinde çalıştırılabilir ve hata verir
        y=_y;
    }
    int getx();
    int gety();
};
int A::getx()
{
    return x;
}
int A::gety()
{
    return y;
}
int main()
{
    //A dizi[5]={A(1,1),A(1),A(1,2)}; //yazım şekli böyle syntax cnm :)
    cout<<"ptr"<<endl;
    A *ptr= new A();         //ptr da nasıl yer alıyorduk burada kurucu fonksiyon çağırırız ama normal dnamil hafıza ile işim yoksa gerek yok parantezli yazmaya
    cout<<"pptr"<<endl; 
    A *pptr=new A(13);
    cout<<pptr->getx()<<","<<pptr->gety()<<endl;
    // şöyle bir hata yaptım ptr->getx();
    //      getx() e ulaşmayı unuttum sabriyecim farklı objelerin var hangisinin hanfisinin fonksiyonu önemli
    //dikkat poiterda direk A a gibi obje oluşturmayız çünkü aynı c de ki gibi ya başka bir objeyi tutturacaksın ya da ona new A();
    //ile yer alıcaksın (malloc aslında) yani parametresizlerde eğer pointer değilse fonksiyon parantezi açmana gerek yok ama pointer sa O PARANTEZ AÇILACAK 
    //parametreli olsun veya olmaasın
    
    
    //for(int i=0;i<5;i++)
        //cout<<dizi[i].getx()<<","<<dizi[i].gety()<<endl;
    
return 0;
}
/*dizi tanımlamalarında bu şekilde olur çünkü sü yok ama şöyle ki 
obje dizisinde parametre vermediklerin de olabilir 
dizideki butun yapıcı fonklar aynı fonk da üretilmek zorunda değil */