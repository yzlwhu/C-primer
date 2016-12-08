#include <iostream>
#include <string>
using namespace std;

int main()
{
//cin >> string as loop condition
/*
    string s;
    while (cin >> s)
    {
        cout << s << endl;
    }
*/

//getline as loop condition
    string s;
    while (getline(cin, s))
    {
        cout << s << endl;
    }
    return 0;
}
