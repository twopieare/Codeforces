#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
 	if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main(){
	int y,w;
	cin >> y >> w ;

	int maxi = max(y,w);
	int numi = 7 - maxi;
	int deno = 6;
	int divider = gcd(numi, deno);
	cout << (numi/divider) << "/" << (deno/divider) << endl;
}
