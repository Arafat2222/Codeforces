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
#define Size int(1e7)
vector<ll> Prime;
int isprime(ll N){
    if(N<2 || (!(N&1) && N!=2))
        return -1;
    for(int i=3; i*i<=N; i+=2){
        if(!(N%i))
            return -1;
    }
    return 1;
}
map<ll, ll> mp;
ll arr[1001];
void fibo(){
	int f = 1, s = 2;
	arr[1] = f, arr[2] = s;
	int c = 2;
	while(arr[c]<=1000){
		c++;
		arr[c] = f + s;
		f = s;
		s = arr[c];
		
	}
	for (int i = 1; i <= c; i++){
		//cout << arr[i] << " ";
		mp[arr[i]]++;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	fibo();
	int n;
	cin >> n;
	string s = "";
	for (int i = 1; i <= n; i++){
		if(mp[i] == 1){
			s += 'O';
		}
		else{
			s += 'o';
		}
	}
	cout << s << "\n";
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
