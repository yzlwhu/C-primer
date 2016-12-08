#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int sum(vector<int>::iterator beg, vector<int>::iterator end)
{
    int sum = 0;
    while (beg != end)
    {
    	sum += *beg;
	beg++;
    }
    return sum;
}

int main()
{
    vector<int> vect = {1, 2, 3};
    cout << sum(vect.begin(), vect.end()) << endl;
    return 0;
}
