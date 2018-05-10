#include<iostream>
using namespace std;

class calculator{
		static float result;
	public:
		static void addition(int a,int b)
		{
			result=a+b;
		}
		static void subtraction(int a,int b){
			result=a-b;
		}
		static void multiplication(int a,int b)
		{
			result=a*b;
		}
		static void division(int a,int b)
		{
			result=a/b;
		}
		void display()
		{
			cout<<"\n Result:"<<result;
		}
		
};


int main(){
	static int a,b,ch;
	calculator c;
	printf("1.enter 1 to addition\n2.enter 2 to subtraction\n3.enter 3 to multiplication\n4.enter 4 to division\n5.exit");
	cin>>ch;
	switch(ch){
		case 1:
			
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			calculator::addition(a,b);
			c.display();
			break;
		case 2:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			calculator::subtraction(a,b);
			c.display();
			break;
		case 3:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			calculator::multiplication(a,b);
			c.display();
			break;
		case 4:
			cout<<"Enter two numbers"<<endl;
			cin>>a>>b;
			calculator::division(a,b);
			c.display();
			break;
	}
}
