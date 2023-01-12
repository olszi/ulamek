#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class ulamek
{
    int licznikPV,mianownikPV;
    public:
    ulamek(int l , int m){
        if(m==0){
            mianownikPV =1;
            cout <<"Wprowadzony ulamek jest nieprawidlowy, nie mozesz dzielic przez 0,zamieniam mianownik na 1"<< endl;
            licznikPV = l;
        }else{
            mianownikPV = m;
            licznikPV = l;
        }   
    }
    void Wynik(){
        cout <<"Wprowadzony ulamek to "<<licznikPV<<"/"<<mianownikPV<<endl;
        if(licznikPV/mianownikPV==1){
             cout <<"Wprowadzony ulamek to inaczej 1" <<endl;
        }else if(mianownikPV==1){
            cout <<"Wprowadzony ulamek mozna zapisac w postaci: "<< licznikPV <<endl;
        }
    }

};

int main() {
    ulamek A(2,0);
    A.Wynik();
}