
bool isValid(string &str){
    if(str.length() > 3)
        return false;
    if(str.front()=='0' and str.length()>1)
        return false;
    int val = stoll(str);
    
    return val >= 0 and val <= 255;
}
vector<string> genIp(string &s) {
    // Your code here
    vector<string> res;
    
    for(int i = 1 ; i <= 3 && i < s.length(); i++){
        string first = s.substr(0,i);
        
        if(isValid(first)){
            for(int j = 1 ; j <= 3 && i+j < s.length(); j++){
               string second = s.substr(i,j);
                if(isValid(second)){
                     for(int k = 1 ; k <= 3 && i+j+k < s.length(); k++){
                         string third = s.substr(i+j, k);
                         string fourth = s.substr(i+j+k);
                         if(isValid(third) && isValid(fourth)){
                             res.emplace_back(first+"."+second+"."+third+"."+fourth);
                         }
                     }
                } 
            }
                
           
        }
    }
    return res;
}
