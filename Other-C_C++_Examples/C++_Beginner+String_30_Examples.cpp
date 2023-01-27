/*
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main () {

   char str1[10] = "Hello";
   char str2[10] = "World";
   char str3[10];
   int  len;

   // copy str1 into str3
   strcpy( str3, str1);
   cout << "strcpy( str3, str1) : " << str3 << endl;


   // concatenates str1 and str2
   strcat( str1, str2);
   cout << "strcat( str1, str2): " << str1 << endl;



   // total lenghth of str1 after concatenation
   len = strlen(str1);
   cout << "strlen(str1) : " << len << endl;

   return 0;
}
*/



/*

#include <string>
#include <iostream>
using namespace std;


int main() {

  string a = "I am learning C++";

  std::string b="aaaaaa";


  cout<<b<<endl;
  cout<<a<<endl;
  return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main () {

   char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

   cout << "Greeting message: ";
   cout << greeting << endl;

   return 0;
}
*/



/*
#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "Hello";
   string str2 = "World";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total length of str3 after concatenation
   len = str3.size();

   cout << "str3.size():  " << len << endl;

   return 0;
}
*/


/*

#include <string>
#include <iostream>
using namespace std;


int main() {

string s1("This ");
string s2("That ");
string s3("The other ");
// operator+ concatenates strings
s1 = s1 + s2;
cout << s1 << endl;
// Another way to concatenates strings
s1 += s3;
cout << s1 << endl;
// You can index the string on the right
s1 += s3 + s3[4] + "oh lala";
cout << s1 << endl;
}
*/





/*
#include <iostream>
using namespace std;

int main()
{
    char str[10];
    cout << "Enter a string: ";
    cin.get(str, 5);

    cout << "You entered: " << str << endl;
    return 0;
}
*/



/*
#include <iostream>
using namespace std;

int main()
{

    string str;
    cout << "Enter a string: ";
    //cin>>str;
    getline(cin, str);

    cout << "You entered: " << str << endl;
    return 0;
}




/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
string s; //s contains 0 characters
string s1( "Hello  " );
string s2 = "Helloooooo";
string s3( 8, 'x' ); //implicitly calls the constructor string s3( 8, 'x' ); //s3 contains 8 'x' characters
string s4 = s3; //s4 contains 8 'x' characters
string s5(s2, 3, 4); //s5 copies a substring of s2; it contains ”looo”

cout<< s << " + " << s1 <<" + " << s2 <<" + " << s3 <<" +" << s4 <<" +" << s5;


}
*/



/*
#include <string>
#include <iostream>
using namespace std;
int main() {

string bigNews("I saw Elvis in an UFO. ");
cout << bigNews << endl;
// How much data have we actually got?

cout << "Size = " << bigNews.size() << endl;
// How much can we store without reallocating

cout << "Capacity = "<< bigNews.capacity() << endl;

// Insert this string in bigNews immediately
// before bigNews[1]


bigNews.insert(1, " thought I ");

cout << bigNews << endl;
cout << "Size = " << bigNews.size() << endl;
cout << "Capacity = "<< bigNews.capacity() << endl;


// Make sure that there will be this much space
bigNews.reserve(500);

// Add this to the end of the string
bigNews.append("I've been working too hard.");

cout << bigNews << endl;
cout << "Size = " << bigNews.size() << endl;
cout << "Capacity = "<< bigNews.capacity() << endl;
}
*/






/*
//????????????????????????????????????????????????????

#include <string>
#include <iostream>
using namespace std;
int main() {
string s("A piece of text");
string tag("$tagnjlb$");
s.insert(8, tag + "         ");
cout << s << endl;

int start = s.find(tag);

cout << "start = " << start << endl;
cout << "size = " << tag.size() << endl;
s.replace(start, tag.size(), "hello there");
cout << s << endl;
}
//?????????????????????????????
*/




/*
//???????????????????????????


#include <string>
#include <iostream>
using namespace std;
int main() {
string bigNews("I saw Elvis in a UFO. "
"I have been working too hard.");
string replacement("wig");

// The first arg says "replace chars
// beyond the end of the existing string":

bigNews.replace(bigNews.size(),replacement.size(), replacement);
//replace( ) expands the array to accommodate the growth of the string due to “replacement” beyond the bounds of the existing array.
cout << bigNews << endl;
}

//???????????????????????????
*/


/*
#include <string>
#include <iostream>
using namespace std;

int main() {

string first("AA");
string second("BB");



first.swap(second);

// Which is lexically greater?
switch(first.compare(second)) {

case 0: // The same
cout << first << " and " << second <<" are lexically equal" << endl;
break;

case -1: // Less than
cout << first <<" is lexically smaller than " <<second << endl;
break;

case 1: // Greater than
cout << first <<" is lexically greater than " <<second << endl;

break;
}
}
*/


/*

#include <string>
#include <iostream>
using namespace std;
int main(){
string s("1234");
cout << s[1] << " ";
cout << s.at(1) << endl;
}

*/


/*

#include <string>
#include <iostream>
using namespace std;
int main(){
string s("1234");
// Runtime problem: goes beyond array bounds:
cout << s[5] << endl;
// Saves you by throwing an exception:
cout << s.at(5) << endl;
}
*/




/*
#include <iostream>
#include <string>

int main ()
{
  std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  std::string str2 = str.substr (3,5);     // "think"

  int pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}
*/


/*
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <string>

int main ()
{
  std::string str;
  std::string base="The quick brown fox jumps over a lazy dog.";

  // used in the same order as described above:

  str.assign(base);
  std::cout << str << '\n';

  str.assign(base,10,9);
  std::cout << str << '\n';         // "brown fox"

  str.assign("pangrams are cool",7);
  std::cout << str << '\n';         // "pangram"

  str.assign("c-string");
  std::cout << str << '\n';         // "c-string"

  str.assign(10,'*');
  std::cout << str << '\n';         // "**********"

  str.assign<int>(10,0x2D);
  std::cout << str << '\n';         // "----------"

  str.assign(base.begin()+16,base.end()-12);
  std::cout << str << '\n';         // "fox jumps over"

  return 0;
}

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
*/

/*
#include <iostream>
#include <string>

int main ()
{
  std::string base="this is a test string.";
  std::string str2="n example";
  std::string str3="sample phrase";
  std::string str4="useful.";

  // replace signatures used in the same order as described above:

  // Using positions:                 0123456789*123456789*12345
  std::string str=base;           // "this is a test string."
  str.replace(9,5,str2);          // "this is an example string." (1)
  str.replace(19,6,str3,7,6);     // "this is an example phrase." (2)
  str.replace(8,10,"just a");     // "this is just a phrase."     (3)
  str.replace(8,6,"a shorty",7);  // "this is a short phrase."    (4)
  str.replace(22,1,3,'!');        // "this is a short phrase!!!"  (5)


  // Using iterators:                                               0123456789*123456789*
  str.replace(str.begin(),str.end()-3,str3);                    // "sample phrase!!!"      (1)
  str.replace(str.begin(),str.begin()+6,"replace");             // "replace phrase!!!"     (3)
  str.replace(str.begin()+8,str.begin()+14,"is coolness",7);    // "replace is cool!!!"    (4)
  str.replace(str.begin()+12,str.end()-4,4,'o');                // "replace is cooool!!!"  (5)
  str.replace(str.begin()+11,str.end(),str4.begin(),str4.end());// "replace is useful."    (6)
  std::cout << str << '\n';
  return 0;
}
*/


/*
#include <iostream>
#include <string>
using namespace std;

int main()
{

    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 geek";

    int myint1 = std::stoi(str1);
    int myint2 = std::stoi(str2);
    int myint3 = stoi(str3);

    cout << "stoi(\"" << str1 << "\") is "
         << myint1 << '\n';
    cout << "stoi(\"" << str2 << "\") is "
         << myint2 << '\n';
    cout << "stoi(\"" << str3 << "\") is "
         << myint3 << '\n';

    return 0;
}
*/



/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char str1[5] = "42";
    char *str2 = "3.14159";
    char *str3 = "31337 geek";

    int num1 = atoi(str1);
    int num2 = atoi(str2);
    int num3 = atoi(str3);

    cout << "atoi(\"" << str1
              << "\") is " << num1 << '\n';
    cout << "atoi(\"" << str2
              << "\") is " << num2 << '\n';
    cout << "atoi(\"" << str3
              << "\") is " << num3 << '\n';

   return 0;
}
*/

/*
#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi

int main ()
{
  std::string str_dec = "2001, A Space Odyssey";
  std::string str_hex = "40c3";
  std::string str_bin = "-10010110001";
  std::string str_auto = "0x7f";



  std::string::size_type sz;   // alias of size_t

  int i_dec = std::stoi (str_dec,&sz);
  int i_hex = std::stoi (str_hex,nullptr,16);
  int i_bin = std::stoi (str_bin,nullptr,2);
  int i_auto = std::stoi (str_auto,nullptr,0);



  std::cout << str_dec << ": " << i_dec << " and [" << str_dec.substr(sz) << "]\n";
  std::cout << str_hex << ": " << i_hex << '\n';
  std::cout << str_bin << ": " << i_bin << '\n';
  std::cout << str_auto << ": " << i_auto << '\n';

  return 0;
}

*/


/*
#include <iostream>
using namespace std;

int main()
{
    for(int a =0; a<50; a+=10){
        cout<<a<<endl;
    }
    return 0;
}*/


/*
#include <iostream>
using namespace std;

int main()
{
    for (int a = 10; a >= 0; a -= 3) {
        cout << a << endl;
}

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 0;

do {
  cout << a << endl;
  a++;
} while(a < 5);

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
    int a = 42;
do {
  cout << a << endl;
  a++;
} while(a < 5);

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{

int age = 42;
if (age == 16) {
  cout <<"Too young";
}
if (age == 42) {
  cout << "Adult";
}
if (age == 70) {
  cout << "Senior";
}
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
int age = 42;

switch (age) {
  case 16:
    cout << "Too young";
    break;
  case 42:
    cout << "Adult";
    break;
  case 70:
    cout << "Senior";
    break;
}
return 0;
}
*/


/*
#include <iostream>
using namespace std;

int main()
{
 int age = 25;
switch (age) {
  case 16:
    cout << "Too young";
    break;
  case 42:
    cout << "Adult";
    break;
  case 70:
    cout << "Senior";
    break;
  default:
    cout << "This is the default case";
}

}
*/

/*
#include <iostream>
using namespace std;

int main()
{
 int age = 42;
switch (age) {
  case 16:
    cout << "Too young" << endl;
  case 42:
    cout << "Adult" << endl;
  case 70:
    cout << "Senior" << endl;
  default:
    cout <<"This is the default case" << endl;
}
}

*/




