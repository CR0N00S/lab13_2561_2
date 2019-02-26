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
void inputMatrix(double A[][N]){
	for(int i=0;i<N;i++){
		cout<<"Row "<<i+1<<": ";
		for(int z=0;z<N;z++){
			cin>>A[i][z];
		}
	}
}
void findLocalMax(const double B[][N],bool C[][N]){
	for(int i=0;i<N;i++){
		for(int z=0;z<N;z++){
			C[i][z]=0;
		}
	} 
	for(int i=1;i<N-1;i++){
		for(int z=1;z<N-1;z++){
			if(B[i][z]>=B[i][z+1] && B[i][z]>=B[i][z-1]&&B[i][z]>=B[i+1][z] && B[i][z]>=B[i-1][z]){
				C[i][z]=1;
			}
		}
	}
}
void showMatrix(const bool C[][N]){
	for(int i=0;i<N;i++){
		for(int z=0;z<N;z++){
			cout<<C[i][z]<<" ";
		}
	cout<<"\n";
	}
}
// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
