#include<iostream>

using namespace std;

class Human
{
    public : 
    string name;

    private :
    string password;

    protected : 
    string property;


    public :

    Human(string name, string password, string property )
    {
        this->name = name;
        this->password = password;
        this->property = property;
    }

    Human()                                          
    {
    }


    void eat()
    {
        cout << "Human is eating" << endl;
    }

    void sleep()
    {
        cout << "Hunam is sleeping" << endl;
    }

};

// Mode of Inheritance : Public
class Engineer : public Human    
{
    public : 
    string company;

    Engineer(string name, string property, string company)
    {
        this->name = name;
        this->property = property;
        this->company = company;
    }

    void work()
    {
        cout << "Write Softwares" << endl;
    }

};

// Mode of Inheritance : Private
class Doctor : private Human
{
    public : 
    string hospital;

    Doctor(string name, string property,string hospital)
    {
        this->name = name;
        this->property = property;
        this->hospital = hospital;
    }

    void work()
    {
        cout << "To treat patients" << endl;
    }

};


// Mode of Inheritance : Protected
class Researcher : protected Human
{
    public : 
    string domain;

    Researcher(string name, string property ,string domain)
    {
        this->name = name;
        this->property = property;
        this->domain = domain;
    }

    void work()
    {
        cout << "To study " << this->domain << " in detail." << endl; 
    }
};



int main()
{
    Human h1("Swapnil", "Swapnil@123", "House");

    Engineer e1("Harshal", "Flat", "Barclays");

    Doctor d1("Bhandari", "Land", "Sancheeti Hospital");

    Researcher r1("Mayur", "Gold", "Machine Learning");


    /*
    Mode of Inheritance : Public :- Engineer
    'name' : Public                                             (Remains as it is. No change)
    'property : Protected 

    Mode of Inheritance : Private :- Doctor
    'name' : Private                                            (Everything becomes Private)
    'property' : Private

    Mode of Inheritance : Protected :- Researcher
    'name' : Protected                                          (Everything becomes Protected)
    'property : Protected
    

    Note : Private Data Member of "Human" i.e 'password' is not inherited by any of the child classes.
    
    */








    cout << "Observe by debugging the code. Try accessing data members & you will see the result." << endl; 

}


/*
1. If we try to invoke parent constructor from child class, then it requires to provide "Hard coded argument" through which parent class data members will be initialized.
   
    Eg:-       Engineer (string company) : Human("Swapnil","Swapnil@123", "House")
                {
                    this->company = company;
                }

    ( Note : i] To are required to do this, because our parent class does not have a default constructor,
              as we have written our own parameterized constructor.
           ii] Solution is to have a non-parameterized constructor as well. )

2. This is not what we need. We want to initialize parent data memebers dynamically from user's input.

3. So you should have a "Non-Paraterized Constructor" in parent class, which just exists and does nothing.

4. Now we wont need to invoke parent constructor from child class.

5. Instead take the additional arguments in child class constructor itself & initialize it.

  Engineer(string name, string property, string company)
  {
    this->name = name;
    this->company = company;
    this->property = property;
  }

6. Note : Private Data member of parent class are not accessible in child class. So "password" which is the private data member of parent class
   will remain uninitialized.
*/