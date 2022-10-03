#include<iostream>
using namespace std;
int main()
{
    string name="sabriye",password="12345";
    string name1,password1;
    cout<<"isim:";
    cin>>name1;
    cout<<"\npassword";
    cin>>password1;
    if(name==name1 && password==password1)
        cout<<"hoşgeldiniz";
    else if(name!=name1 &&password==password1)
        cout<<"kullanıcı adı hatalı";
    else if(name==name1 &&password!=password1)
        cout<<"password hatalı";
    else
        cout<<"kayıtlı değilsiniz";
    return 0;
}