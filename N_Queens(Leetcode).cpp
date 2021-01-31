class Solution {
public:
    bitset<30> col , leftDaigonal , rightDaigonal;
    vector<vector<string>> ans;

	
    bool isValid(int n, int r, int c){
        
        return !col[c] && !leftDaigonal[r - c + n  + 1]  && !rightDaigonal[r+c];
    }
	
    void backtrack(vector<string> &s, int r,int n){
        if(r==s.size()){
            ans.push_back(s);
            return;
        }
        for(int c=0;c<s.size();c++){
            if(isValid(n, r,c)){
                col[c] = leftDaigonal[r - c + n  + 1] = rightDaigonal[r+c] = 1;
                s[r][c]='Q';
                backtrack(s,r+1,n);
                col[c] = leftDaigonal[r - c + n  + 1] = rightDaigonal[r+c] = 0;
                s[r][c]='.';
            }
        }
            
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> s(n, string(n,'.'));
        backtrack(s, 0,n);
        return ans;
    }
};