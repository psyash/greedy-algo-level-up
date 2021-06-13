#include <bits/stdc++.h>
using namespace std;
//activity selection

bool compare(pair<int,int> p1, pair<int,int> p2){
  return p1.second < p2.second;
}

int main() {
  int t,s,e;
  cin>>t;
  vector<pair<int,int>> v;
  while(t--){
    int n;
    cin>>n;
    //input in vector
    for(int i=0;i<n;i++){
      cin>>s>>e;
      v.push_back(make_pair(s,e));
    }
    //activity selection
    //sort
    sort(v.begin(),v.end(),compare);
    //iterate
    int fin = v[0].second;
    int res = 1;
    for(int i=0;i<n;i++){
      if(v[i].first >= fin){
        fin = v[i].second;
        res++;
      }
    }
    cout<<res<<endl;
  }
    return 0;
}
