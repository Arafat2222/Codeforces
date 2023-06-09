 #include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
    ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    
    int t;
	cin >> t;
 
	while (t--)
	{
		int n;
		cin >> n;
		int a = 6, b = 10, c = 14, d = n - (a + b + c);
		if( d <= 0){
			cout << "NO\n";
		}
		else{
			if(d == c ){
				c = 15;
				d = 13;
			}
			if( a == d){
				c = 15;
				d--;
			}
			if(b == d){
				d--;
				c++;
			}
			cout << "YES\n"
				 << a << " " << b << " " << c << " " << d << "\n";
			
		}
	}    
    
}