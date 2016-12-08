#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    string s1 = "he", s2 = "lee";
    char * a1 = const_cast<char*>(s1.c_str()), *a2 = const_cast<char*>(s2.c_str());
    list<char*> list1 = {a1, a2};
    vector<string> vect;
    vect.assign(list1.begin(), list1.end());
    for (vector<string>::iterator it = vect.begin(); it != vect.end(); it++)
    	cout << *it << " ";
    cout << endl;
    return 0;
}
