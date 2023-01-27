#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{ 
    string s1,s2; 
    cin>>s1; // Read the string
    s2=s1;
    reverse(s2.begin(),s2.end());
    if(s1.compare(s2)==0) // if equal 
        cout<<s1<<" is palindrome";  // Print the string
    else
        cout<<s1<<" is not palindrome";
    return 0; 
} 
