#include <iostream>
#include <map>
#include <iterator>
#include <string>
#include <utility>
using namespace std;

int main()
{
    map<string, int> wordCount;
    string s;
    while (cin >> s)
    {
	pair<map<string, int>::iterator, bool> ret = wordCount.insert(make_pair(s, 1));
	if (!ret.second)
	{
	    ret.first->second++;
	}
    }
    for (map<string, int>::iterator it = wordCount.begin(); it != wordCount.end(); it++)
    {
	cout << it->first << " " << it->second << endl;
    }
    return 0;
}
