#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, max=-10, min=(int)1e9, a=0, b=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        {
            a++;
            max=arr[i];
        }
        if(arr[i]<min)
        {
            b++;
            min=arr[i];
        }
    }
    cout<<a-1<<" "<<b-1<<"\n";
    return 0;
}
