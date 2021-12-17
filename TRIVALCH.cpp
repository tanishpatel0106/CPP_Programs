#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	int d,e,f;
	d = a+b;
	e = b+c;
	f = a+c;
	if(d>c)
	{
	    if(e>a)
	    {
	        if(f>b)
	        {
	            cout << "YES";
	        }
	        else
	        {
	            cout << "NO";
	        }
	    }
	    else
	    {
	        cout << "NO";
	    }
	}
	else
	{
	    cout << "NO";
	}
	return 0;
}
