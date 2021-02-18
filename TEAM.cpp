#include <iostream>
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

long long int solve(vector<char> u,  vector<char> v)
{
    set<char> s(u.begin(), u.end());
    long long int temp = 0;
    for(auto x:v)
    {
        if(s.find(x) != s.end())
        {
            temp++;
        }
    }
    return temp;
}




int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        map<string, vector<char>> m;
        string s;
        for(long long int i=0; i<n;  i++)
        {
            cin>>s;
            if(s.length()>0)
            {
                m[s.substr(1)].push_back(s[0]);
            }
        }
        long long int ans = 0;
        for(auto i:m)
        {
            for(auto j:m)
            {
                if(i.first != j.first)
                {
                    long long temp = solve(i.second, j.second);
                    ans += (i.second.size()-temp) *(j.second.size()- temp);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}