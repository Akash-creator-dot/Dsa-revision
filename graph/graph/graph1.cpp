// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // template <typename t>
// // // // class graph{
// // // //     public:
// // // //     map<t,list<t>>ma;
// // // //     void addEdge(t u,t v,bool direction){
// // // //         ma[v].push_back(u);
// // // //         if(!direction)
// // // //         ma[u].push_back(v);
// // // //     }
// // // //     void print(){
// // // //         for(auto i:ma){
// // // //            cout<<i.first<<": ";
// // // //            for(auto j:i.second){
// // // //             cout<<j<<",";
// // // //            }
// // // //            cout<<endl;
// // // //         }
// // // //     }
// // // // };
// // // // int main(){
// // // // graph<int> g;
// // // // cout<<"Enter v and e"<<endl;
// // // // int v,e;
// // // // cin>>v>>e;
// // // // for(int i=0;i<e;i++){
// // // //     int a,b;
// // // //     cin>>a>>b;
// // // //     g.addEdge(a,b,0);
// // // // }
// // // // g.print();
// // // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     cout<<"Enter the value of n"<<endl;
// // //     int n;
// // //     cin>>n;
// // //     for(int i=0;i<n;i++){
// // //         cout<<"*";
// // //        if(i==0||i==n-1){
// // //          for(int j=0;j<n-1;j++){
// // //             cout<<"*";
// // //         }
// // //        }
// // //        else{
// // //         for(int j=0;j<n-2;j++){
// // //             cout<<" ";
// // //         }
// // //         cout<<"*";
// // //        }
// // //        cout<<endl;
// // //     }

// // // }
// // #include<iostream>
// // #include<map>
// // #include<list>
// // using namespace std;
// // class graph{
// //     public:
// //   map<int,list<int>>ma;
// //   void addedge(int v,int u,bool flag){
// //      ma[v].push_back(u);
// //      if(!flag)
// //      ma[u].push_back(v);
// //   }
// //   void print(){
// //     for(auto i:ma){
// //         cout<<i.first<<": ";
// //         for(auto j:i.second){
// //             cout<<j<<" , ";
// //         }
// //         cout<<endl;
// //     }
// //   }
// // };
// // int main(){
// // cout<<"Enter the number of vertext and number of edges";
// // int v,e;
// // graph g;
// // cin>>v>>e;
// // for(int i=0;i<e;i++){
// //     int V,E;
// //     cin>>V>>E;
// //     g.addedge(V,E,0);
// // }
// // g.print();
// // } 
// #include<iostream>
// #include<math.h>
// using namespace std;
// long long fact(long long n){
//     if(n==0 ||n==1){
//         return 1;
//     }
//     long long k=n*fact(n-1);
//     return k;
// }
// string getBinaryRep(int N)
//     {
//         string s="";
//         while(N>0){
//           if((N&1)==1){
//               s+="1";
//           }else{
//               s+="0";
//           }
//           N=N>>1;
//         }
//         int l=s.length();
//         string str="";
//         for(int i=0;i<(30-l);i++){
//             str+="0";
//         }
//         str+=s;
//         return str;
//     }
// int main(){
//   cout<<getBinaryRep(2);
// }
#include<iostream>
#include<queue>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;
int main(){
    //queue
//     queue<int>q;
//     q.push(12);
//     q.push(13);
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     q.pop();
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     cout<<q.empty()<<endl;
//    q.pop();
//    cout<<q.empty()<<endl;
//    cout<<q.front()<<endl;
  //stack
//    stack<int>s;
//     s.push(12);
//     s.push(13);
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     cout<<s.empty()<<endl;
//    s.pop();
//    cout<<s.empty()<<endl;
   //map
 map<int,string>ma;
 ma[1]="Akash";
 ma[2]="Aman";
}