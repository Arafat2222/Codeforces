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
int fact(int tt,int one, int two){
	vector<int> vec(tt+1);
	int sum = 1;
	FOR(i,1,tt+1) vec[i] = i;
	int x = max(one, two);
	int y = min(one, two);
	ll xx = 1;
	ll yy = 1;
	for (int i = x + 1; i <= tt; i++){
	
		xx = xx * i;
	}

	for (int i = 2; i <= y; i++){
		yy = yy * i;
	}

	return xx / yy;
}	
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int n,m;
	cin >> n;
	m = n;
	int two = 1, one = n - 2;
	int ans = 1;
	int sum = 0;
	while(m--){
		int chk = one + 2 * two;
		int tt = one + two;
		if( one < 0 || two < 0){
			break;	
		}
		else{			
			sum += fact(tt, one, two);
		}
	
		one -= 2;
		two++;		
	}
	cout << sum + 1<< "\n";
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
