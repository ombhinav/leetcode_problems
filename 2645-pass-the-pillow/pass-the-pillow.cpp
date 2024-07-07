class Solution {
public:
    int passThePillow(int n, int time) {
        // pehle determine the chunks
        int chunks = time/(n-1);
        if(chunks%2==0){
            return (time%(n-1) + 1);
        }
        return (n - (time%(n-1)));
    }
};