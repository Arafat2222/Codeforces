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
int count_digit(int n){
	int c = 0;
	while(n){
		n = n / 10;
		c++;
	}
	return c;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	map<char, int> mp;
	int k = 1;
	for (char ch = 'a'; ch <= 'z';ch++){
		mp.insert({ch, k});
		k++;
	}
	int cnt = 0;
	string s;
	cin >> s;
	cnt = min(abs(mp[s[0]] - mp['a']), abs(mp[s[0]] - 26 - mp['a']));
	
	for (int i = 0; i < s.size() - 1;i++){
		int cnt0 = min(abs(mp[s[i]] - mp[s[i+1]]), abs((26 - mp[s[i]]) + (mp[s[i]] - 1)));
		int cnt1 = abs((26 - mp[s[i+1]]) + (mp[s[i]]));
		int cnt2 = abs((26 - mp[s[i]]) + (mp[s[i+1]]));
		cnt += min(cnt1,min(cnt0,cnt2));
		

	}
	cout << cnt << "\n";
	
}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/ 
