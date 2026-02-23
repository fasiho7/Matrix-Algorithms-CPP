#include <iostream>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int t = r*c;
	int *arr = new int[t];;
	cout<<"Enter the elements";
	for(int i = 0; i < t; i++){
		cin>>arr[i];
}
	int **ptr = new int *[r];
	for(int  i = 0; i < r; i++)
	{
		ptr[i] = new int[c];
	}
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j<c; j++){
			ptr[i][j] = arr[i*c+j];
		}
	}
	cout << "\n2D Matrix:\n";
	for(int i = 0; i < r; i++){
		for(int j =0; j < c; j++){
		cout<<ptr[i][j]<<" ";	
		}
		cout<<endl;
		
	}
	
	delete[] arr;
	for(int i = 0; i < r; i++){
		delete[] ptr[i];
	}
	
	
	
}