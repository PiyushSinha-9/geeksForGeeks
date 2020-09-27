
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef pair<long long,long long> pll;



#define F first
#define S second
#define print(x) for(auto iuiuiuiuiui:x){ cout<<iuiuiuiuiui<<" ";}br;
#define print_array(array,size) for(ll i=0;i<size;i++){ cout<<array[i]<<" ";}br;
#define br cout<<"\n"
#define max_val 1000000
#define mod 1000000007
#define pb(a) push_back(a)
#define mp(asd,fgh) make_pair(asd,fgh)
#define all(c) c.begin(),c.end()
#define check_ cout<<"yo";

#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);

#define INF LONG_LONG_MAX
#define N_INF LONG_LONG_MIN


#pragma GCC target("popcnt")


vector <int> bfs(vector<int> g[], int N) {
    
    vector<bool> visted(N,false);
    list<int> queue;
    int start=0;
    queue.push_back(start);
    vector<int> path;
    
    while(!queue.empty()){
        int up= queue.front();
        queue.pop_front();
        visted[up]=true;
        path.push_back(up);
        
        for(int i: g[up]){
            if(!visted[i]){
                queue.push_back(i);
                visted[i]=true;
            }
        }
        
    }
    
    return path;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test;
    cin>>test;
    while(test--){
        ll n,v;
        
    }

    
}