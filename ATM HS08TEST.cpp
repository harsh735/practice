#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int x;
    float y;
    cin>>x>>y;
    if(x%5 == 0 && y >=(x+.5))
    {
        y = y - (x + .5);
        cout<<y;
    }
    else if(x > y)
    {
        cout<<y;
    }
    else 
    {
        cout<<y;
    }
	return 0;
}
