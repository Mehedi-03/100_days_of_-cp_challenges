#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while (t--)
    {
        string a = ""; 
        for(int i = 0; i<3;i++)
        {
            string s; 
            cin>>s; 
            for(int i = 0; i<3; i++)
            {
                if(s[i] == '?')
                {
                    a = s; 
                    break;
                }
            }
        }
        int A = 0; 
        int B = 0; 
        int C =0; 
        for(int i = 0; i<3; i++)
        {
            if(a[i] == 'A')
            {
                A = 1; 
            }
            else if(a[i] == 'B')
            {
                B = 1; 
            }
            else if(a[i] == 'C')
            {
                C = 1;
            }
        }
        if(A == 0)
        {
            cout<<'A'<<endl; 
        }
        if(B == 0)
        {
            cout<<'B'<<endl; 
        }
        if(C == 0)
        {
            cout<<'C'<<endl; 
        }
    }
    
    return 0; 
}