class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(int num: nums){
            mpp[num]++;
        }
        priority_queue<pair<int,int>> maxHeap;
        for(auto a: mpp){
            maxHeap.push({a.second,a.first});
        }
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};