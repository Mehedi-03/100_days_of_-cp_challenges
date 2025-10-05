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
        for(int i = 0 ; i<n; i++)
        {
            cin>>a[i]; 
        }
        int count = 0; 
        int k = 0; 
        for(int i = 0; i<n; i++)
        {
            if(a[i] == 0)
            {
                count++;
            }
            if(a[i] == -1)
            {
                k++; 
            }
        }
        if(k % 2 == 1)
        {
            count += 2; 
        }
        cout<<count<<endl; 

    }
    return 0; 
}