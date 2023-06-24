#include<iostream>

using namespace std;

class Hero
{
    public:
    string name;
    int health;
    int level;

    Hero(string name, int health, int level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }

    // Destructor

    ~Hero()
    {
        cout << "Destructor was called!!!" << endl;
    }

};

int main()
{
    Hero h1("Swapnil", 21, 51);                  // Here Destructor gets called automatically.

    Hero* h2 = new Hero("Atharva", 45,86);       // Here Destructor needs to be called explicitlly.
    delete h2;

}