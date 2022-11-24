#include <iostream>
#include<string.h>
using namespace std;
class blood_bank
{
public:
    static int bloodgroup[8];
    
};
int blood_bank::bloodgroup[] =  { 50 , 50 , 50, 100 , 120, 80, 50, 110 };

class admin
{
    
public:
    
    void display();
    
    admin()
    {
        char s[20]="namra";
        char str[20];
        cout<<"Enter password:";// listen everyone my project class admin password is namra.
        cin>>str;
        if(  strcmp(s,str )==0)
        {cout<<"welcome!!!"<<endl;
            display();}
        else
            cout<<"  You are not admin  "<<endl;
            cout<<"  Please contact namra to become an admin"<<endl;
            cout<<"  THANKS..   "<<endl;
            cout<<endl;
        
    }
};
// A+, O+, B+, AB+, A-, O-, B-, AB-

void admin::display()
{
	int num;
    cout<<" 1  A +ve:"<<blood_bank::bloodgroup[0]<<endl;
    cout<<" 2  O +ve:"<<blood_bank::bloodgroup[1]<<endl;
    cout<<" 3  B +ve:"<<blood_bank::bloodgroup[2]<<endl;
    cout<<" 4  AB +ve:"<<blood_bank::bloodgroup[3]<<endl;
    
    cout<<" 5  A -ve:"<<blood_bank::bloodgroup[4]<<endl;
    cout<<" 6  O -ve:"<<blood_bank::bloodgroup[5]<<endl;
    cout<<" 7  B -ve:"<<blood_bank::bloodgroup[6]<<endl;
    cout<<" 8  AB -ve:"<<blood_bank::bloodgroup[7]<<endl;
    
    cout<<" which type of blood do you want to store again"<<endl;
    cin>>blood_bank::bloodgroup[20];
    
    cout<<"  Welcome namra How much packets of blood do you want to secure? "<<endl;
    cin>>num;
    
    cout<<" Oh! that's great.  Thank you..Namra  "   <<endl;
    cout<<endl;
}

class patient
{
    char name[50];
    char blood_group[20];
    
    
public:
    
    int save();
    void show(int);
    
};
// A+, O+, B+, AB+, A-, O-, B-, AB-

int patient::save()
{
    int c,n;
    
    cout<<"Enter your name:";
    cin>>name;
    
    cout<<"Enter type of blood group you are looking for:"<<endl;
    
    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;
    
    
    cin>>c;
    
    
    show(c);
}

void patient::show(int c)
{
	int a;
    cout<<"Available blood groups compatible  with the entered blood group and other blood group:"<<endl;
    if(c>=0)
    {
        cout<<" 1 = A +ve:  =   packets  "<<blood_bank::bloodgroup[0]<<endl;
        cout<<" 2 = O +ve:  =   packets  "<<blood_bank::bloodgroup[1]<<endl;
        cout<<" 3 = B +ve:  =   packets  "<<blood_bank::bloodgroup[2]<<endl;
        cout<<" 4 = AB +ve: =   packets  "<<blood_bank::bloodgroup[3]<<endl;
    
        cout<<" 5 = A -ve:  =   packets  "<<blood_bank::bloodgroup[4]<<endl;
        cout<<" 6 = O -ve:  =   packets  "<<blood_bank::bloodgroup[5]<<endl;
        cout<<" 7 = B -ve:  =   packets  "<<blood_bank::bloodgroup[6]<<endl;
        cout<<" 8 = AB -ve: =   packets  "<<blood_bank::bloodgroup[7]<<endl;
        
        cout<<      name<<" This is available blood packets in our blood bank"<<endl;
        cout<<"     Now blood which you want is available right Now! "<<endl;
        cout<<"     How many packets you want? "<<endl;
        cin>>a;
        cout<<" OK "<<a<< " packets of blood are given to you on your demand! "<<endl;
        cout<<"   Best wishes for you..  Get Well Soon!  " << name    <<endl;
    
    }
    
    
}

class donor
{
    char name[50];
    char gender[15];
    
    struct date
    {
        int day;
        int month;
        int year;
    }date;
    
    char blood_group[20];
    //DONOR DETAILS
    int phone_no[15];
public:
    
    int save();
    int display();
    
    int x,c;
    
    
};


int donor::save()
{
    cout<<"Enter your name:";
    cin>>name;
    
    cout<<"Enter your gender:";
    cin>>gender;
    
    cout<<"Enter date(DD MM YY):";// write a date in such a showing order.
    cin>>date.day;
    cin>>date.month;
    cin>>date.year;
    
    
    // A, O+, B+, AB+, A-, O-, B-, AB-
    
    cout<<"Enter type of blood group you are donating:"<<endl;
    
    cout<<"0 = A positive"<<endl<<"1 = O positive"<<endl<<"2 = B positive"<<endl<<
    "3 = AB positive"<<endl<<"4 = A negative"<<endl<<"5 = O negative"<<endl<<
    "6 = B negative"<<endl<<"7 = AB negative"<<endl;
    
    cin>>c;
    
    cout<<"how many packets of blood are you donating:";
    cin>>x;
    
    blood_bank::bloodgroup[c]+=x;
    char ch;
    cout<<"Do you want your information to be displayed now(Yes/No)";
    cout<<"kindly press y for yes.."<<endl;
    cin>>ch;
    
    if(ch=='Y'||ch=='y')
        donor::display();
    
}


int donor::display()
{
    cout<<"name:";
    cout<<name<<endl;
    
    cout<<"Date(DD MM YY):";
    cout<<date.day<<" ";
    cout<<date.month<<" ";
    cout<<date.year<<endl;
    
    cout<<"Blood group:";
    
    switch(c)
    {
            // A, O+, B+, AB+, A-, O-, B-, AB-
        case 0:
            cout<<"0 = A positive"<<endl;
            break;
        case 1:
            cout<<"1 = O positive"<<endl;
            break;
        case 2:
            cout<<"2 = B positive"<<endl;
            break;
        case 3:
            cout<<"3 = AB positive"<<endl;
            break;
        case 4:
            cout<<"4 = A negative"<<endl;
            break;
        case 5:
            cout<<"5 = O negative"<<endl;
            break;
        case 6:
            cout<<"6 = B negative"<<endl;
            break;
        case 7:
            cout<<"7 = AB negative"<<endl;
    }
    
    cout<<"Packets of blood:"<<x<<endl;
    
}

int main()
{
    int i=0,j=0;
    donor a[100];
    patient b[50];
    
    int c=0;
    
    while(c!=4)
    {
        
        
        cout<<"Enter 1 if you are the admin , \n 2 if you are a donor ,\n 3 if you are a patient or \n 4 if you want to exit:";
        cin>>c;
        switch(c)
        {
                
                
            case 4:
                break;
                
            case 1:
            {
                admin t;
                char c;
                break;
            }
                
            case 2:
            {
                int k;
                static int i=0;
                cout<<"welcome donor!!!"<<endl;
                cout<<"Please enter 1 if you want to enter your information:";
                cin>>k;
                if(k==1)
                    a[i++].save();
                else if (k==2)
                    a[i].display();
                
                break;
            }
                
            case 3:
            {
                static int i=0;
                cout<<"Welcome patient!!!"<<endl;
                b[i++].save();
                break;
            }
        }
        cout<<endl;
        cout<<"  Now the procedure of blood bank management system is completed  "<<endl;
        cout<<endl;
        cout<<"  Do you have any Query then contact with admin Namra"<<endl;
        cout<<endl;
        
    }
    return 0;
}

