#include <iostream>
using namespace std;
int  main(){
	int r,c;
	cout<<"Enter teh number of teh roes and teh colms";
	cin>>r>>c;
	int **ptr = new int*[r];
	for(int j = 0;j < r; j++){
		ptr[j] = new int[c];
	}
	cout<<"Enter the rows ";
	for(int i = 0; i<r; i++){
		cout<<"Ente the colms";
		for(int j = 0; j < c; j++){
			cin>>ptr[i][j];
		}
	}
	int count = 0;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			if(ptr[i][j] < 1){
				count++;
			}
		}
	}
	cout<<"the negative number is teh array is "<<count<<endl;
delete[] ptr;
for(int i = 0; i < n; i++){
	delete []ptr[i;]
}



	return 0;
	
	
	
	
}