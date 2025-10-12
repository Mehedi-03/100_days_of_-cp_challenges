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
        int a[n]; 
        for(int i = 0; i<n; i++)
        {
            cin>>a[i]; 
        }
        sort(a, a+n);
        bool ans = 1;
        for(int i = 0; i<n-1; i++)
        {
            if(a[i+1] - a[i] > 1)
            {
                ans = 0; 
                break;
            }
        }
        if(ans == 1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl; 
        }

    }
    return 0; 
}