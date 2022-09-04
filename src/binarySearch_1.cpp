#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[15] = {1,4,6,8,9,11,23,34,45,47,48,52,53,55,60};


	int arrLen = 15,index,upperHead = (arrLen-1),lowerHead = 0 ;
	int mid = (upperHead  + lowerHead)/2,number,i;
	cout<<"----------BINARY SEARCH-----------"<<endl<<endl;
	cout<<"\t Demo Array\n";
	for(i = 0 ;i<15;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\n\nEnter a number to search";
	cin>>number;
	 	
	if(arr[mid] < number){
		for(i = mid ; i<arrLen ;i++){
			if(arr[i] == number){
				cout<<endl<<"The number '"<<number <<"' is found at index :"<<setw(3)<<i<<endl;

			}
		}
	}
	else{
		for(i = mid ; i>=0;i--){
			if(arr[i] == number){
				cout<<endl<<"The number '"<<number <<"' is found at index :"<<setw(3)<<i<<endl;
			}
		}
	}

	return 0;
}