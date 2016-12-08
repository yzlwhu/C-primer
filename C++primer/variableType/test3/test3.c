#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "s=\"\"?" << (s == "") << endl;
    string s1 = "he";
    cout << s1 << endl;
    string *s2 = new string("hello");
    cout << *s2 << endl;
    string s3("world");
    cout << s3 << endl;
    return 0;
}
