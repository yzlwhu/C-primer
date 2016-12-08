#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    list<string> list1;
    string s;
    while (cin >> s)
    {
 	list1.push_back(s);
    }
    for (list<string>::iterator it = list1.begin(); it != list1.end(); it++)
    {
	cout << *it << endl;
    }
    return 0;
}
