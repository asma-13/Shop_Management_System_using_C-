#include<iostream> 
using namespace std;
void displayPrices()
{
		cout<<"\n\n============PRICE MENU============\n\n";
    	cout<<"1. Book    (per item price= Rs.1200)"<<endl;
		cout<<"2. T-shirt (per item price = Rs.1500)"<<endl;
		cout<<"3. Pant   (per item price = Rs.2200)"<<endl;
		cout<<"4. Shoes   (per pair price = Rs.2500)"<<endl;
		cout<<"5. Bag     (per item price = Rs.3000)"<<endl;
		cout<<"0. Exit the program"<<endl;
		cout<<endl;
}
inline int calculateTotal(int Q1,int Q2,int Q3,int Q4,int Q5)
{
    return (500*Q1)+(500*Q2)+(500*Q3)+(500*Q4)+(500*Q5);
}
int main()
{
	int n,q1=0,q2=0,q3=0,q4=0,q5=0;
 int Q1=0,Q2=0,Q3=0,Q4=0,Q5=0;
	n=6;
displayPrices();
cout<<"\nEnter any number to select any product to buy or 0 to stop buying: ";
	while(n!=0)
	{
		cin>>n;
		if(n==1)
		{
			cout<<"\n\t\tYou have selected book."<<endl;
			cout<<"\nEnter Quantity: ";
			cin>>q1;
    Q1+=q1;
    cout<<"\t\t"<<Q1<<" Books done! \n";
		}
		else if(n==2)
		{
			cout<<"\n\t\tYou have selected T-shirt."<<endl;
			cout<<"\nEnter Quantity: ";
			cin>>q2;
    Q2+=q2;
    cout<<"\t\t"<<Q2<<" T-Shirts done! \n";
		}
		else if(n==3)
		{
		  cout<<"\n\t\tYou have selected Pants."<<endl;
		  cout<<"\nEnter Quantity: ";
		  cin>>Q3;
    Q3+=q3;
    cout<<"\t\t"<<Q3<<" Pants done! \n";
	    }
	    else if(n==4)
	    {
	    	cout<<"\n\t\tYou have selected Shoes."<<endl;
	    	cout<<"\nEnter Quantity: ";
	    	cin>>Q4;
        Q4+=q4;
        cout<<"\t\t"<<Q4<<" Shoes done! \n";
		}
		else if(n==5)
		{
			cout<<"\n\t\tYou have selected Bag."<<endl;
			cout<<"\nEnter Quantity: ";
			cin>>Q5;
    Q5+=q5;
    cout<<"\t\t"<<Q5<<" Bags done! \n";
		}
		else if(n==0)
		{
			cout<<"\n\n----------THANK YOU & COME AGAIN------------\n\n"<<endl;
    break;
		}
		else
		{
			cout<<"Invalid number."<<endl;
		}
    cout<<"\nEnter any number to select any other product to buy or 0 to stop buying: ";
	
	}
	cout<<"\n\n0==================PURCHASE DETAILS==========================\n\n";
	cout<<"You have purchased "<<Q1<<" Books (Price= "<<(500*Q1)<<")"<<endl;
	cout<<"You have purchased "<<Q2<<" T-shirts (Price= "<<(500*Q2)<<")"<<endl;
	cout<<"You have purchased "<<Q3<<" Pants (Price= "<<(500*Q3)<<")"<<endl;
	cout<<"You have purchased "<<Q4<<" Shoes (Price= "<<(500*Q4)<<")"<<endl;
	cout<<"You have purchased "<<Q5<<" Bags (Price= "<<(500*Q5)<<")"<<endl;
	cout<<"Total: "<<calculateTotal(Q1,Q2,Q3,Q4,Q5);
	return 0;
}

