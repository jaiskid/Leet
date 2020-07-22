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
int trap(vector<int>&height) {
	int left[height.size()] = {};
	int right[height.size()] = {};
	left[0] = height[0];
	for (int i = 1; i < height.size(); i++) {
		left[i] = max(height[i], left[i - 1]);
	}
	right[height.size() - 1] = height[height.size() - 1];
	for (int i = height.size() - 2; i >= 0; i--) {
		right[i] = max(height[i], right[i + 1]);
	}
	int ans = 0;
	for (int i = 1; i < height.size() - 1; i++) {
		ans += min(left[i], right[i]) - height[i];
	}
	return ans;
}
int main() {
	fastIO
	int n;
	cin >> n;
	vector<int> height;
	height.resize(n);
	F(height, n);
	cout << trap(height);
}