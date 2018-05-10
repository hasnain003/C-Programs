#include<iostream>
using namespace std;

class complex{
	private:
		int r,i;
	public:
		complex(int real=0,int img=0){
			r=real;
			i=img;
		}
		
		complex operator + (complex ob){
			complex res;
			res.r=r+ob.r;
			res.i=i+ob.i;
			return res;
		}
		void print()
		{
			cout<<r<<" + i"<<i<<endl;
		}
};
int main(){
	int i,j;
	cout<<"Enter 1st complex number"<<endl;
	cin>>i>>j;
	complex c1(i,j);
	cout<<"Enter 2nd complex number"<<endl;
	cin>>i>>j;
	complex c2(i,j);
	complex c3=c1.operator +(c2);
	c3.print();
}
