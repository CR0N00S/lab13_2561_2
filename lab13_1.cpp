#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int x=0,i=1;
	for(int i=1;i<N;i++){
		int x=i;
		for(int f=0;f<N;f++){
			if(f==x) cout<<"[";
			cout<<d[f];
			if(f==x) cout<<"]";
			cout<<" ";
		}
		cout<<"=> ";
		for(int z=i-1;z>=0;z--){
			if(d[x]>d[z]){
				swap(d,x,z);
				x=z;
			}
		}
			for(int f=0;f<N;f++){
			if(f==x) cout<<"[";
			cout<<d[f];
			if(f==x) cout<<"]";
			cout<<" ";
			}
		cout<<"\n";
	}
}
int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}