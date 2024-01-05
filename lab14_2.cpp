#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double input[][N]){
    for(int i=0; i<N; i++){
        cout << "Row " << i+1 << ": ";    
        for(int j=0; j<N; j++){
            cin >> input[i][j];
        }
    }  
}

void showMatrix(const bool X[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << X[i][j];
            cout << " ";
        }
    cout <<endl;
    }
}


void findLocalMax(const double input[][N], bool output[][N]){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
        if(input[i][j]>=input[i-1][j]&&input[i][j]>=input[i+1][j]&&input[i][j]>=input[i][j-1]&&input[i][j]>=input[i][j+1]){
            output[i][j]=1;
        }else{
            output[i][j]=0;
        }
        }    
    }
    for(int k=0; k<N; k++){
        output[0][k]=0;
        output[N-1][k]=0;
        output[k][0]=0;
        output[k][N-1]=0;
        }
}
