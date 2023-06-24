#include<iostream>

using namespace std;

/* Note : To avoid confusion, make all the data members & member functions as public &
          use mode of inheritance : "Public" so that you can access anything anywhere.*/

// 1.Single Inheritance

class Animal
{
    public : 
    int weight;
    string type;

    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal
{
    public : 

    void bark()
    {
        cout << "Dog is barking!!!" << endl;
    }
};

// 2.Multilevel Inheritance

class Puppy : public Dog
{
    public : 
    void look()
    {
        cout << "Puppy is very cute!" << endl;
    }
};

// 3.Multiple Inheritance

class Father
{
    public :
    void nature()
    {
        cout << "Very Strict!!!" << endl;
    }

    void work()
    {
        cout << "Government Servant" << endl;
    }

};

class Mother
{
    public : 
    void nature()
    {
        cout << "Very caring..." << endl;
    }

    void bestDish()
    {
        cout << "Puranpoli !!!" << endl;
    }
};

class Child : public Father , public Mother
{
    public :

    void hobby()
    {
        cout << "Playing Cricket." << endl;
    }
};

// 4.Hierarchical Inheritance

class Brother : public Father
{
    public : 
    void voice()
    {
        cout << "Boy has deep voice" << endl;
    }
};

class Sister : public Father
{
    public : 
    void intellect()
    {
        cout << "Girl is very smart" << endl;
    }
};

// 5.Hybrid Inheritance

class Blockchain
{
    public :

    void use()
    {
        cout << "Distributed Ledger." << endl;
    }
};

class SmartContract
{
    public : 

    void advantage()
    {
        cout << "It makes the blockchain programmable." << endl;
    }
};

class Bitcoin : public Blockchain
{
    public:

    void info()
    {
        cout << "Bitcoin is trending." << endl;
    }
};

class Ethereum : public Blockchain, public SmartContract
{
    public :

    void application()
    {
        cout << "Used as a platform to build D-apps" << endl;
    }
};


/*
            Blockchain   SmartContract
                /\        /
               /  \      /
              /    \    /
             /      \  /
            /        \/
        Bitcoin   Ethereum

*/


int main()
{

    cout << "\n1.Single Inheritance\n" << endl;
    Dog d1;
    d1.eat();
    d1.bark();

    cout << "\n2.Multilevel Inheritance\n" << endl;

    Puppy p1;
    p1.eat();
    p1.bark();
    p1.look();

    cout << "\n3.Multiple Inheritance\n" << endl;
    
    Child c1;

    // Inheritance Ambiquity is solved by scope resolution operator.
    c1.Father::nature();
    c1.Mother::nature();

    c1.work();                // 'Father' class function.
    c1.bestDish();            // 'Mother' class function.
    c1.hobby();               // 'Child' class function.

    cout << "\n4.Hierarchical Inheritance\n" << endl;
    
    Brother b1;
    Sister s1;
    b1.nature();             // 'Father' class function
    s1.nature();             // 'Father' class function
    b1.voice();              // Their own function.
    s1.intellect();

    cout << "\n5.Hybrid Inheritance\n"  << endl;
    cout << "Just observe diagram and code.\n" << endl;


}