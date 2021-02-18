#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t,i;
	cin>>t;
	//to enter the test cases and size along with inputs
	while(t--)
	{
		int n,a[100],odd=0,even=0;
		cin>>n;
		for(i=0; i<n; i++)
		{
			cin>>a[i];
			if(a[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		cout<<min(even,odd);
	}

	return 0;
}

//The number of operations required to get even difference is nothing but the minimum number of
//even or odd elements present in the array.