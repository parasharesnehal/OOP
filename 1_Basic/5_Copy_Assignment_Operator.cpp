#include<iostream>

using namespace std;

class Hero
{
    public : 
    string name;
    int* health;
    int level;


    // Parameteriezed Contructor
    Hero(string name, int* health, int level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
    }

    // Copy Constructor
    Hero(Hero& h)
    {
        this->name = h.name;

        this->health = new int;
        *(this->health) = *(h.health);

        this->level = h.level;
    }


    void getData()
    {
        cout << "\nName : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl; 


    }
};

int main()
{
    int x = 21;
    int y = 121;
    Hero h1("Swapnil", &x, 51);

    Hero h2("Atharva", &y, 98);



    cout << "\n Before : \n" << endl;

    h1.getData();
    h2.getData();

    cout << "\nH1 Health : " << *(h1.health) << endl;
    cout << "H2 Health : " << *(h2.health) << endl;


    h2 = h1;                                                    // Copy Assignment Operator '=' also creates a Shallow Copy.

    cout << "\n After : \n" << endl;

    h1.getData();
    h2.getData();

    cout << "\nH1 Health : " << *(h1.health) << endl;
    cout << "H2 Health : " << *(h2.health) << endl;






}