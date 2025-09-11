#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    for(int i = 0; i< a.size(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
    }
    for(int i = 0; i< b.size(); i++)
    {
        if(b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }
    }
    int result = a.compare(b);
    cout<<result<<endl;
    
    return 0; 
}