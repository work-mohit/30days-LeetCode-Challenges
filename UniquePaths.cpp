// Memoization + Recursion 

class Solution {
public:
    int cache[101][101] = {};
    
    int uniquePaths(int m, int n) {
		// base case
        if(m<0 || n<0) return 0;
        if(m==1 && n==1) return 1;
        
        // memoization
        int &ret = cache[m][n];
        if(ret) return ret;
        
        return cache[m][n] = uniquePaths(m-1,n) + uniquePaths(m,n-1);
    }
};


//  Below is the DP Approach


// class Solution {
// public:
//     int dp[101][101] = {};
//     int uniquePaths(int m, int n) {
//         if(m < 0 || n < 0) return 0;
        
//         if(m == n) return 1;
        
//         for (int i = 0; i < m ; i++ ){
//             for(int j = 0 ; j < n; j++){
//                 if (i == 0 || j == 0 )
//                     dp[i][j] = 1;
//                 else
//                     dp[i][j] = dp[i-1][j] + dp[i][j-1];
//             }
//         }
        
//        return dp[m-1][n-1];
        
//     }
// };

