#include <iostream>
using namespace std;
void permute(string s, int low , int high){
    if( low == high){
        cout<<s<<" ";
    }
    else{
        for(int i = low;i<=high; i++){
            swap(s[low], s[i]);
            permute(s, low+1, high);
            swap(s[low], s[i]);
        }
    }
} 
int main() {
	int n;
	while(n--){
	    string s;
	    system("clear");
        getline(cin, s);
        
        int n = s.size();
        permute(s, 0,n-1);
        
	}
	return 0;
}