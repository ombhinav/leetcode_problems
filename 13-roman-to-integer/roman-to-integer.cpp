class Solution {
public:
    int romanToInt(string s) {
        int sum = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='V'){
                sum+=5;
            }
            if(s[i]=='L'){
                sum+=50;
            }
            if(s[i]=='D'){
                sum+=500;
            }
            if(s[i]=='M'){
                sum+=1000;
            }

             if(s[i]=='C'){
                sum+= 100;
                if(s[i+1]=='D'){
                    sum+=300;
                    i++;
                }
                if(s[i+1]=='M'){
                    sum+=800;
                    i++;
                }
            }

            if(s[i]=='X'){
                sum+= 10;
                if(s[i+1]=='L'){
                    sum+=30;
                    i++;
                }
                if(s[i+1]=='C'){
                    sum+=80;
                    i++;
                }
            }

            if(s[i]=='I'){
                sum+= 1;
                if(s[i+1]=='V'){
                    sum+=3;
                    i++;
                }
                if(s[i+1]=='X'){
                    sum+=8;
                    i++;
                }
            }
        }
        return sum;
    }
};