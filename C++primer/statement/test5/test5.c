#include <iostream>
#include <bitset>
#include <stdexcept>
#include <cassert>
using namespace std;

int main()
{
    try {
    	bitset<1> bs;
        assert(bs.to_ulong() == 1);
//	throw runtime_error("hello");
	//bs.set(1);
    	cout << bs.to_ulong() << endl;
    } catch (runtime_error err) {
	cout << err.what() << endl;
    } catch (exception err) {
	cout << err.what() << endl;
    }
    return 0;
}
