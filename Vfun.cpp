#include<iostream>
using namespace std;

class box{
	public:
		box(){
			
		}
		virtual float perimeter(int l ,int b){
			return (2*(l+b));
		}
		virtual float circumference(int r){
			return 2*3.14*r;
		}
};
class circle:public box{
	public:
		circle(){
		}
		float perimeter(int l,int b){
			return (2*(l+b));
		}
		float circumference(int r){
			return 2*3.14*r;
		}
};

int main(){
	box *c;
	circle ob;
	c=&ob;
	int ch;
	float r,l,b;
	do{
	printf("1.To calculate perimeter of circle\n2.To calculate perimeter of rectangle\n3.exit\n");
	cin>>ch;
	switch(ch){
		case 1:
			printf("Enter radius of the circle\n");
			cin>>r;
			cout<<"Result: "<<c->circumference(r)<<endl;
			break;
		case 2:
			printf("Enter length and breadth of rectangle");
			cin>>l>>b;
			cout<<"Result: "<<c->perimeter(l,b)<<endl;
			break;
		case 3:
			exit(0);
		default:
			cout<<"Wrong choice lad!!"<<endl;
	}
   }while(1);
	
	
}
