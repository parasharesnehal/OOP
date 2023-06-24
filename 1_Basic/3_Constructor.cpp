#include<iostream>

using namespace std;

class Hero
{
    public : 

    string name;
    int health;
    int level;

    // 1. Non Parameterized Constructor
    Hero()
    {
        cout << "Constructor was called!!!" << endl;
    }    

    // 2. Parameterized Constructor
    Hero(string name, int health, int level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }



    void getData()
    {
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl; 


    }
};

int main()
{
    Hero h1("Swapnil", 21, 51);
    h1.getData();
}