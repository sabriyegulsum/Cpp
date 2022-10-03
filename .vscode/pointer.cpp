#include<iostream>
using namespace std;
class ogrenci{
    public:
    int no;
    string name;
    void deger_ver()
    {
        cout<<"öğrencinin no sunu giriniz";
        cin>>no;
        cout<<"öğrencin adını giriniz";
        cin>>name;
    }
    void yazdir()
    {
        cout<<no<<endl;
        cout<<name<<endl;
    }
    bool func()
    {
        if(no!=-1)
            return true;
        else
            return false;
    }
};
int main()
{
    ogrenci student,*ptr;
    ptr=new ogrenci();
    ptr=&student;
    ptr->deger_ver();
    ptr->yazdir();
    while(ptr->func())
    {
        ptr=new ogrenci();
        ptr->deger_ver();
        if(ptr->no!=-1)
            ptr->yazdir();
    }
    delete ptr;
    return 0;
}