#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t!=0)
	{
	    int n,a,f=1,mc=1;
	    cin>>n;
	    map<int,int>dic;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        dic[a]++; 
	    }
	    vector<int>ve;
	    for(auto it=dic.rbegin();it!=dic.rend();it++)
	    {
	        if(mc==1 and it->second!=1)
	        {
	            f=-1;
	            break;
	        }
	        mc=2;
	        if(it->second>2)
	        {
	            f=-1;
	            break;
	        }
	        else
	        {
	            ve.push_back(it->first);
	            dic[it->first]-=1;
	        }
	    }
	    if(f==1)
	    {
	        for(auto it=dic.rbegin();it!=dic.rend();it++)
	        {
	            if(it->second==1)
	            {
	                ve.insert(ve.begin(),it->first);
	            }
	        }
	    }
	    if(f==-1)
	    {
	    cout<<-1;
	    f=1;
	    }
	    else
	    {
	    for(int i=0;i<ve.size();i++)
	    cout<<ve[i]<<" ";
	    }
	    cout<<"\n";
	    t-=1;
	    
	}
	return 0;
}
