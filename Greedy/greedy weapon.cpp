#include <iostream>
#include <math.h>

using namespace std;

int arr2d[16][4];
int j = 0;

void print(int arr[],int n){
	for(int i = 0;i < n;i++){
		//cout << arr[i] << " ";
		arr2d[j][i] = arr[i];
	}
	//cout << endl;
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
	int n = 4;
	int arr[n];
	int a[4] = {2,5,8,6};
	int suma = 0;
	int sumb = 0;
	int minab = 999;
	generate(n,arr,0);
	for(int k = 0;k<16;k++){
		for(int p = 0;p<n;p++){
			cout << arr2d[k][p] << " ";
			if(arr2d[k][p] == 0){
				suma = suma + a[p];
			}else{
				sumb = sumb + a[p];
			}
		}
		cout << "suma " << suma << " sumb " << sumb << endl;
		if(abs(suma - sumb) < minab){
			minab = abs(suma - sumb);
		}
		suma = 0;
		sumb = 0;
	}
	cout << "MinAB = " << minab << endl;
}
