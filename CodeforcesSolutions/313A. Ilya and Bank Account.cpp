#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    if(n>=0)
		cout << n;
	else if(n<-99)
		cout << max((n/10), ((n/100)*10)+(n%10));
	else 
		cout << max((n/10),(n%10));
		

}
