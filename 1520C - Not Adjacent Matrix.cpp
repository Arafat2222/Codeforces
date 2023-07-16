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
#define full(v) v.begin(),v.end()
#define loop(i, n) for (int i = 0; i < n;i++)
#define input_vec(v, n) loop(i, n) cin >> v[i]
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if( n == 1){
            cout << 1 << "\n";
        }
        else if( n == 2){
            cout << -1 << "\n";
        }
        else{
            int m = n * n;
            int c = 0;
            if(m&1){
                for (int i = 2; i <= m - 1;i+=2){
                    if(c == n){
                        cout << "\n";
                        c = 0;
                    }
                    if(i == m-1){
                        c = 0;
                    }
                    cout << i << " ";
                    c++;
                }
                for (int i = 1; i <= m; i+=2){
                    if(c == n){
                        c = 0;
                        cout << "\n";
                    }
                    cout << i << " ";
                    c++;
                }
                cout << "\n";
            }
            else{
                for (int i = 2; i <= m; i+=2){
                    if(c == n){
                        c = 0;
                        cout << "\n";
                    }
                    if(i == m){
                        c = 0;
                    }
                    cout << i << " ";
                    c++;
                }
                for (int i = 1; i <= m - 1; i+=2){
                    if(c == n){
                        cout << "\n";
                    }
                    cout << i << " ";
                    c++;
                }
                cout << "\n";
            }
        }
    }
}
//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/ 
