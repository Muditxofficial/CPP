#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> vec;
vector<bool> visited;

void dfs(const vector<vector<int>>& vec,int s){
    stack<int> stk;
    stk.push(s);
    visited[s]=true;
    while(!stk.empty()){
        int node = stk.top();
        stk.pop();
        cout<<node<<endl;
        for(int i = 0;i<vec[node].size();i++){
            if(!visited[vec[node][i]]){
                stk.push(vec[node][i]);
                visited[vec[node][i]]=true;
            }
        }
    }
}

void initialize() {
    for (int i = 0; i < visited.size(); i++)
    {
        visited[i]=false;
    }
    
}

int main(){
    int nodes,edges,u,v;
    cin>>nodes;
    cin>>edges;
    vec.resize(nodes+1);
    visited.resize(nodes+1);
    for(int i = 0;i<edges;i++){
        cin>>u>>v;
        vec[u].push_back(v);
        vec[v].push_back(u);

    }
    initialize();
    dfs(vec,1);
    return 0;
}

/*
6 7
1 2
1 4
4 5
2 4
2 3
3 6
4 6
*/