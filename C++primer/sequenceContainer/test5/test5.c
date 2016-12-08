#include <iostream>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

int main()
{
//test front back
/*
    vector<int> vect1 = {1, 2, 3}, vect2;
    cout << vect1[0] << endl;
    cout << *vect1.begin() << endl;
    cout << vect1.front() << endl;
    cout << "empty vector: " << endl;
    cout << vect2[0] << endl;
    cout << *vect2.begin() << endl;
    cout << vect2.front() << endl;
*/

//erase vector member
    int a[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vect;
    list<int> list1;
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
	vect.push_back(a[i]);
 	list1.push_back(a[i]);
    }
    for (list<int>::iterator it = list1.begin(); it != list1.end(); it++)
	cout << *it << " ";
    cout << endl;
    for (list<int>::iterator it = list1.begin(); it != list1.end(); it++)
    {
	while (it != list1.end() && (*it % 2) != 0)
	{
	    it = list1.erase(it);
	}
	if (it != list1.end())
	{
	    cout << *it << " ";
	} else {
	    break;
	}
    }
    cout << endl;
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	while (*it % 2 == 0 && it != vect.end())
	{
	    it = vect.erase(it);
	}
	cout << *it << " ";
    }
    cout << endl;
    return 0;
}
