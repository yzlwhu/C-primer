#include <iostream>
#include <list>
#include <deque>
#include <iterator>
#include <string>
using namespace std;

int main()
{
//find and erase list member
/*
    list<string> list1 = {"he", "llo", "lee", "he"};
    string s = "he";
    for (list<string>::iterator it = list1.begin(); it != list1.end(); it++)
    {
	while (it != list1.end() && *it == s)
	{
	    it = list1.erase(it);
	}
	if (it == list1.end())
	    break;
    }
    for (list<string>::iterator it = list1.begin(); it != list1.end(); it++)
	cout << *it << " ";
    cout << endl;
*/

//find and erase deque member
    deque<string> deq1 = {"he", "hello", "lee", "he"};
    string s = "he";
    for (deque<string>::iterator it = deq1.begin(); it != deq1.end(); it++)
    {
	while (it != deq1.end() && *it == s)
	{
	    it = deq1.erase(it);
	}
	if (it == deq1.end())
	    break;
    }
    for (deque<string>::iterator it = deq1.begin(); it != deq1.end(); it++)
	cout << *it << " ";
    cout << endl;
    return 0;
}
