#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int islem;
    cout<<"Toplama işlemi için:1";
    cout<<"Cıkarma işlemi için:2";
    cout<<"Çarpma işlemi için:3";
    cout<<"Bolme işlemi için:4"<<endl;
    cout<<"işlem:";
    cin>>islem;
    if(islem==1)
    {
        cout<<"sayıları giriniz;";
        //varialeları ayrı ayrı alabilirsin 
        cin>>a;
        cin>>b;
        cout<<a+b;
    }
    else if(islem==2)
    {
        cout<<"sayıları giriniz;";
        cin>>a>>b;
        cout<<a-b;
    }
    else if(islem==3)
    {
        cout<<"sayıları giriniz;";
        cin>>a>>b;
        cout<<a*b;
    }
    else if(islem==4)
    {
        cout<<"sayıları giriniz;";
        //variableları aynı anda alabilirsin
        cin>>a>>b;
        cout<<a/b;
    }
    else
        cout<<"yanşlış seçim";
    
    return 0;
}
