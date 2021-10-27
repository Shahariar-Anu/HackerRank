#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long int sum=0;
    vector<int>arr;
    for(i=0; i<5; i++)
    {
        cin>>n;
        sum+=n;
        arr.push_back(n);
    }
    sort(arr.begin(),arr.end());
    cout<<sum-arr[4]<<" "<<sum-arr[0]<<"\n";
    return 0;
}
