#include <vector>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Zaposlenik {
public:

    char ime[50];
    char prezime[50];

    Zaposlenik(const char ime_[50],const  char prezime_[50]) {
        cout << "\nZaposlenik constructor called\n";

        strcpy_s(ime, 50, ime_);
        strcpy_s(prezime, 50, prezime_);
    }

    ~Zaposlenik()
    {
        cout << "\nZaposlenik destructor called\n";
    }
};

class Firma {
private:
    string naziv, OIB, AdresaSjedišta;
    

public:

    vector<Zaposlenik> zaposlenici;

    Firma() {}

    void setNaziv(string naziv_) {
        if (naziv_.size() < 5)
        {
            cout << "Naziv firme je prekratak";
            return;
        }
        else {
            naziv = naziv_;
        }
    }

    string getNaziv() {
        return naziv;
    }

    void setOIB(string oib_) {
        if (oib_.size() == 11)
        {
            OIB = oib_;
        }
        else {
            cout << "Broj znamenki OIB-a nije odgovarajuci";
            return;
        }
    }

    string getOIB() {
        return OIB;
    }

    void setAdresaSjedišta(string adresa_) {
        AdresaSjedišta = adresa_;
    }

    string getAdresaSjedišta() {
        return AdresaSjedišta;
    }

    void dodajZaposlenika1(Zaposlenik z) {
        zaposlenici.push_back(z);
    }
    void dodajZaposlenika2(Zaposlenik& z) {
        zaposlenici.push_back(z);
    }
    void dodajZaposlenika3(Zaposlenik* z) {
        zaposlenici.push_back(*z);
    }

    void ispisSvihZaposlenika() {
        for (int i = 0; i < this->zaposlenici.size(); i++)
        {
            cout << "\nIme: " << this->zaposlenici[i].ime;
            cout << "\nPrezme: " << this->zaposlenici[i].prezime;
        }
    }


    Zaposlenik nadjiZaposlenika1(string ime, string prezime)
        Zaposlenik* nadjiZaposlenika2(string ime, string prezime)
        Zaposlenik& nadjiZaposelnika3(string ime, string prezime)


};



int main()
{
    Firma A;
    A.setNaziv("\nabcde");
    A.setOIB("12345678910");
    A.setAdresaSjedišta("ante mateka 2");

    Zaposlenik z1("ivo", "ivek");
    Zaposlenik z2("leo", "lekic");
    Zaposlenik z3("ana", "anic");

    A.dodajZaposlenika1(z1);
    A.dodajZaposlenika2(z2);
    A.dodajZaposlenika3(&z3);


    cout << A.getNaziv() << endl;
    cout << A.getOIB() << endl;
    cout << A.getAdresaSjedišta() << endl;

    cout << A.zaposlenici[0].ime << " " << A.zaposlenici[0].prezime;


    A.ispisSvihZaposlenika();


    return 0;
}
