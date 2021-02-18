#include <iostream>

using namespace std;

int hDiv(int n)
{
    for(int i= 10; i>=1; --i)
    {
        if(n % i == 0)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    cout<<hDiv(n);
    return 0;
}