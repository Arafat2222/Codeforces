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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int r = 0, g = 0, b = 0, R = 0, G = 0, B = 0;
		for (int i = 0; i < 6; i++){
			if(s[i] == 'r'){
				r = i + 1;
			}
			else if(s[i] == 'b'){
				b = i + 1;
			}
			else if(s[i] == 'g'){
				g = i + 1;
			}
			else if(s[i] == 'R'){
				R = i + 1;
			}
			else if(s[i] == 'G'){
				G = i + 1;
			}
			else if(s[i] == 'B'){
				B = i + 1;
			}
		}
		if(R>r && B>b && G>g){
			cout << "YES\n";
		}
		else{
			cout << "NO\n";
		}
	}

}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/ 
