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
#define size int(1e7)
int prfsum[size];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n, q;
	cin >> n >> q;
	vector<int> v(n+1);
	FOR(i, 1, n + 1) cin >> v[i];
	for (int i = 1; i <= n; i++){
		prfsum[i] = v[i - 1] + v[i];
		v[i] = prfsum[i];
	}
	while(q--){
		int l, r;
		cin >> l >> r;
		cout << prfsum[r + 1] - prfsum[l] << "\n";
	}
	//loop(i, n + 1) cout << prfsum[i] << " ";

	// if(abc_bl && AABC_bl && ABc_bl && AbC_bl && ABC_bl){
	// 	cout << min()
	// }
	//cout << min(min(abc, ABc), AbC) << "\n";
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/