class Solution {
public:
    int countOdds(int low, int high) {
        int result =0;
        if(low%2){
            low++;result++;
        }
        if(high%2){
            high-- ; result++;
        }
        
        return result+ (high-low)/2;
            
    
    }
};