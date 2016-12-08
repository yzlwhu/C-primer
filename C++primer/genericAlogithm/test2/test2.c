#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

bool isbigger(int a, int b)
{
    return (a > b)?true:false;
}

bool Gt4(int a)
{
    return (a >= 4);
}

int main()
{
    vector<int> vect(2);
    //fill(vect.begin(), vect.begin() + 5, 2);
    int i;
    while (cin >> i)
    {
	vect.push_back(i);
    }
    int num = count_if(vect.begin(), vect.end(), Gt4);
    sort(vect.begin(), vect.end(), isbigger);
    //stable_sort(vect.begin(), vect.end());
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
	cout << *it << " ";
    cout << endl;
    cout << num << endl;
    int a = vect[0];
    bool flag = true;
    for (vector<int>::iterator it = vect.begin() + 1; it != vect.end(); ++it)
    {
	if (*it == a)
	{
	    flag = false;
	    continue;
	}
	if (flag)
	    cout << a << endl;
	a = *it;
  	flag = true;
    }
    if (flag)
    {
	cout << a << endl;
    }

    int findNum = 0;
    vector<int>::iterator pos = find_if(vect.begin(), vect.end(), Gt4);
    while (pos != vect.end())
    {
	findNum++;
	pos = find_if(pos + 1, vect.end(), Gt4);
    }
    cout << findNum << endl;
    return 0;
}
