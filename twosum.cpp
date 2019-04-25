#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;

class Solution{
public:
vector<int> twosum(vector<int>& a,int target ){
    int input;
    vector<int> o;
    int counter=0;
    unordered_map<int,int> umap;
while(cin >> input ){
    a.push_back(input);

}

for(int i=0;i<a.size();i++){
    auto s=umap.find(target-a[i]);
    if(s!=umap.end()){
        o.push_back(s->second);
        o.push_back(i);
        return o;
    }
    else{
        umap[a[i]]=i;
    }
    }
    return o;
};
};



int main(){
    vector<int> v;
    Solution s;
    int target;
    cout << "Enter Target";
    cin >> target;
    v=s.twosum(v,target);
    for(auto i:v){
        cout<< v[i];
    }
    return 0;
};