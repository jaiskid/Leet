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
void rotate(vector<vector<int>>&matrix) {
	int n = matrix[0].size();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			//anti diagonial
			swap(matrix[i][j], matrix[n - 1 - j][n - 1 - i]);
		}
		for (int i = 0; i < n / 2; i++) {
			for (int j = 0; j < n; j++) {
				swap(matrix[i][j], matrix[n - 1 - i][j]);
			}
		}
	}
}
int main() {
	fastIO
	int n;
	cin >> n;
	vector<vector<int>>matrix(n, vector<int>(n, 0));
	NF(matrix, n, n);

	rotate(matrix);
	cout << endl;
	PNF(matrix, n, n);
}