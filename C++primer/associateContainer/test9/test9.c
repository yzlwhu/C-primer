#include <iostream>
#include <set>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    multiset<string> ms;
    ms.insert("hello");
    ms.insert("hello");
    ms.insert("lee");
    multiset<string>::iterator beg = ms.lower_bound("hello");
    multiset<string>::iterator end = ms.upper_bound("hello");
    while (beg != end)
    {
 	cout << *beg++ << endl;
    }
    return 0;
}
