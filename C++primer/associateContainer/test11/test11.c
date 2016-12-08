#include "TextObj.h"

int main(int argc, char **argv)
{
    if (argc < 3)
    {
	cout << "lack input parameters" << endl;
	throw runtime_error("lack input parameters!");
    }
    string file(argv[1]);
    string word(argv[2]);
    TextObj tt(file);
//    tt.display();

    vector<int> vect;
    tt.queryWord(vect, word);
    for (vector<int>::iterator it = vect.begin(); it != vect.end(); ++it)
    {
	cout << *it << " ";
    }
    cout << endl;

    return 0;
}
