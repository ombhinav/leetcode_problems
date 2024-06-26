//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(),A.end(),greater<int> ());
        sort(B.begin(),B.end(),greater<int> ());
        vector<int> ans;
        set<pair<int,int>> S;
        priority_queue<pair<int,pair<int,int>>> pq;
        pq.push({A[0]+B[0], {0,0}});
        for(int i=0;i<K;i++){
            pair<int,pair<int,int>> p = pq.top();
            pq.pop();
            ans.push_back(p.first);
            if(p.second.first+1<N && S.find({p.second.first+1,p.second.second}) == S.end()){
                pq.push({A[p.second.first+1] + B[p.second.second],{p.second.first+1,p.second.second}});
                S.insert({p.second.first+1, p.second.second});
            }
            if(p.second.second+1<N && S.find({p.second.first,p.second.second+1}) == S.end()){
                pq.push({A[p.second.first] + B[p.second.second+1],{p.second.first,p.second.second+1}});
                S.insert({p.second.first, p.second.second+1});
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends