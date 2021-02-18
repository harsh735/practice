#include <iostream>

using namespace std;


int main()
{
	int a,b,rem,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		rem = a % b;
		cout<<rem<<endl;
	}
	return 0;
}