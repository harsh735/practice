#include <iostream>
#include <string.h>
#include <algorithm>
#include <bits/stdc++.h>


using namespace std;

long long n = 20000;


void solve()
{
    //cout<<"\nIm here in solve!\n";
    long long i,j,ans=0; 
    cin>>n;
    string str[n];
    for(i = 0; i<n; i++)
    {
        cin>>str[i];
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        //cout<<"Im here in the loop!\n";
        //cout<<str[i]<<endl;     
    }
    sort(str, str+n);               //sorted the input using their first letter, if first letter is same then it looks the next and so on
    set<string> bswap,aswap;
    for(i=0; i<n; i++)
    {
        bswap.insert(str[i]);
    } 
                
    string p,q;
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            p = str[i];                        //stores the first sorted word
            q = str[j];                        //stores the second sorted word
            swap(p[0], q[0]);                 //swaps the first letter of the two words        
            if(p[0] == q[0])
            {
                break;
            }
            if(p == q)
            {
                break;
            }
            cout<<"\nThe swapped values are:"<<p<<"\n"<<q<<endl;
        }
    } 
    for(i=0; i<n; i++)
    {
        aswap.insert(p);
        aswap.insert(q);    
    }
   

    vector<string> v(n);
    vector<string>::iterator it, st, pt; 
    it = set_difference(aswap.begin(),aswap.end(), bswap.begin(),bswap.end(), v.begin()); 
    for (st = v.begin(); st != it; ++st) 
    {
        cout<<"\nThe final good words are:"<<*st;
        ans+=1;
    }    
    if(ans<2)
    {
        cout<<"0"<<"\n";
    }
    else if(ans == 2) 
    {
        cout<<ans<<"\n";
    }
    else if(ans > 2)
    {
        cout<<ans*(ans-2)<<"\n";
    }
    
}




signed main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        //cout<<"Im here in t!\n";
        solve();
    }
    return 0;
}