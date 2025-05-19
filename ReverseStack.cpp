 void Reverse(stack<int> &st) {
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        for(int num:ans){
            st.push(num);
        }
    }
