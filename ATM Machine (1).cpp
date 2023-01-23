#include<iostream>
using namespace std;



int ATM(){

	
	long int availbal=100000;
	int recaccount=12345678;
	long int withdraw,transfer,balinquiry;
	int ch;
	char c;
	
	
	
do{

	
	cout<<" PLease enter your choice\n";
	
	cout<<"1. Withdraw\n2. Funds Trasnfer\n3. Balance Inquiry\n";
	cin>>ch;
	
	
	switch(ch)
	{
		
		case 1:{
			
			cout<<"Enter amount to Withdraw: ";
			cin>>withdraw;
			
			if(withdraw>availbal)
			{
				cout<<"Sorry Insuffisient Balance: ";
				
			}
			
			else
			
			cout<<"Amount Withdrawn Successfully "<<endl;
			availbal=availbal-withdraw;
			cout<<" Remaining Balance is RS: "<<availbal;
			
			break;
		}
		
		case 2:{
			
			
			cout<<"Enter Recp account number: ";
			cin>>recaccount;
				
			cout<<"Enter amount to transfer: ";
			cin>>transfer;
			
			if((availbal>transfer)){
		 
				availbal=availbal-transfer;
				
				cout<<"Funds Transfered Successfully to Account Number : " <<recaccount<<endl;
				cout<<" Remaining Balance is RS: "<<availbal;
		
			}
			
			else
			
			cout<<"Insufficient Funds: "; 
			
			break;
		}
		
		
		case 3:{
			
			cout<<"Your Available Balance is RS: " <<availbal;
			
			break;
		}
		
		default:{
			
			cout<<"Invalid Choice! ";
			
		}
	}
	
	cout<<endl;
	
	cout<<"Press y to continue and Press n to close: ";
	cin>>c;
	
	}
         
         while(c=='y');



}


int main()

{
	int cardno=123456789;
	int pincode=3251;
	int card;
	int pin;
	char c;
	
	do{

		cout<<"Please enter your Card No: ";
	cin>>card;
	
		cout<<"Please enter your pincode: ";
	cin>>pin;
	
	if((cardno==card)&&(pincode==pin)){
		
	ATM();	
	}
	
	else 
	
	cout<<"Card or Pincode is incorrect. Please try Again: ";
		
	cout<<"Press y to continue and Press n to close: ";
	cin>>c;	
}
  while(c=='y');
	
}
	






