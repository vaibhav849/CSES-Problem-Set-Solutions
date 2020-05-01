#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(ll i = a; i < b; i++)

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll t,x,y,temp;
	vi v;
	cin>>t;
	while(t--){
		cin>>y>>x;
		if(x == y){
			v.PB(x*x - x + 1);
		}
		else if(x > y){
			temp = max(x, y) * max(x, y) - max(x, y) + 1;
			if(max(x, y) % 2 == 0){
				v.PB(temp - abs(x - y));
			}else{
				v.PB(temp + abs(x - y));
			}
		}
		else{
			temp = max(x, y) * max(x, y) - max(x, y) + 1;
			if(max(x, y) % 2 == 0){
				v.PB(temp + abs(x - y));
			}else{
				v.PB(temp - abs(x - y));
			}
		}
	}
	REP(i,0,v.size()){
		cout<<v[i]<<endl;
	}
	return 0;
}
