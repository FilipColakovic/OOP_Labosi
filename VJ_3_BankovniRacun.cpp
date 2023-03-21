#include <vector>
#include <iostream>
#include <string>
using namespace std;

class BankovniRacun {
private:
    string BankovniRacun, tipKlijenta, tipRacuna;

public:
    void setBankovniRacun(string noviRacun) {
        if (noviRacun[0] != '0') {
            cout << "Prva znamenka je krivo unesena." << endl;
            return;
        }
        else if (noviRacun.length() != 8) {
            cout << "Broj znamenki nije odgovarajuci." << endl;
            return;
        }
        else {
            BankovniRacun = noviRacun;
        }
    }

    string getBankovniRacun() const{
        return BankovniRacun;
    }
    
    void setTipKlijenta(string noviTipKlijent) {
        if (noviTipKlijent == "fizicka" || noviTipKlijent == "privatna") {
            tipKlijenta = noviTipKlijent;
        }
        else {
            cout << "Krivo ste unjeli tip klijenta." << endl;
            return;
        }

    }

    string getTipKlijenta() {
        return tipKlijenta;
    }

    void setTipRacuna(string noviTipRacuna) {
        if (noviTipRacuna == "tekuci" || noviTipRacuna == "ziro-racun" || noviTipRacuna == "devizni") {
            tipRacuna = noviTipRacuna;
        }
        else {
            cout << "Krivo ste unjeli tip racuna." << endl;
            return;
        }
    }

    string getTipRacuna() {
        return tipRacuna;
    }
};

int main()
{
    BankovniRacun A;

    string pomRacun, pomTipKlijent, pomTipRacuna;

    cout << "Unesi bankovni racun (8): ";
    cin >> pomRacun;
    A.setBankovniRacun(pomRacun);
    cout << "Unesi tip klijenta (fizicka/privatna): ";
    cin >> pomTipKlijent;
    A.setTipKlijenta(pomTipKlijent);
    cout << "Unesi tip racuna (tekuci/ziro-racun/devizni): ";
    cin >> pomTipRacuna;
    A.setTipRacuna(pomTipRacuna);




    cout << endl << A.getBankovniRacun() << "\t" << A.getTipKlijenta() << "\t" << A.getTipRacuna() << "\t";

    return 0;
}
