//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int>pos;
        int x=0,y=0;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                pos.push_back(arr[i]);
                x++;
            }
            else{
                neg.push_back(arr[i]);
                y++;
            }
        }
        y=0;
        for(int i=0;i<n;i++){
            if(x>0){
                arr[i]=pos[i];
                x--;
            }
            else{
                arr[i]=neg[y];
                y++;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends
