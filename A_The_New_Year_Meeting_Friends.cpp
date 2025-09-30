#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int count = 0;
    if(a < b && a > c)
    {
        count += b - a;
        count += a - c;
    }
    else if(a > b && a < c)
    {
        count += a - b;
        count += c - a;
    }
    else if(b > a && b < c)
    {
        count += b - a;
        count += c - b;
    }
    else if(b < a && b > c)
    {
        count += a - b;
        count += b - c;
    }
    else if(c > a && c < b)
    {
        count += c - a; 
        count += b - c; 
    }
    else if(c < a && c > b)
    {
        count += a - c; 
        count += c - b; 
    }
    cout<<count<<endl;
    return 0; 
}