int evaluate(vector<string>& arr) {
        // code here
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!="*" && arr[i]!="-" && arr[i]!="/" && arr[i]!="+"){
                st.push(stoi(arr[i]));
            }else{
                if(st.size()<2) return -1;
                int n=st.top();
                st.pop();
                int x=st.top();
                st.pop();
                if(arr[i]=="*")st.push(x*n);
                else if(arr[i]=="/")st.push(x/n);
                else if(arr[i]=="+")st.push(x+n);
                else if(arr[i]=="-")st.push(x-n);
            
            }
        }
        return st.top();
    }
