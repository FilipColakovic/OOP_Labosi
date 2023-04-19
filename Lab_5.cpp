#include <vector>
#include <iostream>
using namespace std;

class Slika {
public:
    double cijena;
    static double sumaCijena;
    static int kolicina;

    Slika(double cijena_) : cijena(cijena_) {
        sumaCijena += cijena;
        kolicina++;
    }

    static double ProsjecnaCijena() {
        return sumaCijena / kolicina;
    }

};

double Slika::sumaCijena = 0;
int Slika::kolicina = 0;


int main()
{
    Slika Slika1(2000); // 2000 eura

    Slika Slika2(3000); // 3000 eura

    Slika Slika3(1800); // 1800 eura

    cout << Slika::ProsjecnaCijena() << " eura"; // 2266.67 eura
}

