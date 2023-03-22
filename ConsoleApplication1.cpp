#include <vector>
#include <iostream>
using namespace std;

class pedalina {
public:
    string boja;
    int kapacitet;
};

class GPSKordinate {
public:
    double x, y;
};

class Lokacija {
public:
    string ime, prezime;
    GPSKordinate kordinate;
    vector<pedalina> pedaline;
};



int main()
{
    vector<Lokacija> lokacije;
    int n, m, j;
    Lokacija pom;
    pedalina pomPedalina;

    cout << "Unesite broj lokacija (N): ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        cout << " Unesite odgovornu osobu i GPS koordinate za "<< i+1 <<".lokaciju: " << endl;
        cin >> pom.ime >> pom.prezime >> pom.kordinate.x >> pom.kordinate.y;
        lokacije.push_back(pom);
    }

    cout << "Unesite broj pedalina (M): ";
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        cout << "Unesite redni broj lokacije kojoj pripada " << i + 1 << ".pedalina: ";
        cin >> j;
        cout << "Unesite boju i kapacitet pedaline: ";
        cin >> pomPedalina.boja >> pomPedalina.kapacitet;

        lokacije[j-1].pedaline.push_back(pomPedalina);
    }

    for (int i = 0; i < lokacije.size(); i++)
    {
        cout << "Ispis lokacija i pedalina: " << endl;
        cout << i + 1 << ". " << lokacije[i].kordinate.x << " " << lokacije[i].kordinate.y << " "
            << lokacije[i].ime << " " << lokacije[i].prezime << " - pedaline: ";
        for (int j = 0; j < lokacije[i].pedaline.size(); j++)
        {
            cout << lokacije[i].pedaline[j].boja << " (" << lokacije[i].pedaline[j].kapacitet << ")";
        }
    }
    return 0;
}
