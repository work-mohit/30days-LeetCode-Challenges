class Solution {
    int f(int n){
        int x = 0;
        while(n){
            int digit = n % 10;
            n = n / 10;
            x += digit * digit;
            
        }
        return x;
    }
    public:
    
    bool isHappy(int n) {
        unordered_set<int> uset;
        while(true){
            if(n == 1){
                return true;
            }
            n = f(n);    
            if(uset.count(n) == 1){
                return false;
            }
           uset.insert(n);
           
            
        }
    }
};
