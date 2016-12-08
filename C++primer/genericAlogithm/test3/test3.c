#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vect = {1, 2, 3, 4};
    vector<int>::reverse_iterator rt = vect.rend();
    cout << *rt.base() << endl;
    return 0;
}
