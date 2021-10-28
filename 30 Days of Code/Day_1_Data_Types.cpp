#include <iostream>
#include <iomanip>
#include <limits>
#include<Stdio.h>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int i2;
    double d2;
    string a;
    cin>>i2>>d2;
    cin.ignore();
    getline(cin, a);
    cout<<i+i2<<"\n";
    printf("%.1f\n", d+d2);
    cout<<s<<a;
    return 0;
}
