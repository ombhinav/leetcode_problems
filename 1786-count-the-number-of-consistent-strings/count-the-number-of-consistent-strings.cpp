class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int>st;
        int cnt=0;
        bool flag = false;
        for(int i=0;i<allowed.size();i++){
            st.insert(allowed[i]);
        }
        for(auto it: words){
            for(int i=0;i<it.size();i++){
                if(st.count(it[i]) == 1 ){
                    flag = true;
                }
                else{
                    flag = false;
                }
                if(!flag){
                    flag = false;
                    break;
                }    
            }
            if(flag){
                cnt++;
                cout<<it<<" ";
            }
        }
        return cnt;

        

    }
};