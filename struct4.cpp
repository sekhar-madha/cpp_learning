#include<bits/stdc++.h>
using namespace std;
struct complx
{
    int real;
    int imag;
};
struct complx add(struct complx a,struct complx b)
{
    struct complx d;
    d.real=a.real+b.real;
    d.imag=a.imag+b.imag;
    return d;
};
struct complx sub(struct complx a,struct complx b)
{
    struct complx d;
    d.real=a.real-b.real;
    d.imag=a.imag-b.imag;
    return d;
};
struct complx mult(struct complx a,struct complx b)
{
    struct complx d;
    d.real=(a.real*b.real)-(a.imag*b.imag);
    d.imag=(a.real*b.imag)+(a.imag*b.real);
    return d;
};
int main()
{
    struct complx d1={4,12};
    struct complx d2={6,7};
    struct complx d=add(d1,d2);
    struct complx e=sub(d1,d2);
    struct complx f=mult(d1,d2);
    cout<<"adding "<<d.real<<" "<<d.imag<<endl;
    cout<<"subtract  "<<e.real<<" "<<e.imag<<endl;
    cout<<"multiply "<<f.real<<" "<<f.imag;
}
