#include<iostream>
#include<iomanip> 
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long double arr[10];
	int i;
	string numposition[10]= {"1st","2nd","3rd","4th","5th","6th","7th","8th","9th","10th"};
	for(i = 1;i<10;i++){
		printf("Enter %d th number\n", i);
		cin>>arr[i];
		cout<<endl;
	}


	cout<<"The data in formatted manner is :: >> ";
	cout<<endl<<endl;

	for(i = 0;i<10;i++){
		cout<<numposition[i]<<"number is :"<<setw(5)<<arr[i]<<endl;  // here setw sets the width of variable alignments right
	}
	return 0;
}


// 