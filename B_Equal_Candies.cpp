#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int n; 
        cin>>n; 
        vector<int>v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i]; 
        }
        int mn = INT_MAX; 
        for(int i = 0; i<n; i++)
        {
            if(mn>v[i])
            {
                mn = v[i]; 
            }
        }
        int sum = 0; 
        for(int i = 0; i<n; i++)
        {
            sum += v[i] - mn; 
        }
        cout<<sum<<endl; 
    }
    return 0; 
}