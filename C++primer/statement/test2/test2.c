#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

bool compareTwoVectors(vector<int> vect1, vector<int> vect2)
{
    if (vect1.size() == vect2.size())
    {
	cout << "two vectors have equal length, not prefix" << endl;
	return false;
    }
    vector<int>::size_type min = (vect1.size() > vect2.size())?vect2.size():vect1.size();
    for (vector<int>::iterator iter1 = vect1.begin(), iter2 = vect2.begin(); iter1 != (vect1.begin() + min) && iter2 != (vect2.begin() + min); iter1++, iter2++)
    {
	if (*iter1 == *iter2)
	    continue;
	else 
	    return false;
    }
    return true;
}

int main()
{
    //vector<int> vect1 = {0, 1, 1, 2}, vect2 = {0, 1, 1, 2, 3, 5, 8};
    vector<int> vect1 = {0, 1, 1, 2}, vect2 = {0, 1, 1, 2};
    cout << "vect1 and vect2 prefix? " << compareTwoVectors(vect1, vect2) << endl;
    return 0;
}
