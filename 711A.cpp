#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t;
	cin >> t;
	int c = 1;
	int b = 0;
	vector<string> str;
	while(t--){
		string s;
		cin >> s;
		if(c == 1){
			if(s[0] == 'O' && s[1] == 'O'){
				s[0] = '+';
				s[1] = '+';
				c = 0;
				b = 1;
			}
			else if(s[3] == 'O' && s[4] == 'O'){
				s[3] = '+';
				s[4] = '+';
				c = 0;
				b = 1;
			}

		}
		str.push_back(s);

	}
	if(b){
		cout << "YES\n";
		for(auto u:str){
		cout << u << "\n";
		}
	}
	else {
		cout << "NO\n";
	}
}
