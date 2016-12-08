#include <iostream>
#include <string>
#include <map>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    map<string, list<int> > map1;
    list<int> list1;
    list1.push_back(12);
    list1.push_back(2);
    map1["word1"] = list1;
    for (map<string, list<int> >::iterator it = map1.begin(); it != map1.end(); it++)
    {
	cout << it->first << " ";
	for (list<int>::iterator iter = it->second.begin(); iter != it->second.end(); iter++)
	    cout << *iter << " ";
	cout << endl;
    }
    return 0;
}
