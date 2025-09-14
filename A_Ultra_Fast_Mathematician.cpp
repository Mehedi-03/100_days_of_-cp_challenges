#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; 
    cin>>a; 
    string b; 
    cin>>b; 
    string s = ""; 
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i])
        {
            s += '0';
        }
        else
        {
            s += '1';
        }
        
    }
    cout<<s<<endl;

    return 0; 
}