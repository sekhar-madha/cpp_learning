#include<iostream>
using namespace std;
long long int power_value(int n,int p)
{
    if (p==1){
        return n;
    }
    else{
    if (p%2==1)
    {
            return n*power_value(n*n,p/2);
    }
    else
    {
        return power_value(n*n,p/2);
    }
    }
}

int main()
{
    int n,p;
    cin>>n>>p;
    n=power_value(n,p);
    cout<<n;
}
