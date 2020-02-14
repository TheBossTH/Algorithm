#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int m,n,k,a,b;
	int c = 0;
	int arr[10000];
	int arr2[10000];
	cin >> m;
	for(int i = 0; i<m; i++) {
		cin >> n;
		for(int p = 0; p<n; p++) {
			cin >> a;
			arr[p] = a;
		}
		for(int l = 0; l<n; l++) {
			cin >> b;
			arr2[l] = b;
		}

		sort(arr,arr+n);
		sort(arr2,arr2+n);

		cin >> k;

		for(int o = 0; o<n; o++) {
			for(int q = 0; q<n; q++) {
				if(arr[o] + arr2[q] >= k) {
					cout << "Yes" << endl;
					c = 1;
					break;
				}
			}
			if(c == 1) {
				c = 0;
				break;
			} else if(c == 0 && o == n-1) {
				cout << "No" << endl;
			}
		}
	}
}
