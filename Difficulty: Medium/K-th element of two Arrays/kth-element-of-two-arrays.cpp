//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i = 0;
        int j = 0;
        int N = n + m;
        int ind = k-1;
        int ans = -1;
        int cnt = 0;
        
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                if(cnt == ind){ans = arr1[i];}
                cnt++;
                i++;
            }
            else{
                if(cnt == ind){ans = arr2[j];}
                cnt++;
                j++;
            }
        }
        while(i<n){
           if(cnt == ind){ans = arr1[i];}
                cnt++;
                i++; 
        }
        while(j<m){
            if(cnt == ind){ans = arr2[j];}
                cnt++;
                j++;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends