#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect;
    int val;
    while (cin >> val)
    {
        vect.push_back(val);
    }

//output sum of neighbor two number
/*
    if ( vect.size() % 2 == 0)
    {
        for (vector<int>::size_type i = 0; i < vect.size(); i+=2)
        {
            cout << vect[i] + vect[i+1] << endl;
        }
    } else {
        for (vector<int>::size_type i = 0; i < vect.size() - 1; i+=2)   
        {
            cout << vect[i] + vect[i+1] << endl;
        }
        cout << vect[vect.size() - 1] << endl;
    }
*/

//output sum of symmetric two number
    for (vector<int>::size_type i = 0; i < vect.size() / 2.0; i++)
    {
       
        if (2 * i == (vect.size() - 1))
        {
            cout << vect[i] << endl;
            break;
        }
        cout << vect[i] + vect[vect.size() - 1 - i] << endl;
    }
    return 0;
}
