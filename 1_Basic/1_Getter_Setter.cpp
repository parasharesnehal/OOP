#include<iostream> 

using namespace std;


class Hero
{

    // Data Members
    private :

    int health;
    int level;


    // Member Function 

    public : 

    Hero* info()                                       // Return type is ' Hero* ' i.e a pointer. Because pointers hold(store) address. 
    {
        return this;                                   // 'this' is a pointer. It holds address of 'current Object'.
    }


    // Getter

    int getHealth()
    {
        return this->health;
    }

    int getLevel()
    {
        return this->level;
    }

    // Setter

    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(int level)
    {
        this->level = level;
    }

};


// To Observe how 'this' works.
void verifty_this()
{
    Hero ramesh;

    cout << "\n\nAddress : " << &ramesh << endl;
    cout << "this    : " << ramesh.info() << endl;

    cout << "\n 'this' holds the address of our current object." << endl;
}

 
int main()
{
    Hero h1;
    
    h1.setHealth(9);
    h1.setLevel(3);

    cout << "\nHealth : " << h1.getHealth() << endl;
    cout << "Level  : " << h1.getLevel() << endl;

    verifty_this();
}