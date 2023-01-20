#include <iostream>
#include <conio.h>
#include <cstring>
#include <fstream> 
using namespace std;
char ch[10][130]={" DAEWOO  EXPRESS"," DARBAAR TRAVELS"," SHAHEEN EXPRESS"," FAISAL  MOVERS"," BANDIAL EXPRESS"};


//----------------------------------------------------------------User Defined Functions-------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
void motorway();
void bookticket();
void listticket();
void searchrecord(string search);
void deleterecord(string search);
void makereserve();
void bus();
void busr();
void busm();
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------------------

void makereserve(){
    	
	int choose;
	string name;
	system("COLOR 0f");
	system("cls");
	while(true){
	
       cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t Book Tickets            --- [1] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t View List Of Buses      --- [2] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t Cancel   Ticket         --- [3] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t View Reserve Ticket     --- [4] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t Search Your Ticket      --- [5] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
      cout <<"\t Exit From Program       --- [6] \n ";
      cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";

	
	cout<<"\nEnter Your Choice :";
	cin>>choose;
	

	if (choose>6||choose<1)
	{
		
		cout<<"\n\nPlease Enter valid Choice...\n\n\n ";
	}
	
	else if (choose==1)
   {
			bookticket();
   }   
    else if (choose==2)
   {        bus();
           
   }

	else if (choose==3)
   {  
	       
			deleterecord(name);
   }  
	else if(choose==4)
   {
			listticket();
   }  
	
	else if (choose==5)
   {        
        	searchrecord(name);  
	
   }
   else if(choose==6){
   	  cout<<"\n\t--------------------"<<endl;   
     cout<<"\tThanks For Visiting"<<endl;
	 cout<<"\t--------------------\n\n";   	
   	exit(0);
   	

   }
   else
   
   {
   cout<<"\nValid Number Please\n"<<endl;
   }

}


}
//-------------------------------------------------BOOKTICKET FUNCTION-------------------------------------------------------
//---------------------------------------------------------------------------------------------------------------------------
void bookticket(){
	
    	system("cls");
	cout<<"\n_______________________________"<<endl;
	cout<<"\n   Select travelling Route    "<<endl;
	cout<<"\n_______________________________"<<endl;
cout<<"\n1.Motorway "<<endl<<"\n2.GT Road"<<endl;
int selection;
cout<<"\nEnter your travelling routes :";
cin>>selection;
system("cls");

if(selection==1){
	
	motorway();
	
	}

	else if(selection==2)
{   
    
    	while(true){
    int seat,busno;
	char confirm;   
    string start;
    string end;    
	busr();
	cout<<" \nEnter your choice :";
	cin>>busno;
	while(busno>2||busno<1){
		cout<<"Enter valid Option :"<<endl;
		cin>>busno;
	}

	
	
		fstream file;
	file.open("GTroad.txt" , ios::in|ios::out|ios::app);
	
	string name;
 	string number;
 	cin.ignore();
 	
 	int n;  // number of seats
 	
 		system("cls");
		cout<<"\t___________________________\n"<<endl;
		cout<<"\tEach Bus contain 10 seats"<<endl;
		cout<<"\t___________________________"<<endl;
	    cout<<"\nHow Many seats You want to Buy ??"<<endl;
	    
        cin>>n;
        
        
        while(n>10||n<1){
		
        	cout<<"\nEnter seats Less than 10 .."<<endl;
        	cout<<"\nEnter Your seats Again: ";
        	cin>>n;
			}
			
			
			    
 	cin.ignore();
	cout<<"\nEnter your Name:";
 	getline(cin,name);
 	
 	cout<<"\nEnter your Seat Number:"<<endl;
 	getline(cin,number); 	
	cout<<"\nEnter your Starting point:"<<endl;
	getline(cin,start);
	cout<<"\nEnter your Ending point:"<<endl;
	getline(cin,end);
	string x="booked";
	cout<<"\n If you want to Confirm Ticket Press Y for Yes and  N for No :"<<endl;
	cin>>confirm;
       
	   if(confirm=='y' || confirm=='Y'){
		file<<name<<"          "<<busno<<"           "<<start<<"             "<<end<<"            "<<number<<"           "<<x<<"     "<<endl<<endl;
	    file.close();

		cout<<"\nYour Ticket Has Been Confirmed...\n"<<endl;
		cout<<"\nYour Total Price for Travelling is RS.2000\n\n"<<endl;
		getch();
			makereserve();
	                    }
	                    
	                    
	else if(confirm=='n' || confirm=='N')
	  {
		makereserve();
      	}
      	
      	else{
      		cout<<"\nInvalid Confirmation"<<endl;
      		makereserve();
		  }
}
}

      else
	  {
	
	cout<<"Enter a Valid Choice \n\n"<<endl;
    
	}

}

 
 
 //-----------------------------------------------------------VIEW RECORDS FUNCTION----------------------------------------------------------
 //-----------------------------------------------------------------------------------------------------------------------------------
 
 void listticket(){
 	system("cls");
 	cout<<"Do you Want to see ticket list of "<<endl<<"\n 1.GT Road List "<<endl<<"\n 2.Motorway List\n "<<endl;
 	int list;
 	cout<<"Enter Your Choice :";
 	cin>>list;
 	 if(list>2||list<1){
 	 	cout<<"Enter valid choice :";
 	 	listticket();
	  }
	  
	  else if(list==1){
	  
 	system("cls");
 	cout<<"Current Record(s)"<<endl;
 	cout<<"----------------------------"<<endl;
 	
	fstream f ;
 	f.open("GTroad.txt" , ios::in|ios::out|ios::app);
 	string name , start,end,number,busno,x;
 	int counter=0;
		 f>>name>>busno>>start>>end>>number>>x; 
		
		while(!f.eof()){
		
		 cout<<"Name  :"<<name<<endl;
		 cout<<"Bus No.  :"<<busno<<endl;
		 cout<<"Starting point  :"<<start<<endl;
		 cout<<"Ending Point  :"<<end<<endl;
		 cout<<"Seat Number   :"<<number<<endl;
		 cout<<"Booking Confirmation:"<<x<<endl;
 	
 			counter++;
 			cout<<"----------------------------"<<endl;
 		f>>name>>busno>>start>>end>>number>>x;
		cout<<"============================"<<endl;
}
	
	if(counter == 0){
		
		
		
		cout<<"No Record Found "<<endl;

		 f.close();	
 	cout<<"============================"<<endl;
 }
	
	
	getch();
	system("cls");
            
}
		
	
	


  else if(list==2){
  		system("cls");
 	cout<<"Current Record(s)"<<endl;
 	cout<<"----------------------------"<<endl;
 	int counter=0;
	fstream f ;
 	f.open("Motorway.txt" , ios::in|ios::out|ios::app);
 	string name,route,number,busno,x;
 	
		 f>>name>>route>>busno>>number>>x; 
		
		while(!f.eof()){
		
		 cout<<"Name  :"<<name<<endl;
		 cout<<"Motorway No.: "<<route<<endl;
		 cout<<"Bus number  : "<<busno<<endl;
		 cout<<"Seat Number : "<<number<<endl;
		 cout<<"Booking Confirmation:"<<x<<endl;
 	
 			counter++;
 			cout<<"----------------------------"<<endl;
 		f>>name>>route>>busno>>number>>x;
		 
	}
	
		if(counter == 0){
		
		
		
		cout<<"No Record Found "<<endl;
}
	
		 f.close();	
 	cout<<"============================"<<endl;
	getch();
	system("cls");
            
	}
	
  	
  	
  	
  	
}
 
 

 //----------------------------------------------------SEARCH RECORD FUNCION--------------------------------------------------------
 //--------------------------------------------------------------------------------------------------------------------------------
 
 
 void searchrecord(string search){
 	cout<<"\nDo you Want to Search ticket list of... "<<endl<<"\n 1.GT Road Bus Record "<<endl<<"\n 2.Motorway List Record\n "<<endl;
 	int list;
 	cout<<"\nEnter Your Choice :";
 	cin>>list;
 	 if(list>2||list<1)
	  {
 	  	    cout<<"\nEnter valid choice :";
 	 	    searchrecord(search);
	  }
 	else if(list==1){
 		 fstream f ;
 		 
 	         f.open("GTroad.txt" , ios::in|ios::out|ios::app);
 		string name ,busno,end,start,number,x;
 		int counter=0;
 		cout << "\n\n\tEnter Your Name for search: ";
		cin.ignore();
		getline(cin,search);
		system("cls");
		f>>name>>busno>>start>>end>>number>>x;
		cout<<"\t----------------------------"<<endl;
		cout<<"\tCurrent Record(s)"<<endl;	
		cout<<"\t----------------------------"<<endl;
			while(!f.eof())
		{
		
			if(search == name)
			{
				
			cout<<"\tName:"<<name<<"\n"<<endl;
			cout<<"\tBus No:"<<busno<<"\n"<<endl;
			cout<<"\tStarting point:"<<start<<"\n"<<endl;
			cout<<"\tEnding Point:"<<end<<"\n"<<endl;
			cout<<"\tSeat Number:"<<number<<"\n"<<endl;
			cout<<"\Seat confirmation"<<x<<"\n"<<endl;
		cout<<"\t============================"<<endl;
			
 		    f>>name>>busno>>start>>end>>number>>x;
 		    counter++;
         }
	     }	
 			if(counter==0){
 				
 				cout<<"\n\tNo Record of This Name Exist"<<endl;
 				cout<<"\t============================\n"<<endl;
			 }
			 	f.close();
				 				 getch();
			 	makereserve();
 			system("cls");
 			
	 }
 	
 	
 	else if(list==2){
 		fstream f ;
 		int counter=0;
 	         f.open("Motorway.txt" , ios::in|ios::out|ios::app);
 		string name ,busno,route,number,x;
 		cout << "\n\n\tEnter Your Name for search: ";
		cin.ignore();
		getline(cin,search);
		system("cls");
		f>>name>>route>>busno>>number>>x;
		cout<<"\t----------------------------"<<endl;
		cout<<"\tCurrent Record(s)\n"<<endl;	
		cout<<"\t----------------------------"<<endl;
			while(!f.eof())
		{
		
			if(search == name)
			{	
			
			cout<<"\tName:"<<name<<"\n"<<endl;
			cout<<"\tMotorway No:"<<route<<"\n"<<endl;
			cout<<"\tBus No:"<<busno<<"\n"<<endl;
			cout<<"\tSeat Number:"<<number<<"\n"<<endl;
			cout<<"\Seat confirmation"<<x<<"\n"<<endl;
		    cout<<"\t============================"<<endl;
		    
 		    f>>name>>route>>busno>>number>>x;
 		    counter++;
 		}
 	}
 	       if(counter==0){
 				
 				cout<<"\n\tNo Record of This Name Exist"<<endl;
 				cout<<"\t============================\n"<<endl;
			 }
			 
 			getch();
 			system("cls");
	 }
	 }

//---------------------------------------------------DELETE RECORD----------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------
 
 void deleterecord(string search)
 {
 	
 	cout<<"\nDo you Want to delete ticket list of "<<endl<<"\n 1.GT Road Bus Record "<<endl<<"\n 2.Motorway List Record\n "<<endl;
 	int list;
 	cout<<"\nEnter Your Choice :";
 	cin>>list;
 	 if(list>2||list<1)
	  {
 	  	    cout<<"\nEnter valid choice :";
 	 	    deleterecord(search);
	  }
	  
	  else if(list==1)
           {
           	string  *v,name,busno,start,end,number,x;
	fstream f , t;
	int rndm = 0;
	f.open("GTroad.txt" , ios::in);
	if(!f)
	{
		cout<<"\n\n\t\tError ";
		exit(0);
	}
	else
	{
		string search , cv;                                                                 
		cout << "\n\n\tEnter Your name  .: ";                                        
		cin >> search;                                                                     
		t.open("Temp.txt" , ios::app | ios::out);                                       
		f>>name>>busno>>start>>end>>number>>x;  
		while(!f.eof())
		{
		                                                                                
			if(search == name)
			{	
				rndm++;
				system("cls");
				cout<<"\n\n\t\t\tTicket Verified";
			
			string	cv = "canceled";
			
	//---------------------------------------------Use of Pointer---------------------------------------------------------		
			v=&cv;
			//	v = cv;
			
			
				cout<<"\n\n\t\t Your Tciket : " << name << " Canceled..." << endl;
				t << name << " " << busno << " " << start << " " << end << "    " << number <<"    " <<*v<< endl<< endl;								
			}
			else
			{	t << name << " " << busno << " " << start << " " << end << "    " << number <<"    " <<*v<< endl<< endl;	
			
	
			}
			f>>name>>busno>>start>>end>>number>>*v;
			
			if(rndm==0){
				
				
				cout<<"No Record(s) Found"<<endl;
				cout<<"---------------------\n\n"<<endl;
			}
			
			
			}
	//--------------------------------------End of Pointer Use-----------------------------------------------------------
			f.close();
			t.close();
			remove("GTroad.txt");
			rename("Temp.txt" , "GTroad.txt");
			if(rndm == 0)
			{
			cout<<"\n\n\t\tTicket Does not Exists\n\n";
			}
			
		}	
}
	
		else if(list==2)
		{ 
		     
		     string  v,name,busno,route,number,x;
	fstream f , t;
	int rndm = 0;
	f.open("Motorway.txt" , ios::in);
	if(!f)
	{
		cout<<"\n\n\t\tError ";
		exit(0);
	}
	else
	{
		string search , cv;                                                                 
		cout << "\n\n\tEnter Your name  .: ";                                        
		cin >> search;                                                                     
		t.open("Temp.txt" , ios::app | ios::out);                                       
		f>>name>>route>>busno>>number>>x;  
		while(!f.eof())
		{
		                                                                                
			if(search == name)
			{	
				rndm++;
				system("cls");
				cout<<"\n\n\t\t\tTicket Verified";
				string cv;
				cv = "canceled";
				v = cv;
				cout<<"\n\n\t\t Your Tciket : " << name << " Canceled..." << endl;
				t << name << " " << route << " " << busno << " " << number << "    " << v <<"    " << endl<< endl;								
			}
			else
			{	t << name << " " << route << " " << busno << " " << number << "    " << v <<"    " << endl<< endl;	
			
	
			}
			f>>name>>route>>busno>>number>>v;
			
			
			}
			f.close();
			t.close();
			remove("Motorway.txt");
			rename("Temp.txt" , "Motorway.txt");
			if(rndm == 0)
			{cout<<"\t\t-----------------------"<<endl;
			cout<<"\t\tTicket Does not Exists";
			cout<<"\t\t-----------------------\n\n"<<endl;
			}			
}
}
}
//------------------------------------------------------Bus Function------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------------------

void bus(){
	system("cls");
	cout<<"\t\t____________________________________________________________\n"<<endl;
	 cout<<"\t\t 1. Motorway Buses"<<"\t\t\t 2. GT Road Buses"<<endl;
	 cout<<"\t\t____________________________________________________________\n"<<endl;
	 int pick;
	 cout<<"Enter Your Choice:"<<endl;
	 cin>>pick;
	 if(pick==1){
	 	busm();
	    
	 }
	else if(pick==2){
		busr();
	}
	else
	{ cout<<"\t\t\nEnter a Valid choice"<<endl<<endl;
           getch();
		   bus();	
	}

	system("cls");
}

void busm(){
    cout<<"\n\n\n";
    cout<<"\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BUS RESERVATION SYSTEM \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n"<<endl;
    cout<<"\t\t\t\t\t List of Buses"<<endl;
    cout<<"\t---------------------------"<<endl;
    for(int i=0;i<3;i++){
    	
    	cout<<" \t\n\t"<<i+1<<".Bus"<<ch[i]<<endl;
    	cout<<"\t---------------------------"<<endl;
    	
	}	
	  getch();
}

void busr(){
    cout<<"\n\n\n";
    cout<<"\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd BUS RESERVATION SYSTEM \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n"<<endl;
    cout<<"\t\t\t\t\t List of Buses"<<endl;
    cout<<"\t---------------------------"<<endl;
    for(int i=3;i<5;i++){
    	
    	cout<<" \t\n\t"<<i-2<<".Bus"<<ch[i]<<endl;
    	cout<<"\t---------------------------"<<endl;
    	
	}	
	  getch();
}

//------------------------------------------------------------Motorway Function---------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------
void motorway(){
	     int n;   //number of seats
		cout<<"\n   -----NUMBER--------------MOTORWAY ROUTES--------------PRICES-------\n"<<endl;
		cout<<"\n \t1.M-1 motorway   ----Peshawar to Islamabad     :-----RS.1200"<<endl;
		cout<<"\n \t2.M-2 motorway   ----Islamabad to Lahore       :-----RS.1000"<<endl;
		cout<<"\n \t3.M-3 motorway   ----Lahore to Abdul Hakeem    :-----RS.1300"<<endl;
		cout<<"\n \t4.M-4 motorway   ----Pindi Bhattian to Multan  :-----RS.1500"<<endl;
		cout<<"\n \t5.M-5 motorway   ----Multan to Sukkur          :-----RS.2000"<<endl;
		cout<<"\n \t6.M-6 motorway   ----Sukkur to Hyderabad       :-----RS.1100"<<endl;
		cout<<"\n \t7.M-8 motorway   ----Ratodero to Gwadar        :-----RS.1000"<<endl;
		cout<<"\n \t8.M-9 motorway   ----Hyderabad to Karachi      :-----RS.1000"<<endl;
		cout<<"\n \t9.M-11 motorway  ----Lahore to Sialkot         :-----RS.600"<<endl;
		cout<<"\n \t10.M-16 motorway ----Swabi to Chakdara         :-----RS.2200"<<endl;
		cout<<"\n   -------------------------------------------------------------------\n"<<endl;
		int route;
		cout<<"\nEnter your desired Motorway:\n";
	    cin>>route;
	    if(route>10||route<1)
	    {cout<<"\n\t Enter a Valid Motorway Route\n\n";
	           getch();
			   motorway();
		}
		system("cls");
		cout<<"\t___________________________\n"<<endl;
		cout<<"\tEach Bus contain 10 seats"<<endl;
		cout<<"\t___________________________"<<endl;
	    cout<<"\nHow Many seats You want to Buy ??"<<endl;
        cin>>n;
        while(n>10||n<1){
		
        	cout<<"\nEnter seats Less than 10 .."<<endl;
        	cout<<"\nEnter Your seats Again: ";
        	cin>>n;
			}    			
        int busno;
	    system("cls");
	    cout<<"\n";
        busm();
	    cout<<"\nEnter your Choice: ";
	    cin>>busno;
	while(busno>3||busno<1){
		cout<<"Enter valid Option :"<<endl;
		cout<<"\nEnter your Choice Again : ";
		cin>>busno;
	}

	
	
		fstream file;
	file.open("Motorway.txt" , ios::in|ios::out|ios::app);
	
	char confirm;
	string name;
 	string number;
 	cin.ignore();
 	
	cout<<"\nEnter your Name:";
 	getline(cin,name);
 	
 	cout<<"\nEnter your Seat Number:"<<endl;
 	getline(cin,number);
 	
 	string x="Booked";
	  	
	cout<<"\n If you want to Confirm Ticket Press Y for Yes and  N for No :"<<endl;
	cin>>confirm;
       
	if(confirm=='y' || confirm=='Y'){
		file<<name<<"       "<<route<<"          "<<busno<<"            "<<number<<"           "<<x<<"    "<<endl<<endl;
	file.close();

		cout<<"\nYour Ticket Has Been Confirmed...\n"<<endl;
		cout<<"\nYour Total Price for Travelling is RS.2000\n\n"<<endl;
		getch();
			makereserve();
	}
	else if(confirm=='n' || confirm=='N'){
		makereserve();
	}

else
{
	
	cout<<"Enter a Valid Choice :";
}
}

//-----------------------------------------------------------------Main Function-------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------

int main() {
    string name;
	system("COLOR 0f");
	system("cls");
while(true){

int choice;
	cout<<"\n\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd"<<endl;
	cout << "\t\t\t\t    TICKET RESERVATION AGENCY \n";
	cout<<"\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
	cout<<"\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd MENU OPTIONS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n"<<endl;
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Make Reservation ------ [1] \n";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout <<"\t Exit             ------ [2] \n ";
cout <<"\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n";
cout<<"\nEnter your choice: ";
cin>>choice;
	
	if(choice>2||choice<1){
		
			cout<<"..Please Enter Valid Input .."<<endl;
		
	}
	else if(choice==1)
	{
	
		makereserve();
		
}

	else if (choice==2)
	{
			cout<<"\n\t--------------Thank you for Visiting---------------\n\n ";
		exit(0);
}
	else
	{
	
		cout<<"\n----------You have entered invalid Input"<<endl<<"\nPlease enter valid Input--------------\n\n\n\n"<<endl;

}
}
system("cls");

    return 0;
}


