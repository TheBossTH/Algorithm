//Counting sort which takes negative numbers as well 
#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
vector<int> arr;
void countSort(vector <int>& arr) {
	int max = *max_element(arr.begin(), arr.end());
	int min = *min_element(arr.begin(), arr.end());
	int range = max - min + 1;
	vector<int> count(range), output(arr.size());
	for(int i = 0; i < arr.size(); i++){
		count[arr[i]-min]++; 
	}
	for(int i = 1; i < count.size(); i++){
		count[i] += count[i-1];
	}
	for(int i = arr.size()-1; i >= 0; i--){
		output[ count[arr[i]-min] -1 ] = arr[i]; 
		count[arr[i]-min]--; 
	} 
	for(int i=0; i < arr.size(); i++){
		arr[i] = output[i]; 
	}
}

void printArray(vector <int> & arr) 
{ 
	for (int i=0; i < arr.size(); i++) 
		cout << arr[i] << " "; 
	cout << endl; 
} 

int main() 
{ 
	int size,a;
	cin>>size;
	for(int i=  0 ; i < size; i++){
		cin>>a;
		arr.push_back(a);
	}
	countSort (arr);
	printArray (arr); 
	return 0; 
} 

