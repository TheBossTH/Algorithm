#include <iostream>

using namespace std;

int main(){
	int n,a;
	int count = 1;
	cin >> n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		cin >> a;
		arr[i] = a;
		if(i>0 && arr[i] == arr[i-1]){
			count++;
		}else if(i>0){
			cout << arr[i-1] << " " << count << endl;
			count = 1;
		}
		if(i == n-1){
			cout << arr[i] << " " << count << endl;
		}
	}
	
}
