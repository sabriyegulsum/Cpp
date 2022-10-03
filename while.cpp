#include<iostream>
using namespace std;
int main()
{
    int i;
    while(i<10)
    {
        if(i==3)
        {
            i++;
            //eğer i yi arttırmazsan sonsuz döngüye girer hep aynı sayıda kalır
            continue;
        }
        cout<<"i:"<<i<<endl;
        i++;
    }
    return 0;
}