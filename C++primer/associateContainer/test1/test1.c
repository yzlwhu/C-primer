#include <iostream>
#include <utility>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

int main()
{
    vector<pair<string, int> > vect;
    pair<string, int> p;
    while (cin >> p.first >> p.second)
    {
	vect.push_back(p);
    }
    for (vector<pair<string, int> >::iterator it = vect.begin(); it != vect.end(); it++)
    {
	cout << it->first << " " << it->second << endl;
    }
    return 0;
}
