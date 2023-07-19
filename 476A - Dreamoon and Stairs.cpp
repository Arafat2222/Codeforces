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
    int t = 1;
    //cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        if(n < m){
            cout << -1 << "\n";
        }
        else{
            int two = 0, one = 0, chk = 1;
            two = n / 2;
            one = n % 2;
            int step = one + two;
            if(step % m == 0){
                cout << step << "\n";
                return 0;
            }
            else{
                while(two>0){
                    two--;
                    step++;
                    if(step%m== 0){
                        cout << step << "\n";
                        chk = 0;
                        break;
                    }
                }
            }
            if(chk){
                cout << -1 << "\n";
            }
        }
    }
}  

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/ 
