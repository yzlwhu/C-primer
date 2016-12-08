#include <iostream>
#include <string>
using namespace std;

string::size_type findSubStr(string str, string substr)
{
    if(str.size() <= substr.size())
    {
	cout << "err" << endl;
	return -1;
    }
    string::size_type pos = str.find_first_of(substr[0]);
    while (pos != string::npos)
    {
        for(string::size_type i = 0; i < substr.size(); i++)
        {
   	    if(substr[i] != str[pos + i])
	    {
	        pos = str.find_first_of(substr[0],pos + 1);
	        break;
	    } else {
 	        continue;
            }
        }
	return pos;
    }
    return -1;
}

string greet(string form, string lastname, string title, string::size_type pos, int length)
{
    form = form.replace(findSubStr(form, "Ms"), 2, title.substr(pos, length));
    form = form.replace(findSubStr(form, "Daisy"), 5, lastname);
    return form;
}

int main()
{
//test assign and append function
/*
    string q1("When lilacs last in the dooryard bloom'd");
    string q2("The child is father of the man");
    string sentence;
    sentence = sentence.assign(q2,0,13);
    sentence.append(q1, 17, 15);
    cout << sentence << endl;
*/

//test replace function
    string generic1("Dear Ms Daisy:");
    string generic2("MrsMsMissPeople");
    string lastname("Annap");
    //cout << findSubStr(generic1, "Ms") << findSubStr(generic1, "Daisy") << endl;
    string salute = greet(generic1, lastname, generic2, 5, 4);
    cout << salute << endl;
    return 0;
}
