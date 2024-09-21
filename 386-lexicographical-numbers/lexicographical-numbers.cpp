class Solution {
private:
    void solve(int number, int limit, vector<int>& ans) {
        if (number > limit) return;
        ans.push_back(number);
        
        for (int append = 0; append <= 9; append++) {
            int new_num = number * 10 + append;
            if (new_num > limit) return;
            solve(new_num,limit,ans);
        }
    }

public:
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for (int i = 1; i <= 9; i++) {
            solve(i, n, ans);
        }
        return ans;
    }
};