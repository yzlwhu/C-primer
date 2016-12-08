#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vect(4,10);
    vector<int>::iterator it = vect.begin();
    it++;
    for (; it != vect.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    for (vector<int>::const_iterator iter = vect.begin(); iter != vect.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
