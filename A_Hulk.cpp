#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n; 
    string s = ""; 
    for(int i = 1; i<=n; i++)
    {
        if(i % 2 == 1)
        {
            if(i == n)
            {
                s += "I hate it";
            }
            else
            {
                s += "I hate that ";
            }
        }
        else
        {
            if(i == n)
            {
                s += "I love it";
            }
            else
            {
                s += "I love that ";
            }
        }
    }
    cout<<s<<endl;
    
    return 0; 
}