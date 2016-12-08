#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
using namespace std;

int main()
{
// vector count
/*
    vector<int> vect;
    int i;
    while (cin >> i)
    {
	vect.push_back(i);
    }
    int num = count(vect.begin(), vect.end(), 2);
    cout << num << endl;
*/
    list<string> lst = {"hello", "hello", "lee", "hello"};
/*
    string s;
    while (cin >> s)
    {
  	lst.push_back(s);
    }
*/
    cout << count(lst.begin(), lst.end(), "hello") << endl;
    return 0;
}
