#include<iostream>
#include<iomanip>
using namespace std;
int calculateSum(int a[], int size){
	int sum=0;
	for(int i=0; i<size; i++){
		sum+=a[i];
	}
	return sum;
}

int main(){
int size, sum;
    cout<<"Enter the Size of an Array: ";
    cin>>size;
    int array[size];
    cout<<"Enter the Values for Array "<<endl;
    for(int i=0; i<size; i++){
	cin>>array[i];
    }
    cout<<fixed<<setprecision(2);
    sum=calculateSum(array, size);
    cout<<"The Sum of the Array = "<<sum;
    return 0;
} 
