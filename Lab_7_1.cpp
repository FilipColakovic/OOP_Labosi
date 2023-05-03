#include <iostream>
#include <vector>
using namespace std;

class Korisnik {
private:
    int id;
    string ime, prezime, email;
public:
    Korisnik(){}
    Korisnik(int id_, string ime_, string prezime_, string email_):id(id_), ime(ime_), prezime(prezime_), email(email_){}

    virtual string getEmail() = 0;
};

class Objava {
private:
    string datum, vrijeme, razina_privatnosti;
public:

    Objava(string datum_, string vrijeme_, string razina_privatnosti_):datum(datum_), vrijeme(vrijeme_), razina_privatnosti(razina_privatnosti_){}



};

class Profil : public Korisnik {
public:

    vector<Objava> objave;
    Profil(){}
    Profil(int id_, string ime_, string prezime_, string email_):Korisnik(id_,ime_,  prezime_,  email_){}

    string getEmail() {
        return email;
    }
};

int main()
{
    Korisnik A(1, "Ana", "Anic", "aanic@tvz.hr");
    Profil* A1;

    

}

