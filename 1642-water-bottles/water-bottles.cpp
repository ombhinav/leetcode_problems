class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int tot_bottles = numBottles;
        while(numBottles>=numExchange){
            tot_bottles += (numBottles/numExchange);
            numBottles = (numBottles/numExchange) + (numBottles%numExchange);
            

        }

        return tot_bottles;
    }
};