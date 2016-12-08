#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vect;
    cout << vect.size() << " " << vect.capacity() << endl;
    vect.push_back(2);
    cout << vect.size() << " " << vect.capacity() << endl;
    vect.reserve(50);
    cout << vect.size() << " " << vect.capacity() << endl;
    vector<int> vect1(10);
    cout << vect1.size() << " " << vect1.capacity() << endl;
    for (int i = 0; i < 51; i++)
	vect.push_back(i);
    cout << vect.size() << " " << vect.capacity() << endl;
    return 0;
}
