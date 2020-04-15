class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        # I have created a map to map same strings
        unordered_map<string , vector<string>> umap;
        
        # now what will i do i save a string in temp string
        # then sort the temp string 
        # if the sort string already in map then the string will mapped to that string
        # sort means if eat is sorted it will become aet and tae will become aet 
        # hence if the two strings is anagrams then there sorted string will same 
        
        
        for(string s : strs){
            string s2 = s;
            sort(s2.begin(),s2.end());
            umap[s2].push_back(s);
        }
        # now we just add those string to a vector of vectors bcz of return type
        
        vector<vector<string>> vec;
        for(auto s: umap){
            vec.push_back(s.second);
        }
        return vec;
    }
    
};
