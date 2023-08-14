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
#define full(x) x.begin(), x.end()
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        if(n == 1){
            cout << 1 << "\n";
        }
        else if( n == 2){
            cout << 2 << "\n";
        }
        else{
            int p = 1, q = 2,sum = 0, chk = 0;
            while( sum < n){
                if(chk == 0){
                    a.push_back('1');
                    sum += 1;
                    chk = 1;
                }
                else if(chk == 1){
                    a.push_back('2');
                    sum += 2;
                    chk = 0;
                }
            }
           int sum1 = 0;
            chk = 0;
            while( sum1 < n){
                if(chk == 0){
                    b.push_back('2');
                    sum1 += 2;
                    chk = 1;
                }
                else if(chk == 1){
                    b.push_back('1');
                    sum1 += 1;
                    chk = 0;
                }
            }
            if(sum1 == sum && sum1 == n){
                cout << b << "\n";
            }
            else if(sum1 == n){
                cout << b << "\n";
            }
            else{
                cout << a << "\n";
            }
        }
    }
}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
