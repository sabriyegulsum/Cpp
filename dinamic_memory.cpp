#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int size;
    cout<<"kaç integer lık alan saklıyıcaksınız?";
    cin>>size;
    ptr=new int[size];
    cout<<"değerleri giriniz";
    for(int i=0;i<size;i++)
        cin>>*(ptr+i);
    for(int i=0;i<size;i++)
        cout<<(i+1)<<".değer:"<<*(ptr+i)<<endl;
    
    return 0;
}