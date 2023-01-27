

/*
#include <iostream>

int main()
{
    std::cout << "Hello world!" << std::endl;

    return 0;
}
*/



/*
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/



/*
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
*/


/*
#include <iostream>

using namespace std;

int main()
{
    cout <<"This "<<"is "<<"awesome"<< endl;
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!!";
    cout << "I love programming"<<endl;
    cout << "We are starting new language";
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{

   cout << "Hello world! \n";
   cout << "I love programming!";

   return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
   cout << " Hello \n world! \n I \n love \n programming!";
   return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
   int myVariable = 10;
   cout << myVariable;

   return 0;
}
*/

/*

#include <iostream>
using namespace std;

int main()
{
   int a = 30;
   int b = 12;
   int sum = a + b;

   cout << sum;

    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
   int a;
   int b;
   cin>>a;
   cin>>b;
   int sum = a + b;
   cout << sum;

    return 0;
}
*/



/*

#include <iostream>
using namespace std;

int main()
{
  int a, b;
  int sum;
  cout << "Enter a number \n";
  cin >> a;
  cout << "Enter another number \n";
  cin >> b;
  sum = a + b;
  cout << "Sum is: " << sum << endl;

  return 0;
}

*/


#include <iostream>
using namespace std;

int main()
{
   int x = 5;
   int y = ++x;
   int z = x++;

   cout << "x= "<< x << " y="<< y << " z="<<z;

    return 0;
}


/*

#include <iostream>
using namespace std;

int main()
{
   int x = 5;
   int y = 6;
   bool t = x!=y;
   bool f = x>y;


   cout << t << "and " << f;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
   int a = 200;
    int b = 33;
    bool x=a>b;

    if (x)
        cout << "a is greater than b";


    return 0;
}
*/

/*
#include <iostream>
using namespace std;
int main()
{
int mark = 90;

if (mark < 50) {
  cout << "You failed." << endl;
  cout << "Sorry" << endl;
}

else{
  cout << "Congratulations!" << endl;
  cout << "You passed." << endl;
  cout << "You are awesome!" << endl;
}

}
*/



/*
#include <iostream>
using namespace std;

int main()
{
   int mark = 90;

    if (mark < 50)
        cout << "You failed." << endl;

    else
        cout << "You passed." << endl;


    return 0;}
*/

/*
#include <iostream>
using namespace std;
int main()
{
cout << "Enter an age: ";
int age;
cin>>age;

if (age > 14) {
  if(age >= 18) {
    cout << "Adult";
  }
  else {
    cout << "Teenager";
  }
}

else {
  if (age > 0) {
    cout << "Child";
  }
  else {
    cout << "Something's wrong";
  }
}

return 0;}
*/


/*
#include <iostream>
using namespace std;
int main()
{
int num = 1;

while (num < 6) {
  cout << "Number: " << num << endl;
  num = num + 1;
}

return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{
    int num = 1;

while (num < 6) {
  cout << "Number: " << num << endl;
  num += 3;
}

}
*/


/*
#include <iostream>
using namespace std;

int main()
{
    int num=1;
    int number;
    int total=0;

    while(num <=5){
        cin>>number;
        total+=number;
        num++;
    }

    cout<<total<<endl;

    return 0;
}
*/
