//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int N)
    {
        // code here
        int sc=0,lc=0;
        while(N)
        {
            int r=N%2;
            N=N/2;
            if (r==1)
            sc+=1;
            else
            {
                if(sc>lc)
                {
                    lc=sc;
                }
                sc=0;
            }
        }
        if (sc>lc)
        {
            return sc;
        }
        return lc;
    }
};


// { Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}  // } Driver Code Ends