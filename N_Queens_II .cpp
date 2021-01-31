class Solution {
public:
    
    bitset<30> leftDaigonal, rightDaigonal, col;
    
   
    void solve(int n , int r, int &ans){
        if( r == n){
            ans++;
            return;
        }
        for(int c =0 ; c < n; c++){
            if(!leftDaigonal[r-c+n-1] && !col[c] && !rightDaigonal[r+c]){
                col[c]=leftDaigonal[r-c+n-1] = rightDaigonal[r+c] = 1;
                solve(n , r+1, ans);
                col[c]=leftDaigonal[r-c+n-1] = rightDaigonal[r+c] = 0;
            }
        }
        
    }
    int totalNQueens(int n) {
        int ans = 0;
        solve(n, 0 ,ans);
        return ans;
    }
};


