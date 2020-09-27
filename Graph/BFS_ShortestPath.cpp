
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




void get_path(vector<ll> *edge,ll start,ll end, bool *visted){
    
    if(start==end){
        cout<<start;
        return;
    }
    
    queue<ll> que;
    que.push(start);
    map<ll,ll> parent;
    
    parent[start]=-1;
    bool flag=false;
    while(!que.empty()){
    	ll up=que.front();
        que.pop();
        
        visted[up]=true;
        
        for(ll i:edge[up]){
            
            if(!visted[i]){
                
                if(parent[i]!=0){
                	parent[i]=min(up,parent[i]);
                }else{
                    parent[i]=up;
                }
                que.push(i);
                visted[i]=true;

                if(i==end){
                    flag=true;
                    queue<ll> empty;
                    swap(que,empty);
                    break;
                }
            }
        }
        
    }
    if(flag)
    while(end!=-1){
    	cout<<end<<" ";
        end=parent[end];
    }
    
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,v;
    cin>>n>>v;
    vector<ll> *edge=new vector<ll>[n];
    ll e1,e2;
    while(v--){
        cin>>e1>>e2;
        edge[e1].pb(e2);
        edge[e2].pb(e1);
    }
    cin>>e1>>e2;
    bool *visted=new bool[n];
    for(ll i=0;i<n;i++){
        visted[i]=false;
    }
    get_path(edge,e1,e2,visted);
    
    delete [] visted;

}







