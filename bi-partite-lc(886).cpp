bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> colors(n+1 , 0);
        vector<vector<int>> grp(n+1);
        for(auto &x: dislikes){
            grp[x[0]].push_back(x[1]);
            grp[x[1]].push_back(x[0]);
        }
        stack<int> st;
        for(int i=1 ; i<=n ; i++){
            if(colors[i]==0){
                colors[i] = -1;
                st.push(i);
            }
            while(!st.empty()){
                int cur = st.top();  st.pop();
                for(auto &hate : grp[cur]){
                    if(colors[hate]==0){ colors[hate] = colors[cur]*(-1); st.push(hate);}
                    else if(colors[hate]!=-colors[cur]) return false;
                }
            }
        }
        return true;
    }
