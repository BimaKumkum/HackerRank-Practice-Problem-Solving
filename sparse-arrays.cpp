#include <bits/stdc++.h>
using namespace std;
vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
    vector<int> result;
    int l1 = strings.size();
    int l2 = queries.size();
    for(int i=0; i<l2; i++)
    {   int count =0;
        for(int j=0; j<l1; j++)
        {
            if(strings[j]==queries[i])
            {
                count++;
            }
        }
        result.push_back(count);
    }
    return result;
}
int main(){
vector<string> strings;
vector<string> queries;
int n,q;
string temp;
cin>>n;
for(int i=0;i<n;i++){
        cin>>temp;

    strings.push_back(temp);
}
cin>>q;
for(int i=0;i<q;i++){
        cin>>temp;

    queries.push_back(temp);
}
vector<int>Result(matchingStrings(strings,queries));
for(int i=0;i<q;i++){
    cout<<Result[i]<<endl;
}

}
