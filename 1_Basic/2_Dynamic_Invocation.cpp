#include<iostream>

using namespace std;

class Hero
{
    public :

    string name;
    int health;
    int level;
};

int main()
{
    // Static Allocation
    Hero h1;
    h1.name = "Swapnil";
    h1.health = 10;
    h1.level = 21;

    // Dynamic Allocation
    Hero* h2 = new Hero();
    h2->name = "Arjun";
    h2->health = 7;
    h2->level = 51;

    cout << "Hello" << endl;
}