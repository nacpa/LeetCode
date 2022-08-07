class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        stack<string> stak;
        int sz=path.size();
        for(int i=0;i<sz;++i){
            if(path[i]=='/')continue;
            string tmp;
            while(i<sz && path[i]!='/'){
                tmp+=path[i];
                ++i;
            }
            if(tmp==".")continue;
            else if(tmp==".."){
                if(!stak.empty())
                    stak.pop();
            }
            else stak.push(tmp);
        }
        while(!stak.empty()){
        ans="/"+stak.top()+ans;
        stak.pop();
        }
        if(ans.size()==0) return "/";
        return ans;
        
    }
};