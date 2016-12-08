#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    bitset<3> bs;
    bs.set(2);
    cout << bs << endl;
    unsigned int s = 1;
    cout << (s << 2) << endl;
    return 0;
}
