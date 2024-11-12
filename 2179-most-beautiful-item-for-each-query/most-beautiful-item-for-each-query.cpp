class Solution {

private:
    int binarySearch(vector<vector<int>>& items, int queryPrice){
        int l = 0;
        int r = items.size() - 1;
        int mid;
        int maxBeauty = 0;
        while(l<=r){
            mid = l + (r-l)/2;

            if(items[mid][0] > queryPrice){
                r = mid - 1;
            }else{
                maxBeauty = max(maxBeauty, items[mid][1]);
                l = mid + 1;
            }
        }
        return maxBeauty;
    }

public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size();
        int m = queries.size();
        vector<int> result(m);

        sort(items.begin(),items.end());

        int maxBeautySeen = items[0][1];
        for(int i=1;i<n;i++){
            maxBeautySeen = max(maxBeautySeen,items[i][1]);
            items[i][1] = maxBeautySeen;
        }

        for(int i=0;i<m;i++){
            int queryPrice = queries[i];
            result[i] = binarySearch(items,queryPrice);
    
        }
        return result;
    }
};

