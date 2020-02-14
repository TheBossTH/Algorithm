#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

float round(float var) 
{ 
    float value = (int)(var * 100 ); 
    return (float)value / 100; 
} 

int main(){
	vector <int> v;
	int n,a;
	float sum = 0;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			sum += v[j];
		}
	}
	sum = sum/n;
	cout << round(sum) << endl;
	//cout << sum << endl;
	
}
