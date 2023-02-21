//this is a hotel management c++ project

# include <iostream>
using namespace std;


//declaring the main function

int main(){
	//declare quantity name int data  name
	int quant;
	   //declare choice name int data name
	   int choice;
	//lets declare quantity subject of hotel
	int qrooms=0,qpasta=0,qburger=0,qshakes=0;
           //sold item list declare
	  int srooms=0,spasta=0,sburger=0,sshakes=0;
	//total item description declare
	int trooms=0,tpasta=0,tburger=0,tshakes=0;
	//repeat the work by goto 
	
  
  
   //print the quantity of item
    cout<<"\n Total Quantity of item we have : ";
   cout<<"\n  Room available :";
    cin>>qrooms;
    cout<<"\n  Pasta Plate available :";
     cin>>qpasta;
   cout<<"\n  Burger plate available :";
    cin>>qburger;
     cout<<"\n  shakes available :";
      cin>>qshakes;
      m:
       //choice selection of items
       cout<<"\n\t\t\t Please Select From The Menu option";
       cout<<"\n\n1)Rooms :";
       cout<<"\n\n2)Pasta plates :";
       cout<<"\n\n3)Burger :";
       cout<<"\n\n4)Shakes :";
       cout<<"\n\n5)information regarding sales collection: ";
       cout<<"\n\n6)Exit:";
       cin>>choice;
       
       
       switch (choice){
       	//case 1 for rooms
       	case 1:
       		cout<<"\n\n Enter the numberof rooms you want : ";
       		cin>>quant;
       	 if(qrooms-srooms>=quant)
       	 	{srooms=srooms+quant;
       	 	trooms=trooms+quant*1200;
         cout<<"\n\n\t"<<quant<<" room/rooms have been alloted you";
       	 	
		        }
	 else{
	cout<<"\n\t Only"<<qrooms-srooms<<"Rooms remaining in hotel:";
       	break;
       } 
	 
	 
	 
	 
	  
	  //case 2 for pasta
	case 2:
       	cout<<"\n\n Enter the numberof pasta you want :";
       	cin>>quant;
       	 if(qpasta-spasta>=quant)
       	 	{spasta=spasta+quant;
       	 	tpasta=tpasta+quant*50;
         cout<<"\n\n\t"<<quant<<" Pasta plate have been alloted you";
       	 	
		        }
	else{
	     cout<<"\n\t Only"<<qrooms-srooms<<"Pasta plate remaining in hotel";
		break;
		       } 
		       
	              
	    
	    
	//case 3 for burger
         case 3:
       	cout<<"\n\n Enter the number of burger you want :";
       	cin>>quant;
       	 if(qburger-sburger>=quant)
       	 	{sburger=sburger+quant;
       	 	tburger=tburger+quant*90;
         cout<<"\n\n\t"<<quant<<" Burger have been alloted you";
       	 	
		        }
		else{
		cout<<"\n\t Only"<<qburger-sburger<<"Burger remaining in hotel";
		break;
		       }
		      
        //case 4 Shakes
        	case 4:
       	cout<<"\n\n Enter the number of shakes you want :";
       	cin>>quant;
       	 if(qshakes-sshakes>=quant)
       	 	{sshakes=sshakes+quant;
       	 	tshakes=tshakes+quant*150;
         cout<<"\n\n\t"<<quant<<" shake have been alloted you";
       	 	
		        }
	else{
	cout<<"\n\t Only"<<qshakes-sshakes<<"shakes remaining in hotel";
	break;
		       }
		       
	//case 5 total day target
	case 5:
cout<<"\n\t\t Details of sale & collection";
//rooms
cout<<"\n\n Number of rooms  we had:"<<qrooms;
cout<<"\n\n Num of rooms we gave rent"<<srooms;
cout<< "\n\n Remaining room  "<<qrooms-srooms  ;
cout<<"\n\n Total room collection for the day "<<trooms;    

//pasta

cout<<"\n\n Number of pasta  we had:"<<qpasta;
cout<<"\n\n Num of pasta we gave "<<spasta;
cout<< "\n\n Remaining pasta  "<<qpasta-spasta  ;
cout<<"\n\n Total pasta collection for the day "<<tpasta;	         
	            
//burger

cout<<"\n\n Number of burger  we had:"<<qburger;
cout<<"\n\n Num of burger we gave "<<sburger;
cout<< "\n\n Remaining burger  "<<qburger-sburger  ;
cout<<"\n\n Total burger collection for the day "<<tburger;	

//shakes

cout<<"\n\n Number of shake  we had:"<<qshakes;
cout<<"\n\n Num of shake we gave "<<sshakes;
cout<< "\n\n Remaining shakes  "<<qshakes-sshakes  ;
cout<<"\n\n Total shakes collection for the day "<<tshakes;	        
	     
//now total earning
cout<<"\n\n Total  collection for the day "<<tshakes+trooms+tpasta+tburger;	      	        
      
      case6:
      exit(0);
      default:
      	cout<<"\n Please select the num mention above ";
       }
        goto m;
 
 }
