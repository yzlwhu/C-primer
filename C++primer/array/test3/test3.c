#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int compareTwoArrays(int a[], int m, int b[], int n)
{
    if (m == 0 || n == 0)
    {
        cerr << "exist empty array!" << endl;
        return -2;
    }
    int min = (m > n)?n:m;
    for (size_t i = a[0]; i < min; i++)
    {
        if (a[i] == b[i])
        {
            continue;
        } else if (a[i] > b[i]) {
	    return 1;
        } else {
 	    return -1;
        }
    }
    if (m == n)
    {
        return 0;
    } else if (m > n) {
	return 1;
    } else {
	return -1;
    }
}

int main()
{
//compare two arrays
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[4] = {1, 2, 3, 4};
    int arr = compareTwoArrays(arr1, 5, arr2, 4);
    if (arr == -2)
	cout << "exist empty array!" << endl;
    if (arr == 1)
	cout << "arr1 is bigger than arr2!" << endl;
    if (arr == -1)
	cout << "arr2 is bigger than arr1!" << endl;
    if (arr == 0)
 	cout << "arr1 is equal to arr2!" << endl;

//compare two vectors
    vector<string> vect1 = {"ab", "bc", "cd"};
    vector<string> vect2 = {"ab", "ba", "cd", "de"};
    cout << "vect1 > vect2" << (vect1 > vect2) << endl;
    cout << "vect1 == vect2" << (vect1 == vect2) << endl;
    cout << "vect1 < vect2" << (vect1 < vect2) << endl;
    return 0;
}
