#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while (t--)
    {
        int n; 
        cin>>n; 
        int len = 2*n; 
        int a[len]; 
        for(int i = 0; i<len; i++)
        {
            cin>>a[i]; 
        } 
       int odd_count = 0; 
       int even_count = 0; 
       for(int i = 0; i<len; i++)
       {
            if(a[i] % 2 == 0)
            {
                even_count++; 
            }
            else
            {
                odd_count++; 
            }
       }
       if(odd_count == even_count)
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