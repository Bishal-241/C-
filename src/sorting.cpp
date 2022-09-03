#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int len,temp;
	cout<<"-----------Running program------------ ";


	cout<<"\n\nEnter the length of the array";
	cin>>len;
	int arr[len];

	cout<<"Enter array objects";
	for(int i=0;i<len;i++){
		cin>>arr[i];	
	}


	for(int i = 0;i<len;i++){
        for(int j =(i+1);j<len;j++){
        	if(arr[i] > arr[j]){
		        temp = arr[j];
		        arr[j] = arr[i];
		        arr[i] = temp;
   			}
    	}
    
	
	}
	cout<<endl<<"Sorted array obj are:";


	for(int i = 0;i<len;i++){
		cout<<endl<<arr[i];
	}

	cout<<endl<<"Sorted array obj are:";

	for(int i = 0;i<len;i++){
		cout<<endl<<arr[i];
	}


	return 0;
}
