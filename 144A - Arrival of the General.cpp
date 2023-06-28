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
    int n;
    cin >> n;
    vector<int> v(n);
    cin_v(v, n);
    int MX = *max_element(full(v));
    int MIN = *min_element(full(v));
    int l = 0, r = 200;
    if(v[0] == MX && v[n-1] == MIN){
        cout << "0\n";
        return 0;
    }
    loop(i,n){
        if(v[i] == MX){
            r = min(r, i+1);
        }
        if(v[i] == MIN){
            l = max(l, i+1);
        }
    }
  //  cout << r << " " << l << "\n";
    if( r > l){
        cout << r - 2 + n - l << "\n";
    }
    else{
        cout << r - 1 + n - l  << '\n';
    }
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
