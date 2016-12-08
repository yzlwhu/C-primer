#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
//concat two C style strings
    char ca[4] = "123", cb[5] = "2345";
    char *cc = new char[strlen(ca) + strlen(cb) + 1];
    cc = strcat(ca, cb);
    for (char *pc = cc; pc != cc + strlen(cc) + 1; pc++)
    {
	cout << *pc;
    }
    cout << endl;

//concat two C++ string
    string str1 = "123", str2 = "2345";
    cout << str1 + str2 << endl;
    return 0;
}
