#ifndef DUREE_H
#define DUREE_H
#include <iostream>

using namespace std;
class Duree
{
     int myDuree, mySeconds, myMinutes, myHours, myDays;
     void normaliser();
public:
    ~Duree();
    Duree(int seconds);
    int MyDuree;
    const int getDuree();
    void display();
    void incr (unsigned long Delta);
    void decr (unsigned long Delta);
    //~Duree();
};

#endif // DUREE_H
