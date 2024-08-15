class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // int cnt5=0,cnt10=0,cnt20=0;
        // for(int i=0;i<bills.size();i++){
        //     if(bills[i] == 5){
        //         cnt5++;
        //     }
        //     if(bills[i] == 10){
        //         cnt10++;
        //         if(cnt5 != 0){
        //             cnt5--;
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        //     if(bills[i] == 20){
        //         cnt20++;
        //         if(cnt5 != 0 && cnt10 != 0){
        //             cnt10--;
        //             cnt5--;
        //         }
        //         else if(cnt10 == 0 && cnt5 != 0){
        //             if(cnt5 >= 3){
        //                 cnt5--;
        //                 cnt5--;
        //                 cnt5--;
        //                 if(cnt5 < 0){
        //                     return false;
        //                 }
        //             }
        //             else{
        //                 return false;
        //             }
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        // }
        // return true;
        int n = bills.size();
        int c1 = 0;
        int c2 = 0;
        for(int i=0;i<n;i++)
        {
            if(bills[i] == 5)
            {
                c1++;
            }
            else if(bills[i] == 10)
            {
                if(c1>0)
                {
                    c1--;
                    c2++;
                }
                else
                {
                    return false;
                }
            }
            else if(bills[i] == 20)
            {
                if(c1>0 && c2 >0)
                {
                    c1--;
                    c2--;
                }
                else if(c1>=3)
                {
                    c1-=3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    
    }
};