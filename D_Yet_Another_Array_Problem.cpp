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
        long long min = LLONG_MAX;
        for(int i = 0; i<n; i++)
        {
            if(a[i] < min)
            { 
                min = a[i]; 
            }
        }
        bool found = 0; 
        for(long long i = 2 ;i<=min+1; i++)
        {
            if(__gcd(i, min) == 1)
            {
                cout<<i<<endl;
                found = 1; 
                break;
            }
             

        }
        if(found == 0)
        {
            cout<<" -1"<<endl; 
        }
        

        
    }
    return 0; 
}