#include <iostream>
#include <fstream>
#include <iomanip>
#include "duree.h"
using namespace std;

void testDureeDeBase()
{
    Duree d1 (0);
    d1.incr (1);
    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
         << ", soit : ";
    d1.display ();
    cout << '\n';

    d1.decr (1);
    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
         << ", soit : ";
    d1.display ();
    cout << '\n';

    d1.incr (3662);
    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
         << ", soit : ";
    d1.display ();
    cout << '\n';

    d1.decr (10000);
    cout << "Nbre sec. " << setw (6) << d1.getDuree ()
         << ", soit : ";
    d1.display ();
    cout << '\n';
}

int main()
{
    int s;
   /* while (true)
    {
        cin >> s;
        Duree maDuree(s);
        maDuree.display();
    }*/
    testDureeDeBase();
    return 0;
}
