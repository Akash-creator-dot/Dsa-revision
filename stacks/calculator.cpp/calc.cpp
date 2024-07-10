#include<bits/stdc++.h>
using namespace std;
int conv(char a){
    int b=a-'0';
    return b;
}
int main(){
    cout<<"Enter the string";
    string s;
    cin>>s;
    int num=0;
    int j=s.size()-1;
    for(int i=0;i<s.length();i++){
       int c=conv(s[i]);
       num=num+c*pow(10,j);
       j--;
    }
    cout<<"Enter the string";
    string str;
    cin>>str;
    int numi=0;
    j=s.size()-1;
    for(int i=0;i<str.length();i++){
       int c=conv(str[i]);
       numi=numi+c*pow(10,j);
       j--;
    }
    cout<<numi+num;
}