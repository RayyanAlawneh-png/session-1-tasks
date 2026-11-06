#include<iostream>
using namespace std;
main()
{
	string x;
	cin >> x;
	if(x[0]>=97)
		x[0]-= 32;
	cout << x << "\n";
	
}
