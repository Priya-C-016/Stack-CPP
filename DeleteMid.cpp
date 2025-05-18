void deleteMid(stack<int>& s) {
        // code here..
        int n=s.size();vector<int>ans;
        for(int i=0;i<n/2;i++){
            ans.push_back(s.top());
            s.pop();
        }
        s.pop();
        for(int i=n/2+1;i<n;i++){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            s.push(ans[i]);
        }

    }
