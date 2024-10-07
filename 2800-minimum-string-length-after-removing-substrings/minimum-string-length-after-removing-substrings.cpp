class Solution {
public:
    // bool stillGoing(string &s1, string &s2, string &s, bool &flag){
    //     if(s.length()<2){
    //         flag = false;
    //         return false;
    //     }
    //     for(int i=0;i<=s.length()-2;i++){
    //         string sub = s.substr(i,2);
    //         if(sub == s1 || sub == s2){
    //             s.erase(i,2);
    //             flag = true;
    //             return true;
    //         }
    //    }
    //    flag = false;
    //    return false;
    // }
    int minLength(string s) {
    //    if(s.length()<2){
    //         return s.length();
    //    } 
    //    string s1 = "AB";
    //    string s2 = "CD";
    //    string ans = "";
    //    bool flag = true;
    //    while(flag){
    //         stillGoing(s1,s2,s,flag);
    //         cout<<s;
    //         cout<<endl;
    //    }
       
    //    return s.length();

        stack<int> st;
        for(auto c: s){
            if(st.empty()){
                st.push(c);
                cout<<c<<"is pushed"<<endl; 
                continue;
            }
            if(c == 'B' && st.top() == 'A'){
                    st.pop();
            }
            else if(c == 'D' && st.top() == 'C'){            
                    st.pop();
            }
            else{
                st.push(c);
            }
        }
        return st.size();
    }
};