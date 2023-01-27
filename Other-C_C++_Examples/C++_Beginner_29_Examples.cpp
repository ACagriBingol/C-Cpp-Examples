
/*
#include <iostream>
using namespace std;

int main()
{
    int x[2][3] = {
  {2, 3, 4}, // 1st row
  {8, 9, 10} // 2nd row
};

int y[2][3] = {{2, 3, 4}, {8, 9, 10}};

int z[2][3] = {{2, 3, 4}, {8, 9, 10}};
cout << x[0][2] << endl;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
 int score = 5;
cout << &score << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int score = 5;
int *scorePtr;
scorePtr = &score;

cout << scorePtr << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int var = 50;
int  *p;
p = &var;

cout << var << endl;

cout << p << endl;

cout << *p << endl;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int x = 5;
int *p = &x;

x = x + 4;
x = *p + 4;
*p = *p + 4;

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int *p = new int;
*p = 5;
}

*/



/*
#include <iostream>
using namespace std;

int main()
{
int *p = new int; // request memory
*p = 5; // store value

cout << *p << endl; // use value

delete p; // free up the memory
    }
*/

/*
#include <iostream>
using namespace std;

int main()
{
int *p = new int; // request memory
*p = 5; // store value

delete p; // free up the memory
// now p is a dangling pointer

p = new int; // reuse for a new address

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int *p = NULL; // Pointer initialized with null
p = new int[20]; // Request memory
delete [] p; // Delete array pointed to by p
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    cout << "char: " << sizeof(char) << endl;
cout << "int: " << sizeof(int) << endl;
cout << "float: " << sizeof(float) << endl;
cout << "double: " << sizeof(double) << endl;
int var = 50;
cout << "var: " << sizeof(var) << endl;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
double myArr[10];
cout << sizeof(myArr) << endl;

int numbers[100];
cout << sizeof(numbers) / sizeof(numbers[0]);

    }
*/


/*
#include <iostream>
using namespace std;

void printSomething()
{
  cout << "Hi there!";
}

int main()
{
   printSomething();

   return 0;
}
*/

/*
#include <iostream>
using namespace std;

//Function declaration
void printSomething();

int main() {
  printSomething();

  return 0;
}

//Function definition
void printSomething() {
  cout << "Hi there!";
}
*/

/*
#include <iostream>
using namespace std;

int timesTwo(int x) {
   return x*2;
}

int main() {
  cout << timesTwo(8)<<endl;

  cout <<timesTwo(5)<<endl;

  cout <<timesTwo(42);
}
*/

/*
#include <iostream>
using namespace std;

int addNumbers(int x, int y) {
  int result = x + y;
  return result;
}

int main() {
  cout << addNumbers(50, 25);
}
*/

/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  cout << rand();
}
*/

/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  for (int x = 1; x <= 10; x++) {
    cout << rand() << endl;
  }
}
*/

/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
  for (int x = 1; x <= 10; x++) {
  cout << 1 + (rand() % 6) << endl;
  }
}
*/

/*

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
  srand(time(0));

  for (int x = 1; x <= 10; x++) {
    cout << 1 + (rand() % 6) << endl;
  }
}
*/

/*
#include <iostream>
using namespace std;

int sum(int a, int b=42) {
  int result = a + b;
  return (result);
}

int main() {
  int x = 24;
  int y = 36;

  //calling the function with both parameters
  int result = sum(x, y);
  cout << result << endl;
  //Outputs 60

  //calling the function without b
  result = sum(x);
  cout <<  result << endl;
   //Outputs 66

  return 0;
}

*/

/*
#include <iostream>
using namespace std;

int volume(int l=1, int w=1, int h=1) {
  return l*w*h;
}

int main() {
  cout << volume() << endl;
  cout << volume(5) << endl;
  cout << volume(2, 3) << endl;
  cout << volume(3, 7, 6) << endl;
}
*/

/*
//Function Overloading
#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "Prints an integer: " << x << endl;
}
void printNumber(float x) {
    cout << "Prints a float: " << x << endl;
}
int main() {
  int a = 16;
  float b = 54.541;
  printNumber(a);
  printNumber(b);
}
*/

/*
#include <iostream>
using namespace std;

int factorial(int n) {
  if (n==1) {
    return 1;
  }
  else {
    return n * factorial(n-1);
  }
}

int main() {
    cout<<factorial(5);
}
*/

/*
#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
  for(int x=0; x<size; x++) {
    cout <<arr[x]<< endl;
  }
}
int main() {
  int myArr[3]= {42, 33, 88};
  printArray(myArr, 3);
}
*/

/*
#include <iostream>
using namespace std;

class Box {
    public:
      double length;   // Length of a box
      double breadth;  // Breadth of a box
      double height;   // Height of a box
};

int main() {
   Box Box1;        // Declare Box1 of type Box
   Box Box2;        // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.height = 5.0;
   Box1.length = 6.0;
   Box1.breadth = 7.0;

   // box 2 specification
   Box2.height = 10.0;
   Box2.length = 12.0;
   Box2.breadth = 13.0;

   // volume of box 1
   volume = Box1.height * Box1.length * Box1.breadth;
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.height * Box2.length * Box2.breadth;
   cout << "Volume of Box2 : " << volume <<endl;

   return 0;
}
*/



#include <iostream>

using namespace std;

class Box {
   public:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume(void);
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};

// Member functions definitions
double Box::getVolume(void) {
   return length * breadth * height;
}

void Box::setLength( double len ) {

   length = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
void Box::setHeight( double hei ) {
   height = hei;
}

/*
// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
*/


//PUBLIC
/*
#include <iostream>

using namespace std;

class Line {
   public:
      double length;
      void setLength( double len );
      double getLength( void );
};

// Member functions definitions
double Line::getLength(void) {
   return length ;
}

void Line::setLength( double len) {

   length = len;
}

// Main function for the program
int main() {
   Line line;

   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   // set line length without member function
   line.length = 10.0; // OK: because length is public
   cout << "Length of line : " << line.length <<endl;

   return 0;
}

*/


/*
#include <iostream>
using namespace std;

class Box {
   public:
      double length;
      void setWidth( double wid );
      double getWidth( void );

   private:
      double width;
};

// Member functions definitions
double Box::getWidth(void) {
   return width ;
}

void Box::setWidth( double wid ) {
   width = wid;
}

// Main function for the program
int main() {
   Box box;

   // set box length without member function
   box.length = 10.0; // OK: because length is public
   cout << "Length of box : " << box.length <<endl;

   // set box width without member function
    //box.width = 10.0; // Error: because width is private
   box.setWidth(10.0);  // Use member function to set it.
   cout << "Width of box : " << box.getWidth() <<endl;

   return 0;
}
*/

/*

#include <iostream>
using namespace std;

class Box {
   protected:
      double width;
};

class SmallBox:Box { // SmallBox is the derived class.
   public:
      void setSmallWidth( double wid );
      double getSmallWidth( void );

};

// Member functions of child class
double SmallBox::getSmallWidth(void) {
   return width ;
}

void SmallBox::setSmallWidth( double wid ) {
   width = wid;
}

// Main function for the program
int main() {
   SmallBox box;

   // set box width using member function
   box.setSmallWidth(5.0);
   cout << "Width of box : "<< box.getSmallWidth() << endl;

   return 0;
}
*/


/*
#include <iostream>

using namespace std;

class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor
   private:
      double length;
};

// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}

void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;

   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
*/



/*
#include <iostream>

using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line(double len);  // This is the constructor

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}

void Line::setLength( double len ) {
   length = len;
}

double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line(10.0);

   // get initially set length.
   cout << "Length of line : " << line.getLength() <<endl;

   // set line length again
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
*/

/*
#include <iostream>

using namespace std;
class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // This is the constructor declaration
      ~Line();  // This is the destructor: declaration

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}

Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {
   Line line;

   // set line length
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;

   return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();   // This is the constructor declaration
      ~Line();  // This is the destructor: declaration

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line(void) {
   cout << "Object is being created" << endl;
}
Line::~Line(void) {
   cout << "Object is being deleted" << endl;
}
void Line::setLength( double len ) {
   length = len;
}
double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main() {

    Line* a;
    a = new Line;
   // set line length
   a->setLength(6.0);
   cout << "Length of line : " << a->getLength() <<endl;
   delete a;

   cout<<"aaa";


   return 0;

}
*/

/*
#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    string name;
};

int main() {
  myClass myObj;
  myObj.name = "SoloLearn";
  cout << myObj.name;
  return 0;
}
*/


/*
#include <iostream>
using namespace std;

class BankAccount {
  public:
    void sayHi() {
      cout << "Hi" << endl;
    }
};

int main()
{
  BankAccount test;
  test.sayHi();
}
*/



/*
#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    void setName(string x) {
      name = x;
    }

    string getName(){
    return name;
    }

  private:
    string name;
};

int main() {
  myClass myObj;
  myObj.setName("John");
  //cout<<myObj.name;
  cout<<myObj.getName();
  return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    myClass() {
      cout <<"Hey";
    }
    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

int main() {
  myClass myObj;

  return 0;
}
*/




/*
#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    myClass(string nm) {
      setName(nm);
    }

    void setName(string x) {
      name = x;
    }
    string getName() {
      return name;
    }
  private:
    string name;
};

int main() {
  myClass ob1("David");
  myClass ob2("Amy");
  cout << ob1.getName();
}
*/


/*

#include <iostream>
using namespace std;

class Rectangle {
    int width, height;


  public:
    void set_values (int,int);
    int area() {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  rect.set_values (3,4);
  cout << "area: " << rect.area();
  return 0;
}
*/



/*
#include <iostream>
using namespace std;

class Rectangle {

    int width, height;

  public:
    void set_values (int,int);
    int area () {return width*height;}
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect, rectb;
  rect.set_values (3,4);
  rectb.set_values (5,6);


  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
*/


/*

// example: class constructor
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle (int,int);
    int area () {return (width*height);}
};

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb (5,6);
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}

*/


/*

// overloading class constructors
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
  public:
    Rectangle ();
    Rectangle (int,int);
    int area (void) {return (width*height);}
};

Rectangle::Rectangle () {
  width = 5;
  height = 5;
}

Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

int main () {
  Rectangle rect (3,4);
  Rectangle rectb;
  cout << "rect area: " << rect.area() << endl;
  cout << "rectb area: " << rectb.area() << endl;
  return 0;
}
*/


/*
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) {
    radius = r;
     }
    double circum() {return 2*radius*3.14159265;}
};

int main () {
 Circle foo (10.0);   // functional form
 Circle bar = 20.0;   // assignment init.


  cout << "foo's circumference: " << foo.circum() << '\n';
  cout << "bar's circumference: " << bar.circum() << '\n';
  return 0;
}
*/



// member initialization
#include <iostream>
using namespace std;

class Circle {
    double radius;
  public:
    Circle(double r) : radius(r) { }

    Circle(double r){
    radius=r;
    }


    double area() {return radius*radius*3.14159265;}
};

class Cylinder {
    Circle base;
    double height;

  public:
    Cylinder(double r, double h) : base (r), height(h) {}
    double volume() {return base.area() * height;}
};

int main () {
  Cylinder foo (10,20);

  cout << "foo's volume: " << foo.volume() << '\n';
  return 0;
}



/*

#include <iostream>
using namespace std;

class Rectangle {
  int width, height;
  public:
  Rectangle(int x, int y) : width(x), height(y) {}
  int area(void) { return width * height; }
};


int main() {
  Rectangle obj (3, 4);
  Rectangle * foo, * bar, * baz;
  foo = &obj;
  bar = new Rectangle (5, 6);

  cout << "obj's area: " << obj.area() << '\n';
  cout << "*foo's area: " << foo->area() << '\n';
  cout << "*bar's area: " << bar->area() << '\n';

  delete bar;
  return 0;
}

*/

