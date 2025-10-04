#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    while(t--)
    {
        int x, y; 
        cin>>x>>y; 
        if(y == 1)
        {
            cout<<"-1"<<endl; 
        }
        else if(x < y)
        {
            cout<<"2"<<endl; 
        }
        else if(x == y)
        {
            cout<<"-1"<<endl; 
        }
        else if(x > y && x - y >= 2)
        {
            cout<<"3"<<endl; 
        }
        else if(x > y && x - y == 1)
        {
            cout<<"-1"<<endl;
        }
        else if(y == 1)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0; 
}