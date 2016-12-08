#include <iostream>
#include <string>
using namespace std;

int main()
{
//test string.size() compare equal
/*
    string s1, s2;
    cin >> s1 >> s2;
    cout << "s1 == s2? " << (s1 == s2) << endl;
    if (s1 != s2)
    {
        cout << "who is bigger? " << ((s1 < s2)?s2:s1) << endl;
    }
    cout << "who is longer? " << ((s1.size() < s2.size())?s2:s1) << endl; 
*/

//test string connect
    string s, str;
    cin >> str;
    while (cin >> s)
    {
        str += " ";
        str += s;
    }
    cout << str << endl;
    return 0;
}
