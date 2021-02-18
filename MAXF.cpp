#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,z,i;
        cin>>n;
        vector<int> v(n);
        for(i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        x = v[0];
        z = v[n-1];
        long long int ans = abs(z - x);
        ans *= 2;
        cout<<ans<<endl;

    }
    return 0;
}