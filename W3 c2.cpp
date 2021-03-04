#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s, s1="";
    getline(cin,s);
    for (int i=s.length()-1; i>=0; i--)
        s1=s1+s[i];
    if (s1==s)
        cout << "Yes";
    else
        cout << "No";
}
