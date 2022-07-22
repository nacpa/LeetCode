class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> Wstring;
        string temp="";
        for(char i :s){
            if(i==' '){
                Wstring.push_back(temp);
                temp="";
            }else{
                temp+=i;
            }
        }
         Wstring.push_back(temp);
        unordered_map<char,string> map1;
        set<string> set1;
        if(Wstring.size()!=pattern.size()){ return false;}
        for(int i=0;i<pattern.size();i++){
            if(map1.find(pattern[i])!=map1.end()){
                if(map1[pattern[i]]!=Wstring[i])
                {return false;}  
            }
            else{
                if(set1.count(Wstring[i])>0){
                    return false;
                }
                
                 map1[pattern[i]]=Wstring[i];
                 set1.insert(Wstring[i]);
            }
        }
        return true;
        
    }
};