#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

float MyPow(int a,int b){
      if(b<0){
      	return (1.0/a)*(MyPow(a,b+1));
	  }
      else if(b==0){
      	return 1;
	  }
      else if(b==1){
      	return a;
	  }
      else{
      	return a*MyPow(a,b-1);
	  }
    }

int main(){
	int x,n;
	float nn;
	cin >> x;
	if(x <= 2000000){
		cin >> n;
		if(n <= x && x >= 2){
			nn = 1/n;
			cout << MyPow(x,nn) << endl;
		}
		
	}
}
