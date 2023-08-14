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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(full(v));
        int p = 0, q = 0;
        vector<int> b, c;
        for (int i = 0; i < n ; i++){
            if(v[0] == v[i]){
                b.push_back(v[i]);
            }
            else{
                c.push_back(v[i]);
            }
        }
        if(c.empty()){
            cout  << -1 << "\n";
        }
        else{
            cout << b.size() << " " << c.size() << "\n";
            for (int i = 0; i < b.size();i++)
                cout << b[i] << " ";
            cout << "\n";
            for (int i = 0; i < c.size();i++)
                cout << c[i] << " ";
            cout << "\n";
        }
    }
}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
