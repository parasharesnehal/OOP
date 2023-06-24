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
        cout << "Name : " << this->name << endl;
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl; 


    }
};

int main()
{
    int x = 21;
    Hero h1("Swapnil", &x, 51);

    Hero h2 = h1;
    Hero h3(h1);

    h1.getData();
    h2.getData();
    h3.getData();

    /*
    Here we can observe 'health' pointer of all our objects are pointing to different addresses.
    This is what we achieve by explicitly writing 'Copy Constructor'.
    This is what we called a "Deep Copy".
    */



    cout << "\n Before : \n" << endl;

    cout << "H1 Health : " << *(h1.health) << endl;
    cout << "H2 Health : " << *(h2.health) << endl;
    cout << "H3 Health : " << *(h3.health) << endl;


    *(h1.health) = 121;

    cout << "\n After : \n" << endl;

    cout << "H1 Health : " << *(h1.health) << endl;
    cout << "H2 Health : " << *(h2.health) << endl;
    cout << "H3 Health : " << *(h3.health) << endl;






}