#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int e[t];
    int l[t];
    
    for (int i=0; i<t; i++)
    cin>>e[i];
    
    for (int i=0; i<t; i++)
    cin>>l[i];
    
    int max=0, sum=0;
    for (int i=0; i<t; i++)
    {
        sum += e[i] - l[i];
        if (sum > max)
        max = sum;
    }
    
    cout << max << endl;
    return 0;
    
}