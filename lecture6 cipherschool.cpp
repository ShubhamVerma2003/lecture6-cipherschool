#include<iostream>
using namespace std;

int main(){
	

int marks;

cout<<"please enter the marks to calculate the grade : ";
cin>>marks;

if(marks>90){

cout<<"A";
}

else if(marks<90 && marks>80){

cout<<"B";
}

else if(marks<80 && marks>70){

cout<<"C";
}

else{

cout<<"Pass";
}


//int a,b,c,d;
//
//cout<<"Give three integers as input : a,b,c,d"<<endl;
//cin>>a>>b>>c>>d;
//
//if(a>b && C>d){
//
//cout<<"haha";
//}
//
//else if(a>b && C<d){
//
//cout<<"hehe";
//}
//
//else{
//	cout<<huhu;
//}

//cout<<"enter a integer a :";
//cin>>a;
//
//switch (a){
//
//case 1:
//cout<<"The value of a is 1 ";
//break;
//
//case 2:
//cout<<"The valuse of a is 2 ";
//
//default:
//cout<<"default will be always printed";
//break;
//}

return 0;
}
