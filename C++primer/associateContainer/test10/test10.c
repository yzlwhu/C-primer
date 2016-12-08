#include <iostream>
#include <map>
#include <iterator>
#include <string>
using namespace std;

void deleteMember1(multimap<string, string> &ms, string author)
{
    while (ms.find(author) != ms.end())
    {
	ms.erase(ms.find(author));
    }
}

void deleteMember2(multimap<string, string> &ms, string author)
{
    multimap<string, string>::iterator beg = ms.lower_bound(author);
    multimap<string, string>::iterator end = ms.upper_bound(author);
    ms.erase(beg, end);
}

void deleteMember3(multimap<string, string> &ms, string author)
{
    pair<multimap<string, string>::iterator, multimap<string, string>::iterator> p = ms.equal_range(author);
    ms.erase(p.first, p.second); 
}

int main()
{
    multimap<string, string> ms;
    ms.insert(make_pair("yue", "sanguo"));
    ms.insert(make_pair("zhi", "shuihuzhuan"));
    ms.insert(make_pair("yue", "xiyouji"));
    deleteMember3(ms, "yue");
    for (multimap<string, string>::iterator it = ms.begin(); it != ms.end(); it++)
    {
	cout << it->first << " " << it->second << endl;
    }
    return 0;
}
