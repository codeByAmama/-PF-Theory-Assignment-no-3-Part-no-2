#include<iostream>
using namespace std;
int calculate2Low(int a[], int size){
	int lowest=a[0], secondLowest=a[1];
	if(lowest>secondLowest)
		swap(lowest,secondLowest);
		
	for(int i=2; i<size; i++){
	if(a[i]<lowest){
		secondLowest=lowest;
		lowest=a[i];
	}	
	else if(a[i]<secondLowest && a[i]!=lowest){
		secondLowest=a[i];
     	}
    }
	return secondLowest;	
}

int calculate2High(int a[], int size){
	int highest=a[0], secondHighest=a[1];
	if(highest<secondHighest)
		swap(highest, secondHighest);
		
	for(int i=2; i<size; i++){
		if(a[i]>highest){
			secondHighest=highest;
			highest=a[i];
		}
		else if(a[i]>secondHighest && a[i]!=highest){
			secondHighest=a[i];
		}
	}
		return secondHighest;
}

int main(){
	int size, calculateLowValues , calculateHighValues;
	cout<<"Enter the size of Array: ";
	cin>>size;
	int array[size];
	cout<<"Enter the Values for Array: "<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
    calculateLowValues=calculate2Low(array, size);
    calculateHighValues=calculate2High(array, size);
    cout<<"The 2 Lowest Values is: "<<calculateLowValues<<endl;
    cout<<"The 2 Highest Values is: "<<calculateHighValues<<endl;
   return 0;
}
