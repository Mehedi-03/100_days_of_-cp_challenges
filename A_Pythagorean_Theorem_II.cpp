#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n; 
    int ans = 0; 
    for(int i = 1; i<=n; i++)
    {
        for(int j = i+1; j<=n ; j++)
        {
            int k = i*i + j*j; 
            int c = sqrt(k); 
            if(c*c == k && c<=n)
            {
                // cout<<k<<" ";
                ans++; 
            }
    
        }
    }
    cout<<ans<<endl; 
    return 0; 
}