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
	int n;
	cin  >> n;
	vector<int>a(n),b(n-1),c(n-2);
	cin_v(a,n);
	cin_v(b,n-1);
	cin_v(c,n-2);
	sort(full(a));
	sort(full(b));
	sort(full(c));
	int chk1= 1,chk2 = 1;
	for(int i = 0; i<n-1;i++){
        if(a[i] != b[i]) {
            cout << a[i] <<"\n";
            a.erase(a.begin()+i);
            chk1 = 0;
            break;
        }
	}
	if(chk1){
        cout << a[n-1] <<"\n";
        a.pop_back();
	}
	for(int i = 0; i<n-2;i++){
        if(a[i]!=c[i]){
            cout << a[i] <<"\n";
            chk2 = 0;
            break;
        }
	}
	if(chk2){
        cout << a[a.size()-1] <<"\n";
	}
}

//			 @@MD.Arafat Kabir@@
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
