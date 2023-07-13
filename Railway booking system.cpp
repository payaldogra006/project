#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int a;
class reg
{
   double n;
   int s;
public:
   char name[50];
   
  
   void enterdetails(){
        
        cout<<"Enter your name\n";
        std::cin>>name;
        cout<<"Enter Your Number:\n";
        std::cin>>n;
        cout<<"FOLLOWING ARE THE SEAT TYPES AVAILABLE IN OUR RAILWAYS\n";
        cout<<"(PRESS 1 BUSSINESS CLASS SEAT)\n";
        cout<<"(PRESS 2 ECONOMY CLASS SEAT)\n ";
        cout<<"enter no. of your seat type:\n" ;
        cin>>s;
        if (s ==1)
        {
        cout<<"your password is \n BUS ";
        cout<<"\nsave it with yourself,u might be requring it in future!";
        }

        else 
        {
        cout<<"your password is \n ECO";
        cout<<"\nsave it with yourself,u might be requring it in future!";
        }
        
   }
   void regdisplay(){
       cout<<name<<"\t"<<n<<"\n";
       
   }

};

class detail
{
public:
    int tno;
    string tname;
    float TF;
    int n_o_p;
    int bc;
    string bp;
    string dest;
    int c1;
    int c2;
    int d,m,y;
    void getdetail()
    {
        cout<<"Enter the details as follows\n";
        cout<<"Train no:";
        cin>>tno;
        cout<<"Train name:";
        cin>>tname;
        cout<<"Boarding point:";
        cin>>bp;
        cout<<"Destination pt:";
        cin>>dest;
        //cout<<"No of seats to be booked:";
        //cin>>c1;

        cout<<"Date of travel (mon, day, year):\n";
        cin>>d>>m>>y;
        
        cout<<"\nno. of passenger travelling:-\n";
		cin>>n_o_p;
		cout<<"\t BOOKING CLASS\noption available are :-\n(1) sleeper class\n(2) 1 A.C\n(3) 2A.C\n(4) 3 A.C\n\n";
		cout<<"choose your booking class no.:-\n\n";
		cin>>bc;
		switch(bc){
		    case 1:
		    cout<<"you choose sleeper class seat ........................added fair = RS 100\n";
		    TF=(500+100)*n_o_p;
		    cout<<"total fair:-"<<TF;

		    break;
		    case 2:
		    cout<<"you choose 1 AC class seat ........................added fair = RS 1000\n";
		    TF=(500+1000)*n_o_p;
		    cout<<"total fair:-"<<TF;
		      		
		    break;
		    case 3:
		    cout<<"you choose 2 AC class seat ........................added fair = RS 800\n";
		    TF=(500+800)*n_o_p;
		    cout<<"total fair:-"<<TF;
		      	
		    break;
		    case 4:
		    cout<<"you choose 3 AC class seat ........................added fair = RS 500\n";
		    TF=(500+500)*n_o_p;
		    cout<<"total fair:-"<<TF<<endl;
		     break; 		
			  }
    }
    void displaydetail()
    {
        cout<<tno<<"\t"<<tname<<"\t"<<bp<<"\t"<<dest<<"\t";
        cout<<n_o_p<<"\t" ;
        cout<<d<<"-"<<m<<"-"<<y<<"\t"<<TF<<"\t"<<endl;
    }
};

void economicclass(){
    cout<<"You are successfully logged in ;)\n"<<endl;
    detail D;
    D.getdetail();
    D.displaydetail();
    }

void businessclass(){
    cout<<"You are successfully logged in ;)\n"<<endl;
    detail D;
    D.getdetail();
    D.displaydetail();
}
    
void seedetails()
{
 cout<<"\n~The following trains are available\n";
	cout<<"1.RAJDHANI_EXPRESS......(shimla-delhi)................10:00A.M...........SUMMERHILL STATION\n";
	cout<<"2.SATABDI_EXPRESS.......(shimla-kolkata)..............05:00P.M...........SHIMLA STATION\n";
	cout<<"3.BULLET_EXPRESS........(shimla-mumbai)...............11:00P.M...........TARDEVI STATION\n";
	cout<<"4.GARIB_RATH_EXPRESS....(shimla-delhi)................05:00P.M...........SHIMLA STATION\n";
	cout<<"5.DURONTO_EXPRESS.......(shimla-kolkata)..............08:00A.M...........SUMMERHILL STATION\n";
	cout<<"6.RAJDHANI_EXPRESS......(dehli-shimla)................10:00A.M...........KASHMIRI GATE STATION\n";
	cout<<"7.SATABDI_EXPRESS.......(delhi-kolkata)...............05:00P.M...........ANAND VIHAR STATION\n";
	cout<<"8.BULLET_EXPRESS........(delhi-mumbai)................11:00P.M...........NEW DELHI STATION\n";
	cout<<"9.GARIB_RATH_EXPRESS....(delhi-shimla)................05:00P.M...........HAZRAT NIZAMUDDIN STATION\n";
	cout<<"10.DURONTO_EXPRESS......(delhi-kolkata)...............08:00A.M...........DELHI SARAI  STATION\n";
	cout<<"11.RAJDHANI_EXPRESS.....(kolkata-delhi)...............10:00A.M...........SEALDAH_STATION\n";
	cout<<"12.SATABDI_EXPRESS......(kolkata-shimla)..............05:00P.M...........HOWRAH_STATION\n";
	cout<<"13.BULLET_EXPRESS.......(kolkata-mumbai)..............11:00P.M...........KOLKATA_STATION\n";
	cout<<"14.GARIB_RATH_EXPRESS...(kolkata-delhi)...............05:00P.M...........KOLKATA_STATION\n";
	cout<<"15.DURONTO_EXPRESS......(kolkata-mumbai)..............08:00A.M...........HOWRAH_CANT_STATION\n";
	cout<<"16.RAJDHANI_EXPRESS.....(mumbai-delhi)................10:00A.M...........VIDYAVIHAR STATION\n";
	cout<<"17.SATABDI_EXPRESS......(mumbai-shimla)...............05:00P.M...........CHURCHGATE STATION\n";
	cout<<"18.BULLET_EXPRESS.......(mumbai-kolkata)..............11:00P.M...........CHHATRAPATI SHIVAGI TERMINUS STATION\n";
	cout<<"19.GARIB_RATH_EXPRESS...(mumbai-delhi)................05:00P.M...........GOREGAON STATION\n";
	cout<<"20.DURONTO_EXPRESS......(mumbai-kolkata)..............08:00A.M...........BANDRA STATION\n\n";
    }

void info(){
    cout<<"~~\n";
    cout<<".......WELCOME TO RAILWAY RESERVATION SYSTEM..........\n";
    cout<<"~~\n";
    cout<<"\n..MAIN MENU..\n"<<endl;
    cout<<" (1.SIGN IN)\n"<<endl;
    cout<<" (2.LOGIN IN)\n"<<endl;
    cout<<" (3.EXIT)\n"<<endl;
    cout<<"Choose Your Option\n"<<endl;
    cout<<"~~\n";
    cin>>a;
}
void runner(){
       cout<<"~~\n";
       cout<<"\nEnter [1] To VIEW TRAIN DETAILS";
       cout<<"\nEnter [2] To BOOK A TICKET";
       cout<<"\nEnter [3] HELP";
       cout<<"\nEnter [4] To RETURN TO MAIN MENU\n"<<endl;
       cout<<"~~\n";
}
int main()
{       
        reg R;
        detail D;
        string password;
        info();
        
        in:
            if(a == 1){
            R.enterdetails();
            int w;
            runner();
            cout<<"Enter your choice:\n";
            cin>>w;
            
            if (w == 1){
                seedetails();
                runner();
                int A;
                cout<<"Enter your choice:\n";
                cin>>A;
            
                if(A == 1){
                seedetails();
                }
                else if(A == 2){
                    
            
                    D.getdetail();
                    D.displaydetail();
                }
              else if(A==3){
                    cout<< "\n Helpline Number: 7018687792\n";}
               else if(A == 4){
                    info();
                    goto in;
               }
               // break
            }
            
            else if(w == 2){
                cout<<"\nEnter ur password\n";
                cin>>password;
            
                if (password == "BUS")
                {
            
                    cout<<"U choosed businessclass ticket,u may be wondering how Ik well I m smart ;)\n\n ";
                    businessclass();
                    R.regdisplay();
                    runner();
                    int Q;
                    cout<<"Enter your choice:\n";
                    cin>>Q;
            
                    if(Q == 1){
                    seedetails();
                    }
                    else if(Q == 2){
                    
            
                    D.getdetail();
                    D.displaydetail();
                    }
                    else if(Q == 3){
                    info();
                    goto in;
                    }
                 }
            
            
                else if (password == "ECO")
                {
                    cout<<"U choosed economicclass ticket,u may be wondering how Ik well I m smart ;)\n\n ";
                    economicclass();
                    R.regdisplay();
                    runner();
                    int B;
                    cout<<"Enter your choice:\n";
                    cin>>B;
            
                    if(B == 1){
                    seedetails();
                    }
                    else if(B == 2){
                    
            
                    D.getdetail();
                    D.displaydetail();
                    }
                    else if(B == 3){
                    info();
                    goto in;
               }
                 }
                
                else{
                    cout<<"You Entered WRONG Credentials!";
                    info();
                }}
            else if(w == 3){
                info();
                goto in;
            }}
            else if(a == 2){
                int id;
                string pass;
                cout<<"enter ur Id:\n";
                cin>>id;
                cout<<"enter password:\n";
                cin>>pass;
                runner();
                int Q;
                cout<<"Enter your choice:\n";
                cin>>Q;
            
                if(Q == 1){
                seedetails();
                }
                else if(Q == 2){
                    R.enterdetails();
            
                    D.getdetail();
                    D.displaydetail();
                }
               else if(Q == 3){
                    info();
                    goto in;
               }
            
      }
  
}
