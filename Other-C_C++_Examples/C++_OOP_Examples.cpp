/*
//Overloading
#include <iostream>
using namespace std;
class Cal {
    public:

int add(int a,int b){
        return a + b;
        }

int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main(void) {
    Cal C;
    cout<<C.add(10, 20)<<endl;
    cout<<C.add(12, 20, 23);
   return 0;
}
*/


/*
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//Operator Overloading
#include <iostream>
using namespace std;
class Test
{
   private:
      int num;
   public:
       Test(): num(8){}

       void operator ++()
       {
          num = num+2;
       }

       void Print() {
           cout<<"The Count is: "<<num;
       }
};
int main()
{
    Test tt;
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}

*/


/*

//0verriding
#include <iostream>
using namespace std;
class Animal {
    public:
void eat(){
cout<<"Eating...";
    }
};

class Dog: public Animal
{
 public:
 void eat()
    {
       cout<<"Eating bread...";
    }
};

int main(void) {
   Dog d;
   d.eat();
   return 0;
}
*/



/*

#include <iostream>
using namespace std;
class Shape
{
    public:
    virtual void draw()=0;

};

 class Rectangle : public Shape
{
    public:
     void draw()
    {
        cout < <"drawing rectangle..." < <endl;
    }
};

class Circle : public Shape
{
    public:
     void draw()
    {
        cout <<"drawing circle..." < <endl;
    }
};

int main( ) {
    Rectangle rec;
    Circle cir;
    rec.draw();
    cir.draw();
   return 0;
}

*/

/*
#include <iostream>
using namespace std;
class Employee {
   public:
       int id; //data member (also instance variable)
       string name; //data member(also instance variable)
       float salary;

       Employee(int id, string name, float salary)
        {
            this->id = id;
            this->name = name;
            this->salary = salary;
        }


       void display()
        {
            cout<<id<<"  "<<name<<"  "<<salary<<endl;
        }

};
int main(void) {
    Employee e1 =Employee(101, "Sonoo", 890000); //creating an object of Employee
    Employee e2=Employee(102, "Nakul", 59000); //creating an object of Employee
    Employee e3;
    e1.display();
    e2.display();
    return 0;
}
*/




/*

//Static Usage
#include <iostream>
using namespace std;
class Account {
   public:
       int accno; //data member (also instance variable)
       string name; //data member(also instance variable)
       static float rateOfInterest;

       Account(int accno, string name)
        {
             this->accno = accno;
            this->name = name;
        }

       void display()
        {
            cout<<accno<< " "<<name<< " "<<rateOfInterest<<endl;
        }
};

float Account::rateOfInterest=6.5;


int main(void) {
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee
    Account a2=Account(202, "Nakul"); //creating an object of Employee
    a1.display();
    a2.display();
    return 0;
}

*/

/*
#include <iostream>
using namespace std;
class Account {
   public:
       int accno; //data member (also instance variable)
       string name;
       static int count;
       Account(int accno, string name)
        {
             this->accno = accno;
            this->name = name;
            count++;
        }
       void display()
        {
            cout<<accno<<" "<<name<<endl;
            cout<<count<<endl;
        }
};

int Account::count=0;

int main(void) {
    Account a1 =Account(201, "Sanjay"); //creating an object of Account
    a1.display();
    Account a2=Account(202, "Nakul");
    a2.display();
     Account a3=Account(203, "Ranjana");
     a3.display();



    cout<<"Total Objects are: "<<Account::count;
    return 0;
}
*/


/*

// Inheritance & upcasting
#include <iostream>
using namespace std;

enum note { middleC, Csharp, Eflat }; // Etc.

class Instrument {
public:
void play(note) const {
cout << "Instrument::play" << endl;
}
};

// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument {
public:
// Redefine interface function:
void play(note) const {
cout << "Wind::play" << endl;
}
};


void tune(Instrument i) {
// ...
i.play(middleC);
}


int main() {
Wind flute;
tune(flute); // Upcasting

}

*/


/*

// Late binding with the virtual keyword
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat }; // Etc.

class Instrument {
public:
virtual void play(note) const {
cout << "Instrument::play" << endl;
}
};
// Wind objects are Instruments
// because they have the same interface:
class Wind : public Instrument {
public:
// Override interface function:
void play(note) const {
cout << "Wind::play" << endl;
}
};
void tune(Instrument& i) {
// ...
i.play(middleC);
}
int main() {
Wind flute;
tune(flute); // Upcasting
}
*/





// Extensibility in OOP
#include <iostream>
using namespace std;
enum note { middleC, Csharp, Cflat }; // Etc.

class Instrument {
public:
virtual void play(note) const {
cout << "Instrument::play" << endl;
}
virtual char* what() const {
return "Instrument";
}
// Assume this will modify the object:
virtual void adjust(int) {cout<<"adjusted in instrument";}
};


class Wind : public Instrument {
public:
void play(note) const {
cout << "Wind::play" << endl;
}
char* what() const { return "Wind"; }
void adjust(int) {cout<<"adjusted in wind";}
};

class Percussion : public Instrument {
public:
void play(note) const {
cout << "Percussion::play" << endl;
}
char* what() const { return "Percussion"; }
void adjust(int) {}
};



class Stringed : public Instrument {
public:
void play(note) const {
cout << "Stringed::play" << endl;
}
char* what() const { return "Stringed"; }
void adjust(int) {}
};



class Brass : public Wind {
public:
void play(note) const {
cout << "Brass::play" << endl;
}
char* what() const { return "Brass"; }
};


class Woodwind : public Wind {
public:
void play(note) const {
cout << "Woodwind::play" << endl;
}
char* what() const { return "Woodwind"; }
};


// Identical function from before:
void tune(Instrument& i) {
// ...
i.play(middleC);
}
// New function:
void f(Instrument& i)
{ i.adjust(1); }
// Upcasting during array initialization:

Instrument* A[] = {
new Wind,
new Percussion,
new Stringed,
new Brass,
};


int main() {
Wind flute;
Percussion drum;
Stringed violin;
Brass flugelhorn;
Woodwind recorder;
tune(flute);
tune(drum);
tune(violin);
tune(flugelhorn);
tune(recorder);
f(flugelhorn);
}



