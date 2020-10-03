#include <bits/stdc++.h>
using namespace std;
int main(){

map <string,int>maps;
int n,i;
 int x;
string s;
cin>>n;
string s1[n];
for(i=0;i<n;i++){
    cin>>s>>x;
    maps.insert(pair<string, int>(s,x));
}
for(i=0;i<n;i++){
    cin>>s1[i];
}
int temp =0;
map<string, int>::iterator itr;
for(i=0;i<n;i++){
        temp=0;
for(itr=maps.begin();itr!=maps.end();++itr){
    if(itr->first==s1[i]){
        cout<<itr->first<<"="<<itr->second<<endl;
        temp=1;
    }
}
if(temp==0){
        cout<<"Not found"<<endl;
}
}

}
