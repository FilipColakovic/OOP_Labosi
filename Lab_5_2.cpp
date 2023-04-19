#include <vector>
#include <iostream>
using namespace std;

class TimeSpan {
public:
    int h, m, s;

    TimeSpan(int h_,int m_, int s_):h(h_),m(m_),s(s_){}

    TimeSpan& operator +(int br) {
        s += br;
        if (s>59)
        {
            s -= 60;
            m += 1;
        }
        if (m>59)
        {
            m -= 60;
            h += 1;
        }
        return *this;
    }

    

    TimeSpan operator --(int) {
        TimeSpan pom = *this;
        if (s!=0)
        {
            s--;
        }
        else if (m != 0) {
            m--;
            s += 59;
        }
        else if(h!= 0) {
            h--;
            m += 59;
            s += 59;
        }
        
        return pom;
    }

};

TimeSpan operator +(int br, TimeSpan T) {
    return T + br;
}

ostream& operator <<(ostream& izlaz, TimeSpan X) {
    izlaz << X.h << ":" << X.m << ":" << X.s;
    return izlaz;
}


int main()
{
    TimeSpan a(1, 0, 0);
    a = a + 10;
    cout << a << endl;  //1:0:10
    a = 65 + a;
    cout << a << endl; //1:1:15

    for (int i = 0; i < 60 * 60 + 74; i++)
        a--;

    cout << a << endl; //0:0:1

    a--;
    a--;

    cout << a << endl; //0:0:0

    return 0;
}