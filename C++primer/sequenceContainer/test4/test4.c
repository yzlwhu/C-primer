#include <iostream>
#include <list>
#include <deque>
#include <iterator>
using namespace std;

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5};
    deque<int> deq1, deq2;
    for (list<int>::iterator it = list1.begin(); it != list1.end(); it++)
    {
	if (*it % 2 == 0)
        {
	    deq1.push_back(*it);
	} else {
	    deq2.push_back(*it);
	}
    }
    for (deque<int>::iterator it = deq1.begin(); it != deq1.end(); it++)
	cout << *it << " ";
    cout << endl;
    for (deque<int>::iterator it = deq2.begin(); it != deq2.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}
