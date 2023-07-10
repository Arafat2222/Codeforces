///\/\/\/\/\/***************الله أكبر***************/\/\/\/\/\/\/
//*********** حَسبنا الله و نعم الوکیل نعم المولی و نعم النصیر *************
 
//1. بِسْمِ اللَّهِ الرَّحْمَٰنِ الرَّحِيمِ
//2. الْحَمْدُ لِلَّهِ رَبِّ الْعَالَمِينَ
//3. الرَّحْمَٰنِ الرَّحِيمِ
//4. مَالِكِ يَوْمِ الدِّينِ
//5. إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ
//6. اهْدِنَا الصِّرَاطَ الْمُسْتَقِيمَ
//7. صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلَا الضَّالِّينَ

#include <bits/stdc++.h>
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b;i++)
#define cin_v(v,n) loop(i,n) cin >> v[i]
#define cout_v(v,n) loop(i,n) cout << v[i] << " "
#define full(v) v.begin(),v.end()
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
	
	int m, n;
	cin >> m >> n;
	vector<string> v;
	for (int i = 0; i < m; i++){
		string s = "";
		for (int j = 0; j < n;j++){
			s += '#';
		}
		v.push_back(s);
	}
	int oc = 0;
	for (int i = 1; i < m; i+=2){
		if(oc == 0){
			for (int j = 0; j < v[i].size()-1 ;j++){
				v[i][j] = '.';
			}
			oc = 1;
			continue;
		}
		if(oc == 1){
			for (int j = 1; j < v[i].size() ;j++){
				v[i][j] = '.';
			}
			oc = 0;
			
		}
	}
	for (int i = 0; i < m;i++){
		cout << v[i] << "\n";
	}
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
