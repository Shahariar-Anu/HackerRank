#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    int arr[n], pos=0, neg=0, zero=0;
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
            zero++;
        else if(arr[i]>0)
            pos++;
        else
            neg++;

    }
    cout<<setprecision(6)<<(float)pos/n<<"\n";
    cout<<setprecision(6)<<(float)neg/n<<"\n";
    cout<<setprecision(6)<<(float)zero/n<<"\n";
    return 0;
}
