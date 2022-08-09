class Solution {
public:
    bool isValid(string s) {
        map<char ,char> m = { { '(',')' } , { '{' , '}' } , { '[' , ']' } };
        stack<char> st;
        for(char c :s){
            if(m.find(c)!=m.end()){
                st.push(c);
            }else {
                if(!st.empty()){
                    if(m[st.top()]!=c){
                        return false;
                    }
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size()==0; 
    }
};