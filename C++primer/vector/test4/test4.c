#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vect(10,10);
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
        *it *= 2;
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
