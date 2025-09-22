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
        int max_blank = 0;
        int count = 0; 
        for(int i = 0 ; i < n; i++)
        {
            if(a[i] == 0)
            {
                count++; 
                max_blank = max(max_blank, count);
            }
            else 
            {
                count = 0; 
            }
        } 
        cout<<max_blank<<endl; 

    }
    return 0; 
}