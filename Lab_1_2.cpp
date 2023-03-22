#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Student {
public:
    string imePrezime, jmbag;

    Student(string imePrezime_, string jmbag_): imePrezime(imePrezime_), jmbag(jmbag_){}
};

class Bodovi {
public:
    Student student;
    int bodovi;

    Bodovi(Student student_, int bodovi_): student(student_), bodovi(bodovi_){}
};

class Kolegij {
public:
    string naziv;
    vector<Bodovi> bodovi;

    Kolegij(string naziv_, vector<Bodovi> bodovi_): naziv(naziv_), bodovi(bodovi_){}
};

bool sortiranje(Bodovi B1, Bodovi B2) {
    return B1.bodovi < B2.bodovi;
}

int main() {

    vector<Bodovi> OOPBodovi{

                  Bodovi(Student("Ivana Ivic", "0246002475"), 25),

                  Bodovi(Student("Ivica Ivanovic", "0246005654"), 20),

                  Bodovi(Student("Marko Markic", "0246004234"), 32)

    };

    Kolegij OOP("Objektno orijentirano programiranje", OOPBodovi);

    sort(OOPBodovi.begin(), OOPBodovi.end(), sortiranje);

    for (int i = 0; i < OOPBodovi.size(); i++)
    {
        cout << OOPBodovi[i].student.imePrezime << "\t" << OOPBodovi[i].student.jmbag << "\t" << OOPBodovi[i].bodovi << endl << endl;
    }


    /* Preko objekta OOP ispišite bodove svih studenata tog kolegija poèevši od

       onih s najmanjim brojem bodova prema veæim. Npr.;


       Objektno orijentirano programiranje bodovi:

       Ivica Ivanovic  0246005654      20

       Ivana Ivic      0246002475      25

       Marko Markic    0246004234      32

    */

    return 0;

}