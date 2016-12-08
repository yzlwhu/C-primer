#include <iostream>
#include <vector>
#include <iterator>
#include <string>
using namespace std;

struct Pair
{
    string str;
    int count;
};

int main()
{
    int max = 0;
    int count = 1;
    vector<Pair> vect;
    string s;
    string str;
    cin >> s;
    str = s;
    while (cin >> s)
    {
	if (s == str)
    	{
	    count++;
	} else {
	    if (count >= max)
	    {
	  	max = count;
		Pair p;
		p.str = str;
		p.count = count;
		vect.push_back(p);
	    }
	    str = s;
	    count = 1;
	}
    }
    if (count >= max)
    {
        max = count;
        Pair p;
        p.str = str;
        p.count = count;
        vect.push_back(p);
    }
    Pair p = vect[vect.size() - 1];
    for (vector<Pair>::iterator it = (vect.end() - 1); it != vect.begin(); it--)
    {
	if ((*it).count == p.count)
	{
	    cout << (*it).str << " " << (*it).count << endl;
	} else {
	    break;
	}
    }
    return 0;
}
