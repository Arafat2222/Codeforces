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
    vector<int> vc(n, -1);
    cin_v(v, n);
    map<int, int> mp;
    loop(i,n){
        mp[v[i]]++;
    }
    int t = min(mp[1],min(mp[2],mp[3]));
    cout << t << "\n";
    
    while(t--){
        loop(i,n){
            if(v[i] == 1 && vc[i] == -1){
                cout << i + 1 << " ";
                vc[i] = 1;
                break;
            }
        }
        loop(i,n){
            if(v[i] == 2 && vc[i] == -1){
                cout << i + 1 << " ";
                vc[i] = 1;
                break;
            }
        }
        loop(i,n){
            if(v[i] == 3 && vc[i] == -1){
                cout << i + 1 << " ";
                vc[i] = 1;
                break;
            }
        }
        cout << "\n";
        
    }
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
