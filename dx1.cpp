#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

int numtest, N, M;
int parent[100000];
struct Edge
{
    int start;
    int end;
    int weight;
    Edge(int a, int b, int c){
        start = a;
        end = b;
        weight = c;
    }
};

int compare(Edge a, Edge b){
    return a.weight < b.weight;
}

int find_parent(int x){
    if(parent[x] == x){
        return x;
    }
    else{
        return parent[x] = find_parent(parent[x]);
    }
}

void Union(int u, int v){
    u = find_parent(u);
    v = find_parent(v);

    if(u != v)
        parent[v] = u;
}


int main(){
    ios::sync_with_stdio(false);

    cin >> numtest;
    vector<Edge> edge;
    int a,b,c;
    int result =0;
    
    for(int i = 1; i < numtest ; i++ ){
        cin >> N >> M ;

        for(int j =0; j<M; j++){
            cin >> a >> b >> c; 
            edge.push_back(Edge(a,b,c));
        }
        sort(edge.begin(),edge.end(), compare);
       
            int prev = edge[0].start;
            int next = edge[0].end;
            for(int k =0; k < M ; k++){
            	if(next == edge[k].start){
                     if(prev == edge[k].end){
                         cout << "beee";
                      	break;
                     }
                	next = edge[k].end;
                    prev = edge[k].start;
                    result += edge[i].weight;
                }
            }
        cout << "#" << i  << " " << result << "\n";
    }

}