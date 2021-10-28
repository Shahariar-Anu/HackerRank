#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2 != 0)
        cout<<"Weird\n";
    else if(n%2 == 0 && n<=5)
        cout<<"Not Weird\n";
    else if(n%2 == 0 && n<=20)
        cout<<"Weird\n";
    else
        cout<<"Not Weird\n";
    return 0;
}
