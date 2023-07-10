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
  cin.tie(0),cout.tie(0);
	int n, k;
	cin >> n >> k;
	vector<int> v(n + 1, 0);
	int sum = 0;
	int ans = INT_MAX;
	for (int i = 1; i <= n;i++){
		int x;
		cin >> x;
		sum += x;
		v[i] = sum;
	}
	int l = n- k;
	for (int i = 0; i <= l; i++){
		int tmp = v[k] - v[i];
		k++;
		if(tmp <= ans){
			ans = tmp;
			sum = i + 1;
		}
		//cout << tmp << " ";
	}
	cout << sum << "\n";
}

//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
