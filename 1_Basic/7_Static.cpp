#include<iostream>

using namespace std;

class Hero
{
    public :
    string name;
    int health;
    int level;
    static int count_object;

    private : 
    static int dynamic_count;

    public : 
    Hero(string name, int health, int level)
    {
        this->name = name;
        this->health = health;
        this->level = level;
        Hero::count_object++;                            // We are incrementing our "Static Data Member" -> 'count_object' inside our constructor.
    }                                                    // It will help us to keep count of how many times constructor is called i.e how many times our class has been instanciated to create objects.
                                                         // In simple words to keep count of objects.


    // Static Member Function.
    static void countDynamic()                           // It can only access Static Data Members.
    {
        Hero::dynamic_count++;                      
    }


    static int getDynamicCount()
    {
        return Hero::dynamic_count;
    }

    void timepass()                                    // Non Static Member functions can also access static data members.
    {
        cout << Hero::dynamic_count << endl;
    }

};


int Hero :: count_object = 0;                            // Initiating our Static Data Member. Outside the class & outside the main function.

int Hero :: dynamic_count = 0;                           // Even if static data memeber is private it is initialized in same way.

int main()
{
    Hero h1("Swapnil", 11, 21);
    Hero h2("Atharva", 34,56);
    Hero h3("Mayur", 23,98);    



    Hero* h4 = new Hero("Ram", 23,45);
    Hero :: countDynamic();                                            // Invoking static functions through class name.
    Hero* h5 = new Hero("Rahul", 56,67);
    Hero :: countDynamic();

    cout << "Total Objects : " << Hero::count_object << endl;

    cout << "Dynamically Created Objects : " << Hero::getDynamicCount() << endl;       


    /*
    In order to modify/access 'private' static data members, we need to use getter and setter in same way which we use for normal private data memebers.
    These getter & setter can be 'static' or 'non-static'. Both will work. It depends on the need, which one to use.

    1. 'static' getter-setter makes sense to me.
    2. Because if 'Static' Data Members are object independent, then their getter & setter should also be object independent.
    3. Making them non-static & thus dependable on an object for invocation, doesn't makes any sense to me


    Note : Static Data Members and Static Member Functions can be accessed even through object, but it not recomended.
           As they are independent of object. 
           You can directly use 'class' name to access/ invoke them.
    */

   Hero x("asdf", 33, 5);
   x.timepass();





}