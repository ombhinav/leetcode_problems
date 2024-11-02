class Solution {
public:
    bool isCircularSentence(string sentence) {
        for(int i=0;i<sentence.length();i++){
            if(sentence[i] == ' ' && i != sentence.length()-1){
                if(sentence[i-1] == sentence[i+1]){
                    cout<<"yay "<< sentence[i-1]<<endl;
                    continue;

                }
                else{
                    return false;
                }
            }
            else if(i == sentence.length()-1){
                if(sentence[0] == sentence[sentence.length()-1]){
                    return true;
                }
            }
            else{
                continue;
            }
        }
        return false;
    }
};