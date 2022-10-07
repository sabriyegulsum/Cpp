#include<iostream>
#include "sum.h" //mainde yine library dahil ederiz
using namespace std;


int main()
{
    int a,b;
    Sum n,m;
    cout<<"birinci noktanını koordinatlarını giriniz"<<endl; ///
    cout<<"x:";
        cin>>a;
        n.setx(a);
        cout<<"y:";
        cin>>b;
        n.sety(b);
        cout<<"ikinci noktanın koordinatlarını giriniz"<<endl;
        cout<<"x:";
        cin>>a;
        m.setx(a);
        cout<<"y:";
        cin>>b;
        m.sety(b);
    find_length cizgi(n,m);
    //cout<<n.sum()<<endl<<m.sum()<<endl;
    cout<<"iki  nokta arasındaki en kısa uzaklık:"<<cizgi.length();
    return 0;
}