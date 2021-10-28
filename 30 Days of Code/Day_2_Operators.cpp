#include<bits/stdc++.h>
using namespace std;

void solve(int meal_cost, int tip_percent, int tax_percent)
{
    double tip= meal_cost*tip_percent/100.00;
    double tax= meal_cost*tax_percent/100.00;
    cout<<(int)(meal_cost+tip+tax)<<"\n";
}

int main()
{
    double meal_cost,tip_percent,tax_percent;
    cin>>meal_cost>>tip_percent>>tax_percent;
    solve(meal_cost,tip_percent,tax_percent);
    return 0;
}
