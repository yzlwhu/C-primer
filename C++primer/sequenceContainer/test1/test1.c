#include <iostream>
#include <vector>
#include <iterator>
#include <list>
#include <string>
using namespace std;

int main()
{
//copy vector
/*
    vector<int> vect1 = {1, 2, 3}, vect2;
    vect2 = vect1;
*/

//vector construct function
/*
    int a[3] = {1, 2, 3};
    vector<int> vect1(a, a+3);
    for (vector<int>::iterator it = vect1.begin(); it != vect1.end(); it++)
    {
	cout << *it << " ";
    }
    cout << endl;
*/

//output list members in reverse order
/*
    list<int> list1 = {1, 2, 3};
    list<int>::iterator it = --list1.end();
    //--it;
    while (it != list1.begin())
    {
	cout << *it << endl;
 	--it;
    }
    cout << *it << endl;
*/

//iterator and pointer
    vector<string> vect(10);
    vector<string>::iterator it = &vect[0];
    
    return 0;
}
