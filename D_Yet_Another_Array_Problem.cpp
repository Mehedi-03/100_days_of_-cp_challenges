#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n ; 
        cin>>n;
        vector<long long > a(n);
        for(int i = 0; i<n; i++)
        {
            cin>>a[i]; 
        }
        bool found = 0; 
        long long  ans = -1; 
        for(long long x = 2; x <=100; x++)
        {
            for(int i = 0; i<n; i++)
            {
                if(__gcd(a[i],x) == 1)
                {
                    ans = x; 
                    found = 1; 
                    break;

                }
            }
            if(found)break;
        }
        cout<<ans<<endl; 
        
    }
    return 0; 
}