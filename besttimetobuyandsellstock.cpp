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
// int Besttime(vector<int>&prices) {
// 	int maxprofit = 0;
// 	for (int i = 0; i < prices.size(); i++) {
// 		for (int j = i + 1; j < prices.size(); j++) {
// 			int profit = prices[j] - prices[i];
// 			if (profit > maxprofit)
// 				maxprofit = profit;
// 		}
// 	}
// 	return maxprofit;
// }
int Besttime(vector<int>&nums) {
	int minprice = INT_MAX;
	int maxprofit = 0;
	for (int i = 0; i < nums.size(); i++) {
		if (nums[i] < minprice) {
			minprice = nums[i];
		}
		else if (nums[i] - minprice > maxprofit)
			maxprofit = nums[i] - minprice;
	}
	return maxprofit;
}
int main() {
	fastIO
	int n;
	cin >> n;
	vector<int>prices;
	prices.resize(n);
	F(prices, n);
	cout << Besttime(prices);

}