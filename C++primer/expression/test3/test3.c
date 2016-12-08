#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
// this way does not work
/*
    vector<string*> vect;
    string s;
    while (cin >> s)
    {
	vect.push_back(&s);
    }
    for (vector<string*>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	cout << *(*it) << " " << (*(*it)).size() << endl;
    }
*/

// test pointer
    string s = "hello";
    string *ps = &s;
    cout << ps->empty() << endl;
    return 0;
}
