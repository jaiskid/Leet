#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mp make_pair
#define pb push_back
#define fi first
#define si second
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define F(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define F1(a,n) for(int i=1;i<=n;i++){cin>>a[i];}
#define P(a,n) for(int i=0;i<n;i++){cout<<a[i]<<' ';}cout<<endl;
#define P1(a,n) for(int i=1;i<=n;i++){cout<<a[i]<<' ';}cout<<endl;
#define NF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>a[i][j];}}
#define NF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cin>>a[i][j];}}
#define PNF(a,n,m) for(int i=0;i<n;i++){for(int j=0;j<m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define PNF1(a,n,m) for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout<<a[i][j]<<' ';}cout<<endl;}cout<<endl;
#define AS 200001
#define mod 1000000007
double  find_median(int *a, int *b, int start_a, int end_a, int start_b, int end_b) {
	if ((end_a - start_a == 1) and (end_b - start_b == 1)) {
		return (1.0 * (max(a[start_a], b[start_b]) + min(a[end_a], b[end_b]))) / 2;
	}
	int m1_index = (start_a + end_a) / 2;
	int m2_index = (start_b + end_b) / 2;
	int m2 = b[m2_index];
	int m1 = a[m1_index];
	if (m1 == m2)
		return m2;
	if (m1 < m2) {
		start_a = m1_index;
		end_b = m2_index;

	}
	else {
		start_b = m2_index;
		end_a = m1_index;
	}
	return find_median(a, b, start_a, end_a, start_b, end_b);
}
int main() {
	fastIO
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	F(a, n);
	F(b, m);
	cout << find_median(a, b, 0, n, 0, m);
}