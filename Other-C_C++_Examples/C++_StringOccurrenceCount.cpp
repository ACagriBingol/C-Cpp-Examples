#include <string>
#include <iostream>
using namespace std;

int main(){ 

    string str;
    string str1;
    getline(cin,str);
    getline(cin,str1);
  
    size_t found = str.find(str1); 
    int count=0;
    while (found != string::npos){ 
        cout << "Next occurrence is at " << found << endl;
        count++;
        found = str.find(str1,found+1); 
    }
    if(count==0)
        cout<<str1<<" does not occur in the string";
    else
        cout<<str1<<" occurs "<<count<<" times in the string";
    return 0; 
} 
