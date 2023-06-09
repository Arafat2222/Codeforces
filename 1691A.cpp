///\/\/\/\/\/\/***************Allah-Hu-Akbar***************/\/\/\/\/\/\/\/

//			@@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
								

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
int odd_cnt(vector<int>&v){
	int c = 0;
	loop(i,v.size()){
		if(v[i]&1){
			c++;
		}
	}
	return c;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		loop(i, n) cin >> v[i];
		int odc = odd_cnt(v);
		int evc = n - odc;
		cout << min(odc, evc) << "\n";
	}
}
