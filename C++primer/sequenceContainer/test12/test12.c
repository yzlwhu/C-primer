#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
// store input words into a stack
/*
    string s;
    stack<string> st1;
    while (cin >> s)
    {
	st1.push(s);
    }
    while (!st1.empty())
    {
	cout << st1.top() << endl;
   	st1.pop();
    }
*/

//handle expression
    char changed = '$';
    string expr = "(1*(1+2)/(2+3))+1";
    stack<char> st1, st2;
    for (string::size_type i = 0; i < expr.size(); i++)
    {
	if (expr[i] == ')')
	{
	    if (st1.empty())
	    {
		cout << "lack (" << endl;
	        break;
	    } else {
		while (st1.top() != '(')
		{
		    st1.pop();
		}	
	 	st1.pop();
		st1.push(changed);
	    }    
	} else {
	    st1.push(expr[i]);
	}
    }
    while (!st1.empty())
    {
	st2.push(st1.top());
	st1.pop();
    }
    while (!st2.empty())
    {
	cout << st2.top() << " ";
	st2.pop();
    }
    cout << endl;
    return 0;
}
