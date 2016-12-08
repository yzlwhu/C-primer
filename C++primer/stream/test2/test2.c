#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>
using namespace std;

int main()
{
//read a line one time into a vector
/*
    string line;
    vector<string> vect;
    ifstream file1("test2.txt");
    while (getline(file1,line))
    {
	vect.push_back(line);
    }
    for (vector<string>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	cout << *it << endl;
    }
*/

//read a word one time into a vector
/*
    string word;
    vector<string> vect;
    ifstream file2("test2.txt");
    while (file2 >> word)
    {
	vect.push_back(word);
    }
    for (vector<string>::iterator it = vect.begin(); it != vect.end(); it++)
    {
	cout << *it << endl;
    }
*/

//test ofstream open pattern
    //ofstream output1("test2_1.txt");
    ofstream output2;
    output2.open("test2_1.txt", ofstream::app);
    output2 << "world map" << endl;
    string s;
    ifstream input1;
    string str = "test2.txt";
    input1.open(str);
    input1 >> s;
    cout << s << endl;
    return 0;
}
