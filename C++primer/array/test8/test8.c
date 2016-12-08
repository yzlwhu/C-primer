#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <cstring>
using namespace std;

int* convertVectorToArray(vector<int> vect)
{
    int *arr = new int[vect.size()];
    int *pa = arr;
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	*pa = *it;
        pa++;
    }
    return arr;
}

int main()
{
//convert string to array, convert array to vector
/*
    string str = "hello";
    const char *arr = str.c_str();
    for (const char *p = arr; p != arr + strlen(arr) + 1; p++)
    {
	cout << *p;
    }
    cout << endl;
    vector<char> vect(arr + 1, arr + strlen(arr));
    for (vector<char>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	cout << *it;
    }
    cout << endl;
*/

//convert vector to array
    vector<int> vect = {1, 2, 3};
    int *arr = convertVectorToArray(vect);
    for (int *p = arr; p != arr + vect.size(); p++)
    {
	cout << *p << " ";
    }
    cout << endl;
    return 0;
}
