#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t; 
    int count_M = 0;
    int count_C = 0; 
    while(t--)
    {
        int m, c;
        cin>>m>>c;
        if(m>c)
        {
            count_M++;
        }
        else if(c>m)
        {
            count_C++;
        }
        else 
        {
            count_M;
            count_C;
        }
    }
    if(count_M > count_C)
        {
            cout<<"Mishka"<<endl;
        }
    else if(count_C > count_M)
        {
            cout<<"Chris"<<endl;
        }
    else if(count_M == count_C)
        {
            cout<<"Friendship is magic!^^"<<endl;
        }
    return 0; 
}