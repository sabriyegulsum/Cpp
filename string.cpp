#include<iostream>
using namespace std;
int main()
{
    string str1="sabriye";
    string str2="gulsum";
    string str3=str1+str2;
    cout<<str3<<endl;
    if(str1=="sabriye")
        cout<<"str1 sabriye dir";
    else
        cout<<"str1 sabriye değildir";

    return 0;
}
// cpp de string aynı sayılar gibi eşit mi diye kontrol edilebilir
//ama c de ya fonk yazarsın ya da strcmp ile kontrol edersin