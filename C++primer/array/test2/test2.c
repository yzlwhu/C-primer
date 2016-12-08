#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
//copy array
/*
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5];
    for (size_t i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }
    for (size_t i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
*/

//copy vector
    vector<int> vect1 = {1, 2, 3};
    //vect1.push_back(1);
    //vect1.push_back(2);
    //vect1.push_back(3);
    vector<int> vect2;
    vect2 = vect1;
    for (vector<int>::iterator it = vect2.begin(); it != vect2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}
