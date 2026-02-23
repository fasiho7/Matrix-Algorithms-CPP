#include <iostream>
using namespace std;
int findLargest(int **matrix, int row, int colms){
	int max = matrix[0][0];
	for(int i = 0; i < row; i++){
		for(int j = 0; j < colms; j++){
			if(matrix[i][j] > max){
				max = matrix[i][j];
				
			}
		}
	}
	return max;	
}
int main()
{
	int n,m;
	cout<<"Enter the number of teh rows and teh colms";
	cin>>n>>m;
	int **ptr = new int*[n];
	for(int i = 0; i < n; i++){
		ptr[i] = new int[m];
	}
	int j = 0;
	cout<<"ENter the elements";
	for(int i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			cin>>ptr[i][j];
		}
	}
	int result = findLargest(ptr,n,m);
	cout<<"The largest number is: "<<result<<endl;

	for(int  i = 0; i < n; i++){
		delete[] ptr[i];
	}
		delete[] ptr;
	return 0;
}