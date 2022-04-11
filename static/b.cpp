#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long int n;cin>>n;
        vector<long long int> v(n), e;
        long long int sum=0;
        vector<pair<long long int, long long int>> d;
        for(int i=0;i<n;i++){
            cin>>v[i];
            d.push_back({v[i], i+1});
            sum+=v[i];
        }
        sort(d.begin(), d.end());
        long long int c=1;
        for(int i=n-2;i>=0;i--){
            sum-=d[i+1].first;
            if(sum < d[i+1].first){
                break;
            }else{
                c++;
            }
        }
        for(int i=n-1;i>=(n-1-c+1);i--){
            e.push_back(d[i].second);
        }
        cout<<e.size()<<endl;
        sort(e.begin(), e.end());
        for(int i=0;i<e.size();i++){
            cout<<e[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}