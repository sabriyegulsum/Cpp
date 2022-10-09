#ifndef employe_h
#define employe_h
#include<iostream>

using namespace std;
class Employe{
public:
    string name;
    int salary;
    void showInfo();
};
#include "employe.cpp"      
//yazdığım gövdeyi dahil ettim. dahil etmezsem sonuna her bir özellik için Employe::name şeklinde kullanmam gerekiyor 
#endif
//kütüphane oluşturuken aynı isimde(tercihen) bir _ ile ifndef yazar define eder ve endif yazarsın