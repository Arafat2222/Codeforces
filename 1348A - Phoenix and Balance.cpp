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
    vector<ll> v;
    ll x = 2;
    for (int i = 1; i <= 31;i++){
        v.push_back(x);
        x = (1 << i);
    }

    int t;
    cin >> t;
    while(t--){
        ll r, a = 0, b = 0;
        cin >> r;
        a = v[r];
        for (int i = 1; i < r / 2;i++){
            a += v[i];
        }
        for (int i = r / 2; i < r;i++){
            b += v[i];
        }
        cout << a - b << "\n";
    }

}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/ 
