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

    // Default Copy Constructor invocation by below 2 ways.
    Hero h2 = h1;
    Hero h3(h1);

    h1.getData();
    h2.getData();
    h3.getData();

    /*
    1.We write our own copy constructor to create "Deep Copy"
    2.Default copy constructor creates a "Shallow Copy".
    Note : In order to examine Deep & Shallow Copy concept, atleast one Data Member should be "Pointer".
    3.As you can see in our code, 'health' pointer in all of our 3 objects is pointing to same address.
      This is not what we want while creating a copy.
    4.Because modification done at one object will be reflected in all the objects.
      i.e If the variable value is changed then, all 3 objects will be affected.
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