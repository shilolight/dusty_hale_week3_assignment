#include<iostream>
#include"opponent.h"

using namespace std;

opponent::opponent() {
    int health;
}
string opponent::attack() {
    srand(time(0));
    int number = rand()%3;
    switch (number) {
    case 1:
        return "melee";
        break;
    case 2:
        return "magic";
        break;
    case 3:
        return "ranged";
        break;
    }
}
