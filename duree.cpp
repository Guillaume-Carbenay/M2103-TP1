#include <iostream>
#include <iomanip>
#include "duree.h"

using namespace std;

Duree::Duree(int seconds)
{
    myDuree = seconds;
    normaliser();
}

/*void Duree::display()
{
    cout << setfill(' ') << setw(3) << myDays << "j" << setfill('0') << setw(2) << myHours << "h" << setfill('0') << setw(2) << myMinutes << "m" << setfill('0') << setw(2) << mySeconds << "s" << endl;
}*/

void Duree::display()
{
    cout << "[" << setfill(' ') << setw(5) << myDays << ":" << setfill('0') << setw(2) << myHours << ":" << setw(2) << myMinutes << ":" << setw(2) << mySeconds << "]" << endl;
}

void Duree::incr(unsigned long Delta)
{
    myDuree += Delta;
    normaliser();
}

void Duree::decr(unsigned long Delta)
{
    myDuree -= Delta;
    normaliser();
}

const int Duree::getDuree()
{
    return myDuree;
}

void Duree::normaliser()
{
    int dureeEnSecondes = myDuree;
    myDays = int(myDuree/(24*3600));
    dureeEnSecondes -= myDays*(24*3600);
    myHours = int(dureeEnSecondes/3600);
    dureeEnSecondes -= myHours*3600;
    myMinutes = int(dureeEnSecondes/60);
    dureeEnSecondes -= myMinutes*60;
    mySeconds = dureeEnSecondes;
}

Duree::~Duree()
{
    cout << "Cette duree a ete detruite : ";
    display();
}
