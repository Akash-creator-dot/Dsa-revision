// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int v,e;
// // //     cout<<"Enter number of vertices "<<endl;
// // //     cin>>v;
// // //     cout<<"Enter number of edges "<<endl;
// // //     cin>>e;
// // //     vector<int>adj[v];
// // //     for(int i=1;i<=e;i++){
// // // int a,b;
// // // cin>>a>>b;
// // // adj[a].push_back(b);
// // //     }
// // //     // cout<<"Outdegrees are: "<<endl;
// // //     // for(int i=0;i<v;i++){
// // //     //     cout<<i<<": "<<adj[i].size()<<endl;

// // //     // }
// // //     vector<int>indeg(v,0);
// // //     for(int i=0;i<v;i++){
// // //         for(int j=0;j<adj[i].size();j++){
// // //             int y=adj[i][j];
// // //             indeg[y]++;
// // //         }
// // //     }
// // //     // cout<<"Indegrees are: "<<endl;
// // //     // for(int i=0;i<v;i++){
// // //     //    cout<<i<<": "<<indeg[i]<<endl;
// // //     // }
// // //     queue<int>q;
// // //     for(int i=0;i<v;i++){
// // //         if(indeg[i]==0){
// // //             q.push(i);
// // //         }
// // //     }
// // //     while(!q.empty()){
// // //             int x=q.front();
// // //             cout<<x<<" ";
// // //             q.pop();
// // //             for(int j=0;j<adj[x].size();j++){
// // //                 int y=adj[x][j];
// // //                  indeg[y]--;
// // //                  if(indeg[y]==0){
// // //                     q.push(y);
// // //                  }
// // //             }
// // //         }
// // // }
// // #include<bits/stdc++.h>
// // using namespace std;
// //   int posn(string s, int last) {
// //         for (int i = last; i >= 0; i--) {
// //             if (s[i] == '0') {
// //                 return i;
// //             }
// //         }
// //         return -1;
// //     }

// //     int solve(string s, int len) {
// //         int count = 0;
// //         int last = s.length() - 1;

// //         while (s != "1" && s.length()>1) {
// //             if (s[last] == '0') {
// //                 s.pop_back();
// //                 last--;
// //                 count++;
// //             } else {
// //                   int a = posn(s, last);
// //             if (a == -1) {
// //                 string str = "1";
// //                 for (int i = 0; i < len; i++) {
// //                     str.push_back('0');
// //                 }
// //                 count++;
// //                 s = str;
// //                 last = str.length() - 1;
// //             } else {
// //                     s[a] = '1';
// //                     for (int i = a + 1; i <= last; i++) {
// //                         s[i] = '0';
// //                     }
// //                     count++;
// //                 }
// //             }
// //         }
// //         return count;
// //     }
// // int main(){
// //     string s="11";
// //     int k=solve(s,s.length());
// //     cout<<k<<endl;
// // }
// #include <iostream>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     int posn(string s, int last) {
//         for (int i = last; i >= 0; i--) {
//             if (s[i] == '0') {
//                 return i;
//             }
//         }
//         return -1;
//     }

//     int solve(string s, int len) {
//         int count = 0;
//         int last = s.length() - 1;

//         while (s != "1" && s.length() > 1) {
//             if (s[last] == '0') {
//                 s.pop_back();
//                 last--;
//                 count++;
//             } else {
//                 int a = posn(s, last);
//                 if (a == -1) {
//                     string str = "1";
//                     for (int i = 0; i < len; i++) {
//                         str.push_back('0');
//                     }
//                     count++;
//                     s = str;
//                     last = str.length() - 1;
//                 } else {
//                     s[a] = '1';
//                     for (int i = a + 1; i <= last; i++) {
//                         s[i] = '0';
//                     }
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }

//     int numSteps(string s) {
//         return solve(s, s.length());
//     }
// };

// int main() {
//     Solution solution;
//     string s = "1001";  // (1001)_2
//     int result = solution.numSteps(s);
//     cout << "Number of steps: " << result << endl;  // Expected output: 6
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
    int numSteps(string s) {
        int count = 0;
        int k=s.size();
        int i=0;
        int j=0;
        while(s!="1"){
             cout<<"while1 "<<i<<endl;
             i++;
            if(s[s.size()-1]=='0'){
                cout<<"If s"<<s<<" s.size "<<s.size();
                cout<<"Count is "<<count<<endl;
                s.pop_back();
                k--;
                count++;
            }
            else{
                cout<<"else s"<<s<<" s.size "<<s.size();
                int last = s.size()-1;
                cout<<"count is "<<count<<endl;
                while(s[last]!='0'){
                    cout<<"second while  "<<j<<" s "<<s<<" last "<<last<<endl;
                    j++;
                    s[last]='0';
                    last--;
                    if(last<0){
                        s.insert(0,1,'1');
                        break;
                    }
                
                }
                // if(last==0){
                //     s[last]='1';
                // }
                count++;
            } 
        }
   return count;
    }
    int main(){
        string s="11001";
       cout<<endl<<numSteps(s);
    }