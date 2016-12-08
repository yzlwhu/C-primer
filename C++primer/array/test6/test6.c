#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vect;
    int temp;
    while (cin >> temp)
    {
        vect.push_back(temp);
    }
    int *arr = new int[vect.size() + 1];
    int *pa = arr;
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	*pa = *it;
	pa++;
    }
    for (int *p = arr; p != arr + vect.size() + 1; p++)
    {
 	cout << "\"" << *p << "\"" << " ";
    }
    cout << endl;
    return 0;
}
