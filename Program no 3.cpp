#include<iostream>
#include<iomanip>
using namespace std;
double celsiusToFahrenheit(double celsius){
	int fahrenheit;
	fahrenheit=(celsius*9.0/5.0)+32;
	return fahrenheit;
}

int main(){
	double temp, result;
	cout<<"Enter Temperature in celsius: ";
	cin>>temp;
	cout<<fixed<<setprecision(1);
	result=celsiusToFahrenheit(temp);
	cout<<"The Temperature in Fahrenheit is: "<<result;
	return 0;
}
