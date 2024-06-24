//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    int upperBound(vector<int>& arr, int x, int n){
        int ans = n;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int countSmall(vector<vector<int>>& matrix, int n, int m, int x){
        int cnt = 0;
        for(int i=0;i<n;i++){
            cnt = cnt + upperBound(matrix[i],x,m);
        }
        return cnt;
    }
    
    
    
    int median(vector<vector<int>> &matrix, int R, int C){
        // code here
        int n = R;
        int m = C;
        int low = INT_MIN;
        int high = INT_MAX;
        for(int i=0;i<n;i++){
            low = min(low,matrix[i][0]);
            high = max(high,matrix[i][m-1]);
        }
        
        int req = (n*m)/2;
        while(low<=high){
            int mid = (low+high)/2;
            int smallcnt = countSmall(matrix,n,m,mid);
            if(smallcnt <= req){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends