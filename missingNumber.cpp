#include <bits/stdc++.h>

using namespace std;

// Soma de Gauss
long long somaN(long long n){
	return ((1+n)*n)/2;
}

int main(){
	long long n,soma=0,x; cin >> n;
	for (int i = 0; i < n-1; i++)
	{
		cin >> x;
		soma += x;
	}
	cout << somaN(n) - soma << '\n';
	return 0;
}
