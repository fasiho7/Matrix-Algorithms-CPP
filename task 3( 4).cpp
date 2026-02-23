#include <iostream>
using namespace std;
int main()
{
    int r = 3, c = 3;
    int **ptr = new int*[r];
    for(int i = 0; i < r; i++){
        ptr[i] = new int[c];
    }
    cout << "Enter the elements";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> ptr[i][j];
        }
    }

    int sum = 0;

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j || i + j == r - 1){
                sum += ptr[i][j];
            }
        }
    }

    cout << " sum of the diagonals of the array is: "<< sum<< endl;

    for(int i = 0; i < r; i++){
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}
