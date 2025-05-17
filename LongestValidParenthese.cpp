int maxLength(string& s) {
        // code here
        stack<int>st;
        st.push(-1);
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
            }else{
                st.pop();
                if(!st.empty()){
                    cnt=max(cnt,i-st.top());
                }else{
                    st.push(i);
                }
            }
        }
        return cnt;
    }
