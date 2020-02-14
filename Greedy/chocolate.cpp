#include <iostream>
#include <math.h>

using namespace std;

int arr2d[10000][1000];
int j = 0;

void print(int arr[],int n){
	for(int i = 0;i < n;i++){
		arr2d[j][i] = arr[i];
	}
	j = j+1;
}

void generate(int n,int arr[],int i){
	if(i==n){
		print(arr,n);
		return;
	}
	arr[i] = 0;
	generate(n,arr,i+1);
	arr[i] = 1;
	generate(n,arr,i+1);
}

int main(){
	int n,x;
	cin >> n;
	int arr[n];
	int npow = pow(2,n);
	int a[n];
	for(int h = 0;h<n;h++){
		cin >> x;
		a[h] = x;
	}
	int sum = 0;
	int max = 0;
	generate(n,arr,0);
	for(int k = 0;k<npow;k++){
		for(int p = 0;p<n;p++){
			if(arr2d[k][p] == arr2d[k][p+1] && arr2d[k][p] == 1){
				sum = 0;
				break;
			}else if(arr2d[k][p] == 1){
				sum = sum + a[p];
			}
		}
		if(sum > max){
			max = sum;
		}
		sum = 0;
	}
	cout << max << endl;
}
