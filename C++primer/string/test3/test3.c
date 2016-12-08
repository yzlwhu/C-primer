#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s("hello lee\tyoiz\n");
    cout << "size of s is " << s.size() << endl;
    cout << "whether s is empty? " << s.empty() << endl;
    cout << "array like using s: " << s[13] << endl;
    int a = s.size();
    cout << a << endl; 
    string::size_type b = s.size();
    cout << b << endl;  
    return 0;
}
