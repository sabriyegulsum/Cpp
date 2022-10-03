#include<iostream>
using namespace std;
class Nokta{
    public:
    int x,y;
    void degerAta(int,int);
    void ekranaYaz();
    bool baslangictaMi();
};
void Nokta::degerAta(int _x,int _y)
    {
        x=_x;
        y=_y;
    }
    void Nokta::ekranaYaz()
    {
        cout<<x<<","<<y<<endl;
    }
    bool Nokta:: baslangictaMi()
    {
        if(x==0 && y==0)
            return true;
        else
            return false;
    }
int main()
{
    Nokta n1;
    Nokta n2;
    Nokta *n3;
    Nokta *n4=new Nokta();
    Nokta dizi[10];
    Nokta *Parray= new Nokta[10];
    for(int i=0;i<10;i++)
    {
        dizi[i].degerAta(i,i+2);
    }
     for(int i=0;i<10;i++)
    {
        dizi[i].ekranaYaz();
    }
    for(int i=0;i<10;i++)
    {
        (Parray+i)->degerAta(i*5,i*10);
    }
    for(int i=0;i<10;i++)
    {
        (Parray+i)->ekranaYaz();
    }
    cout<<"dizi bitmiştir"<<endl;
    n3=&n2;
    n1.degerAta(1,0);
    n1.ekranaYaz();
    n2.degerAta(0,0);
    n2.ekranaYaz();
    if(n1.baslangictaMi())
        cout<<"n1 başlangıç noktasındadır"<<endl;
    if(n2.baslangictaMi())
        cout<<"n2 başlangıç noktasındadır"<<endl;

    cout<<"n3 pointer ile yazılan değerler"<<endl;
    n3->ekranaYaz();
    n4->degerAta(100,200);
    n4->ekranaYaz();
    return 0;

}