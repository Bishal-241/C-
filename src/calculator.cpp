#include<iostream>
using namespace std;
int arithmetic(float a,string c,float b){
    if(c=="+"){
        return a+b;    
    }
    
    if(c=="-") {
        return a-b;
    }
    if(c=="*") {
        return a*b;
    }
    if(c=="/") {
        return a/b;
    }
    
}
int main() {
    float op1,op2;
    string op;
    a:
    cout<<"Enter operands:";
    cin>>op1;
    cin>>op2;
    cout<<"Enter operator:";
    cin>>op;
    cout<<endl;
    cout<<"Your result is :"<<arithmetic(op1,op,op2);
    int click;
    cout<<"Click 1 to restart and others  to terminate";
    cin>>click;
    if(click==1){
        goto a ;
    }
    return 0;
}
