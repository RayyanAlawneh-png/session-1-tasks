#include<iostream>
using namespace std;
main()
{
	int x,r;
	cin >> x;
	while(x>0)
	{
		r=x%10;
		x/=10;
		
	}
	if(r%2 == 0)
		cout << "EVEN\n";
	else
		cout << "ODD\n";	
}
