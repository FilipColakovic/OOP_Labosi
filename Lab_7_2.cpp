#include <vector>
#include <iostream>
using namespace std;

class Racunalo {
public:
    string os;
    
    virtual string getTip() = 0;

};

class Tablet : public Racunalo{
public:
    string os;

    Tablet(string naziv_):os(naziv_){}

    string getTip() override {
        return "Tablet";
    }
};

class Laptop : public Racunalo{
public:
    string os;

    Laptop(string naziv_) :os(naziv_) {}

    string getTip() override {
        return "Laptop";
    }
};

void AnalizaUcionice(vector<Racunalo*> R,int *brTableta,int *brLaptopa,int * brAndroida, int * brWindowsa, int * brLinuxa) {
    *brTableta = 0;
    *brLaptopa = 0;
    *brAndroida = 0;
    *brWindowsa = 0;
    *brLinuxa = 0;

    for (int i = 0; i < R.size(); i++)
    {
        if (R[i]->getTip() == "Tablet") (* brTableta)++;
        if (R[i]->getTip() == "Laptop") (*brLaptopa)++;
        if (R[i]->os == "Android") (*brAndroida)++;
        if (R[i]->os == "Windows") (*brWindowsa)++;
        if (R[i]->os == "Linux") (*brLinuxa)++;
    }

}

int main() {
    int brTableta, brLaptopa;
    int brAndroida, brWindowsa, brLinuxa;

    Tablet Acer("Android"), Prestigio("Windows");
    Laptop Dell("Linux"), IBM("Windows"), Toshiba("Windows");

    vector<Racunalo*> Ucionica1 = { &Acer, &Prestigio, &Dell, &IBM, &Toshiba };
    AnalizaUcionice(Ucionica1, &brTableta, &brLaptopa, &brAndroida, &brWindowsa, &brLinuxa);


    cout << "U ucionici se nalazi " << brTableta + brLaptopa << " racunala" << endl;
    cout << "Broj tablet racunala: " << brTableta << endl;
    cout << "Broj laptop racunala: " << brLaptopa << endl;
    cout << "Android OS: " << brAndroida << endl;
    cout << "Windows OS: " << brWindowsa << endl;
    cout << "Linux OS: " << brLinuxa << endl;

    /* u nastavku ispisite dobivenu analizu ucionice u sljedecem obliku:

    U ucionici se nalazi 5 racunala
    Broj tablet racunala : 2
    Broj laptop racunala : 3
    Android OS : 1
    Windows OS : 3
    Linux OS : 1
    */
    return 0;
}
