// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int bitMultiply(int N){
        // code here
        int sc=0,T=N;
        
        while(N)
        {
            int r=N%2;
            N=N/2;
            if(r==1)
            sc+=1;
        }
        return T*sc;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.bitMultiply(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends