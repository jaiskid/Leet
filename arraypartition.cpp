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
// int arrayPairSum(vector<int>&nums) {
// 	int sum = 0;
// 	for (int i = 0; i < nums.size(); i += 2) {
// 		sum += nums[i];
// 	}
// 	return sum;
// }
int arrayPairSum(vector<int>&nums) {
	vector<int>buckets(200001, 0);
	for (int i : nums) {
		++buckets[i + 10000];
	}
	int sum = 0, count = 0, i = 0;
	while (count < nums.size()) {
		if (buckets[i] == 0) {
			i++;

		}
		else {
			if (count % 2 == 0) {
				sum += (i - 10000);

			}
			--buckets[i];
			++count;
		}
	}
	return sum;
}
int main() {
	fastIO
	int n;
	cin >> n;
	vector<int>nums;
	nums.resize(n);
	F(nums, n);
	cout << arrayPairSum(nums);
}
