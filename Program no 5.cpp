#include<iostream>
using namespace std;
int countVowels(char word[]){
	int count=0;
	for(int i=0; word[i]!='\0'; i++){
		if(word[i]=='a' || word[i]=='A'||
	       word[i]=='e' || word[i]=='E'||
	       word[i]=='i' || word[i]=='I'||
	   	   word[i]=='o' || word[i]=='O'||
		     word[i]=='u' || word[i]=='U'){
		   	count++;
		}
	}
	return count;
}

int main(){
    char word[40];
    cout<<"Enter Any Word: ";
	  cin>>word;
	  cout<<"Total Vowels: "<<countVowels(word);
	  return 0;	
}
