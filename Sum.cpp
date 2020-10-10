#include<iostream>
#include<algorithm>
using namespace std;

int arr[100][100];

int main(){
	int answer;
	int count = 0;
	while(count <= 10){
		int sum1=0,sum2=0,sum3=0,sum4=0;
		cin >> count;
		for(int i=0; i<100; i++){
			for(int j=0; j<100; j++){
				cin >> arr[i][j];
				sum1 += arr[i][j];
				sum2 += arr[j][i];
			}
		}
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				sum2 += arr[j][i];
				sum3 += arr[i][i];
				sum4 += arr[i][99 - i];
			}
		}
		answer = max({sum1,sum2,sum3,sum4});
		cout<<'#'<<count<<' '<<answer<<endl;
	}
}
