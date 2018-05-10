#include<iostream>
using namespace std;

class Box{
	public:
		float area=0;
		Box(int r)
		{
			area=3.14*r*r;
		}
		Box(int l,int b){
			area=l*b;
		}
		Box(int a,int b,int c){
			float s;
			s=(a+b+c)/2;
			area=s*(s-a)*(s-b)*(s-c);
		}
		void display(){
			cout<<"\n Area :"<<area;
		}
		
};
int main(){
	int h,b,r,ch;
	printf("1.Enter 1 to calculate area of triangle\n2.Enter 2 to calculate area of rectangle\n3.Enter 3 to calculate area of circle\n");
	cin>>ch;
	switch(ch){
		case 1:
			{		
				printf("Enter sides of triangle:\n");
			cin>>h>>b>>r;
			Box b1(h,b,r);
			b1.display();
		}
			break;
		case 2:{
			
			printf("Enter length and breadth of rectangle:\n");
			cin>>h>>b;
			Box b2(h,b);
			b2.display();
		}
			break;
		case 3:
			{
			printf("enter radius of the triangle:\n");
			cin>>r;
			Box b3(r);
			b3.display();
			}
			
			break;
		default:
			printf("Wrong Choice!!");
			
	}
}
