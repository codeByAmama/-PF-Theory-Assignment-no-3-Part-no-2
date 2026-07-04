#include<iostream>
using namespace std;
int main(){
	char array[5];
	cout<<"Enter 5 Unsorted Letters for character Array "<<endl;
	for(int i=0; i<5; i++){
		cin>>array[i];
	}

	for(int i=0; i<4; i++){
		for(int j=0; j<4-i; j++){
			if(array[j]>array[j+1]){
				char variable=array[j];
				array[j]=array[j+1];
				array[j+1]=variable;
			}
		}
	}
	
	cout<<"Sorted Letters are: ";
		for(int i=0; i<5; i++){
		cout<<array[i]<<" ";
	}
	return 0;
}
