///\/\/\/\/\/***************الله أكبر***************/\/\/\/\/\/\/
//*********** حَسبنا الله و نعم الوکیل نعم المولی و نعم النصیر *************

//1. بِسْمِ اللَّهِ الرَّحْمَٰنِ الرَّحِيمِ
//2. الْحَمْدُ لِلَّهِ رَبِّ الْعَالَمِينَ
//3. الرَّحْمَٰنِ الرَّحِيمِ
//4. مَالِكِ يَوْمِ الدِّينِ
//5. إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ
//6. اهْدِنَا الصِّرَاطَ الْمُسْتَقِيمَ
//7. صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلَا الضَّالِّينَ

								

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define isVolwel(ch ) (0x208222 >> (ch & 0x1f)) & 1
#define full(s) s.begin(), s.end()
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int t;
	cin >> t;
	vector<pair<string, int>> p;
	while(t--){
		int n;
		string str;
		cin >> n >> str;
		sort(full(str));
		p.push_back({str,n});
	}
	sort(full(p));

	int A = INT_MAX, B = INT_MAX, C = INT_MAX, AB = INT_MAX, AC = INT_MAX,  BC = INT_MAX, ABC = INT_MAX;
	for(auto u:p){
		if(u.first == "A"){
			A = min(u.second, A);
		}
		if(u.first == "B"){
			B = min(u.second, B);

		}
		if(u.first == "C"){
			C = min(u.second, C);
			
		}
		if(u.first == "BC"){
			BC = min(u.second, BC);
			
		}
		if(u.first == "AB"){
			AB = min(u.second, AB);
			
		}
	
		if(u.first == "AC"){
			AC = min(u.second, AC);
			
		}
		if(u.first == "ABC"){
			ABC = min(u.second, ABC);
			
		}
		//cout << u.first << " " << u.second << '\n';
	}
	vector<int> ans;
	int abc;
	bool abc_bl = false;
	int ABc;
	bool ABc_bl = false;
	int AbC;
	bool AbC_bl = false;
	int AABC;
	bool ABC_bl = false;
	bool AABC_bl = false;
	int x;
	if(AB!= INT_MAX && BC!= INT_MAX ){
		ans.push_back(AB + BC);
	}
	if(A!= INT_MAX && BC!= INT_MAX){
		ans.push_back(A + BC);
	}
	if(A!=INT_MAX && B!= INT_MAX && C!= INT_MAX){
		abc = A + B + C;
		abc_bl = true;
		ans.push_back(abc);
	}
	if(AC!=INT_MAX && AB != INT_MAX){
		AABC = AC + AB;
		AABC_bl = true;
		ans.push_back(AABC);
	}
	if(AB != INT_MAX && C!= INT_MAX){
		ABc = AB + C;
		ABc_bl = true;
		ans.push_back(ABc);
	}
	if(AC != INT_MAX && B!= INT_MAX){
		AbC = AC + B;
		AbC_bl = true;
		ans.push_back(AbC);
	}
	if(AC!= INT_MAX && BC!= INT_MAX){
		ans.push_back(AC + BC);
	}
	if(ABC != INT_MAX){
		ABC_bl = true;
		ans.push_back(ABC);
	}
	sort(full(ans));
	if(ans.size()>=1){
		cout << ans[0] << "\n";
		
	}
	else{
		cout << -1 << '\n';
	}
	// if(abc_bl && AABC_bl && ABc_bl && AbC_bl && ABC_bl){
	// 	cout << min()
	// }
	//cout << min(min(abc, ABc), AbC) << "\n";
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/