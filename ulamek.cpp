#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int ktoraPetla = 0;
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
        cout <<"Wprowadzony ulamek to : Licznik:"<<licznikPV<<"    Mianownik: "<<mianownikPV<<endl;
        if(licznikPV/mianownikPV==1){
             cout <<"Wprowadzony ulamek to inaczej 1" <<endl;
        }else if(mianownikPV==1){
            cout <<"Wprowadzony ulamek mozna zapisac w postaci: "<< licznikPV <<endl;
        }
        if(licznikPV>mianownikPV){
            int i = licznikPV;
            while(i>0){
                if(licznikPV%i== 0 && mianownikPV%i == 0){
                    cout <<"Wprowadzony ulamek mozna zapisac w postaci : "<< licznikPV/i <<"/"<<mianownikPV/i <<endl;
                    i--;
                }else{
                    i--;
                }
            }
        }else{
            int i = mianownikPV;
            while(i>0){
                if(licznikPV%i== 0 && mianownikPV%i == 0){
                    cout <<"Wprowadzony ulamek mozna zapisac w postaci : "<< licznikPV/i <<"/"<<mianownikPV/i <<endl;
                    i--;
                }else{
                    i--;
                }
            }
        }
    }
    void Powieksz(){
        int R;
        int Oile;
        cout<< "Czy chcesz rozszerzyc podany ulamek? (wpisz 1 by zatwierdzic)"<<endl;
        cin >> R;
        if(R==1){
            cout<< "O ile chcesz rozszerzyc? :"<<endl;
        cin >> Oile;
         cout <<"Rozszerzony ulamek to: "<< licznikPV*Oile <<"/"<<mianownikPV*Oile <<endl;
        }
    }


};
void Tekst(){
    int p =0;
    cout << "Co chcesz zrobic?" <<endl;
    cout << "1.Wprowadzic kolejny ulamek" << endl;
    cout <<"2.Rozszerzyc poprzednio podany ulamek" << endl;
    cout << "3.Skrocic poprzednio podany ulamek" << endl;
    cout << "4.Zobaczyc mozliwe skrocenia poprzedniego ulameka" << endl;
    cin >> p;
    if (p==1){
        int l=1;
        int m=1;
        cout <<"Podaj licznik:"<<endl;
        cin >> l;
        cout <<"Podaj mianownik:"<<endl;
        cin >> m;
        ulamek ktoraPetla(l,m);
        ktoraPetla.Wynik();
        Tekst();
    }else if (p == 2){
       
    }
    ktoraPetla++;

};

int main() {
    int l=1;
    int m=1;
    cout << "Witaj!" <<endl;
    cout <<"Podaj licznik:"<<endl;
    cin >> l;
    cout <<"Podaj mianownik:"<<endl;
    cin >> m;
    Tekst();
    ulamek A(l,m);
    A.Wynik();
 cout <<"----------------"<<endl;
   // A.Powieksz();
} 
   