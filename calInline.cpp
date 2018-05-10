#include<iostream>
using namespace std;


		 inline int addition(int a,int b)
		{
			return(a+b);
		}
		inline int subtraction(int a,int b){
			return(a-b);
		}
		inline int multiplication(int a,int b)
		{
			return(a*b);
		}
		inline float division(int a,int b)
		{
			return(a/b);
		}
         
		


int main(){
	int a,b,ch;

	
	do{
		printf("1.enter 1 to addition\n2.enter 2 to subtraction\n3.enter 3 to multiplication\n4.enter 4 to division\n5.exit\n");
	    cin>>ch;
		switch(ch){
		case 1:
			cout<<"\nEnter two numbers"<<endl;
			cin>>a>>b;
			cout<<"Result: "<<addition(a,b)<<endl;
			break;
		case 2:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			cout<<"Result: "<<subtraction(a,b)<<endl;
			break;
		case 3:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			cout<<"Result: "<<multiplication(a,b)<<endl;
			break;
		case 4:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			cout<<"Result: "<<division(a,b)<<endl;
			break;
		case 5:
			exit(0);
		default:
			printf("Wrong Choice!!\n");
	}
	}while(1);
	
}
