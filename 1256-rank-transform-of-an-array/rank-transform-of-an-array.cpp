class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp(arr);
        unordered_map<int,int> mpp;
        sort(temp.begin(),temp.end());
        int i = 1;
        for(auto it: temp){
            if(mpp.find(it) == mpp.end()){
                mpp[it] = i;
                i++;
            }
        }
        temp.clear();
        for(auto it: arr){
            temp.push_back(mpp[it]);
        }
        return temp;

    }
};