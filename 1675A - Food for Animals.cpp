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
#define STRTOLOWER(x) std::transform (x.begin(), x.end(), x.begin(), ::tolower)
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define isVolwel(ch ) (0x208222 >> (ch & 0x1f)) & 1
#define full(s) s.begin(), s.end()
#define Size int(1e7)
#define cin_v(v, n) loop(i,n) cin >> v[i]
#define cout_v(v,n) loop(i,n) cout << v[i] << " "
#define endl "\n"
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0),cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b, c, d, x, y;
		cin >> a >> b >> c >> x >> y;

		if((a >= x && b >= y) || (a + c >= x && b >= y) || (a >= x && b + c >= y)){
			cout << "YES\n";
		}
		else{
			int i = abs(a - x);
			c -= i;
			if(c + b >= y && c >= 0 ){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}	
		}
	}
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
