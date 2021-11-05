#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n,i=1,j=0,k,s=0;
	    cin>>n;
	    if(n%2==0)
	    i=-1;
	    else
	    i=1;
	    while(j<n)
	    {
	        cin>>k;
	        s+=i*k*k;
	        if(i==1)
	        i=-1;
	        else
	        i=1;
	        j+=1;
	    }
	    cout<<s<<"\n";
	    t-=1;
	}
	return 0;
}
