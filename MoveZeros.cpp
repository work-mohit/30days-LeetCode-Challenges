class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int nxt = 0;
        for( int i : nums){
            if( i != 0){
                nums[nxt] = i;
                nxt++;
                
            }
        }
        for (int i = nxt; i < size; i++){
            nums[i] = 0;
        }
    }
};
