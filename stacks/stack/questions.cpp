// reverse a string using stack
#include<bits/stdc++.h>
#include "stack.h"
using namespace std;
int main(){
    string a="Akash";
    stacks st(100);
    for(int i=0;i<a.length();i++){
     st.push(a[i]);
    }
    a="";
    while(!st.isempty()){
        char b=st.pop();
        a+=b;
    }
    cout<<a;
}