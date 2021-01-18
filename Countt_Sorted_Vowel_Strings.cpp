class Solution {
public:
    int countVowelStrings(int n) {
        int startWith[5] = {1,1,1,1,1};  // start with u o i e a
        
//      1  1  1  1  1
                 \ /
//                +
    // 5  4  3   2  1
         
        
        
        while(n--) {
            for(int i = 3; i >= 0; i--)
                startWith[i] += startWith[i+1];
            if(n == 0)
                return startWith[0];
        }
        return -1;

    }
};


//  or return (n + 1) * (n + 2) * (n + 3) * (n + 4) / 24;