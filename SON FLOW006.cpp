#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int num, sum = 0, rem=0;
        cin>>num;
        while(num != 0)
        {
            rem = num % 10;
            sum += rem;
            num /= 10;
        }
        cout<<sum<<endl;
    }
	return 0;
}