#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Tekst {
public:
    string tekst;

    Tekst(const char* tekst_): tekst(tekst_){}

    Tekst& operator *(int br) {
        string pom = tekst;
        for (int i = 0; i < br; i++)
        {
            
            tekst += pom;

        }
        return *this;
    }

    Tekst& operator + (Tekst T) {
        tekst += T.tekst;
        return *this;
    }

    Tekst& operator -(const char* ch) {
        string t = ch;
        this->tekst.replace(t, "");
    }
};

Tekst operator *(int br, Tekst T) {
    string pom = T.tekst;
    for (int i = 0; i < br; i++)
    {

        T.tekst += pom;

    }
    return T;
}

ostream& operator << (ostream& izlaz, Tekst T) {
    izlaz << T.tekst;
    return izlaz;
}

int main() {
    Tekst t = "abc";
    Tekst p = t * 3;                // "umnozavanje" teksta
    cout << p << endl;                // ispisuje abcabcabc
    cout << 2 * t << endl;            // ispisuje abcabc

    // t mora ostati nepromijenjen!!!
    cout << t << endl;                // ispisuje abc

    cout << t + p << endl;            // ispisuje abcabcabcabc
    cout << t + p - 'a' << endl;    // ispisuje bcbcbcbc

    // p i t moraju ostati nepromijenjeni!!!
    cout << p << endl;                // ispisuje abcabcabc
    cout << t << endl;                // ispisuje abc
}

    //Definirajte klasu Tekst koja predstavlja tekstualni tip podatka(kao string), s
    //tim da podrzava operacije*, -i + :
    //-operacija * umnozava tekst.Na primjer, ako je x = "abc" onda x * 3 daje novi
    //objekt tipa Tekst koji sadrzi tekst "abcabcabc".Ova operacija mora raditi i
    //kada je broj s lijeve strane, to jest x * 3 treba davati isti rezultat kao i
    //3 * x
    //- operacija - uklanja zadani znak iz teksta.Na primjer, ako je x = "uvala"
    //onda x - 'a' daje novi objekt tipa Tekst koji sadrzi tekst "uvl", to jest
    //bez slova 'a'
    //- operacija + spaja dva teksta u jedan novi tekst.Na primjer, ako je x = "ab"
    //i y = "cd", onda x + y daje novi objekt tipa Tekst koji sadrzi tekst "abcd"
    //- treba redefinirati i operator << da radi s objektima tipa Tekst

    //Ovu klasu treba definirati tako da funkcija main radi kako je ispod prikazano.