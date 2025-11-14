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
        string s; 
        cin>>s; 
        int count_l = -1; 
        int count_r = -1; 
        for(int i = 0; i<n; i++)
        {
            if(s[i] == 'B')
            {
                count_l = i; 
                break;
            }
            
        }
        for(int j = n-1; j>=0; j--)
        {
                
            if(s[j] == 'B')
            {
                count_r = j; 
                break;
            }
        }
        cout<<(count_r - count_l + 1) <<endl; 

    }
    return 0; 
}