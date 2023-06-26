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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int x1, y1, x2, y2, t;
    char c1, c2;
    cin >> x1 >> c1 >> y1;
    cin >> x2 >> c2 >> y2;
    int m, h;
    if( y2 > y1){
        y1 += 60;
        x2++;
    }
    m = y1 - y2;
    if( x2 > x1){
        x1 += 24;
    } 
    h = x1 - x2;

    if(h >= 0 && h <= 9){
        cout << "0" << h << ":";
    }
    else{
        cout << h << ":";
    }
    if(m>=0 && m <= 9){
        cout << "0" << m << "\n";
    }
    else{
        cout << m << "\n";
    }
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
