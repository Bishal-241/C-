#include <iostream>
#include<string.h>
using namespace std;
 int main(int argc, char const *argv[])
 {
 	int mynum = 10;
 	int *cls = &mynum;
 	cout<<cls<<endl;
 	cout<<argv;
 	cout<<*cls;
 	return 0;
 }