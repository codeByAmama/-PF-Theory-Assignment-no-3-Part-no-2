#include <iostream>
using namespace std;
bool isLeapYear(int year) {
    if ((year%400==0)||(year%4 && year%100!=0)) {
        return true;
    }
    return false;
}

int main(){
	int year, result;
	cout<<"Enter Year: ";
	cin>>year;
    result=isLeapYear(year);
    cout<<"Result: "<<result;
    return 0;
}

