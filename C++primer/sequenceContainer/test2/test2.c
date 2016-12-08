#include <iostream>
#include <list>
#include <iterator>
#include <string>
using namespace std;

list<string>::iterator findString(list<string>::iterator begin, list<string>::iterator end, string str)
{
    bool flag = false;
    for (; begin != end; ++begin)
    {
	if (*begin != str)
	    continue;
	else {
	    flag = true;
	    break;
	}
    }
    return begin;
}

int main()
{
    list<string> list1 = {"hello", "world", "lee"};
    list<string>::iterator it = findString(list1.begin(), list1.end(), "hell");
    if (it != list1.end())
        cout << *it << endl;
    else
	cout << "not found" << endl;
    return 0;
}
