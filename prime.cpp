#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];
const int n = 1000001;
vector<int> b(n);
void solve()
{
    memset(prime, true, sizeof(prime));
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    for(int p=2; p*p <=n; p++)
    {
        if(prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p) 
                prime[i] = false; 
        }
    }
    long long count = 0;
    for (int p=2; p<=n; p++) 
    {
        if(prime[p])
            count++; 
            b[p] = count;             
    }
    if(b[x] <= y)
            printf("Chef\n");
    else
            printf("Divyam\n");
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--)
    {
       
        solve();
        
    }
    return 0;
}