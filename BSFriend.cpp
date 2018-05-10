#include<iostream>
using namespace std;

class BS{
	private:
		int key,a[10],i;
	public:
		void getData(){
		printf("Enter the elements of array:\n");
		for(i=0;i<10;i++)
		{
			cin>>a[i];
			}	
		}
		void getKey(){
			cout<<"Enter the key element:"<<endl;
			cin>>key;
		}
		friend void Search(BS);
};

void Search(BS ob) {
    int f = 0, r = 10, mid;

    while (f <= r) {
        mid = (f + r) / 2;

        if (ob.a[mid] == ob.key) {
            cout << "\nSearch Element  : " << ob.key << " : Found :  Position : " << mid + 1 << ".\n";
            break;
        } else if (ob.a[mid] < ob.key)
            f = mid + 1;
        else
            r = mid - 1;
    }

    if (f > r)
        cout << "\nSearch Element : " << ob.key << "  : Not Found \n";
}




int main(){
	BS ob;
	int key;
	ob.getData();
	ob.getKey();
	
	Search(ob);
}
