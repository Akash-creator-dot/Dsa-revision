// #include<bits/stdc++.h>
// using namespace std;
// class graph {
//     private:
//     bool dfs(int node,unordered_map<int,bool>&visited,unordered_map<int,bool>&dfsvisited,vector<int>adj[]){
//     visited[node]=true;
//     dfsvisited[node]=true;
//     for(auto neighbour:adj[node]){
//       if(!visited[neighbour]){
//         bool cycledec=dfs(neighbour,visited,dfsvisited,adj);
//         if(cycledec){
//           return true;
//         }
//       }
//        else if (dfsvisited[neighbour]){
//           return true;
//         }
//     }
// dfsvisited[node]=false;
// return false;
// }
//   public:
//     bool isCyclic(int V, vector<int> adj[]) {
//   unordered_map<int,bool>visited;
//   unordered_map<int,bool>dfsvisited;
//   for(int i=0;i<V;i++){
//     if(!visited[i]){
//       bool cycle=dfs(i,visited,dfsvisited,adj);
//       if(cycle){
//         return true;
//       }
//     }
//   }
//   return false;
//     }
// };
// int main(){
//     graph g;
//     int v,e;
//     cout<<"Enter numbetr of vertices"<<endl;
//     cin>>v;
//     cout<<"Enter number of edges"<<endl;
//     cin>>e;
//     vector<int>adj[v];
//     for(int i=0;i<e;i++){
//         cout<<"Enter the points"<<endl;
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//     }
//     if(g.isCyclic(v,adj)){
//         cout<<"Cycle is detected"<<endl;
//     }else{
//         cout<<"There is no cycle detected"<<endl;
//     }
// }