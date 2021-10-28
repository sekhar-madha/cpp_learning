#include<bits/stdc++.h>
using namespace std;
struct dist{
    int feet;
    int inch;
};
struct dist add(struct dist a, struct dist b)
{
    struct dist d;
    d.feet=a.feet+b.feet;
    if(a.inch+b.inch>12)
    {
        d.feet=d.feet+(a.inch+b.inch)/12;
        d.inch=(a.inch+b.inch)-((a.inch+b.inch)/12)*12;
    }
    else
        d.inch=a.inch+b.inch;
    return d;
};
int main()
{
    struct dist d1;
    cin>>d1.feet>>d1.inch;
    struct dist d2;
    cin>>d2.feet>>d2.inch;
    struct dist d=add(d1,d2);
    cout<<d.feet<<"feet and "<<d.inch<<"inches distance";
}
