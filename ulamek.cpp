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
            mianownikPV =0;
            licznikPV = l;
        }else{
            mianownikPV = m;
            licznikPV = l;
        }   
    }
    void Wynik(){
        cout <<licznikPV<<"/"<<mianownikPV<<endl;
    }
};

int main() {
    ulamek A(2,4);
    A.Wynik();
}