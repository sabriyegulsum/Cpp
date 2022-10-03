#include<iostream>
using namespace std;
int main()
{
    struct std{
        int a;
        string name;
    };
    typedef struct std std;
    std ogrenci={156,"sabriye"};
    cout<<ogrenci.a<<" "<<ogrenci.name;

    return 0;
}