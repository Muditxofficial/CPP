#include<bits/stdc++.h>

using namespace std;

enum {WHITE,GRAY,BLACK};

struct Node {
    int key;
    int color;
    Node* p;
    int d;
    int f;

    Node (int x) : key(x) {}
};

list<Node*> tSorted;

struct Graph {
    vector<Node*> V;
    vector<vector<Node*>> adj;
    Graph(int s){
        V.resize(s);
        for(int i=0;i<s;i++){
            V[i] = new Node(i);
        }
        adj.resize(s);
    }
    void addEdge(int u,int v){
        adj[u].push_back(V[v]);
    } 
};

void dfsVisit(Graph& G,Node* u,int& time){
    ++time;
    u->d = time;
    u->color = GRAY;
    for(auto v: G.adj[u->key]){
        if(v->color == WHITE){
            v->p = u;
            dfsVisit(G,v,time);
        }
    }
    u->color = BLACK;
    ++time;
    u->f = time;
    tSorted.push_front(u);
}

void DFS(Graph& G){
    for(auto u: G.V){
        u->color = WHITE;
        u->p = nullptr;
    }
    int time = 0;
    for(auto u: G.V){
        if(u->color == WHITE){
            dfsVisit(G,u,time);
        }
    }
}

void topologicalSort(Graph& G){
    DFS(G);
    for(auto x: tSorted){
        cout<< x->key <<" ";
    }
}

void destroy(){

}

int main(){
    Graph G(6);
    G.addEdge(5,2);
    G.addEdge(5,0);
    G.addEdge(4,0);
    G.addEdge(4,1);
    G.addEdge(2,3);
    G.addEdge(3,1);

    topologicalSort(6);
    destroy();
    return 0;
}