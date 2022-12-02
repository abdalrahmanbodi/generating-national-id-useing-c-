#include<iostream>
#include<string> //strings
#include<fstream>//files
#include<cstdlib>//exit function
#include<sstream>//stringstream to convert num to string and string to num

using namespace std;
//CLASS CONTAINS ALL INFORMATION ABOUT THE CUSTOMER
class customer
{
private:
    string first_name;
    string last_name;
    string birth_date;
    string mother_name;
    string nationality;
    string gender;
    string religion;
    string status;
    string place_of_birth;
    string residence;
    string work;
    unsigned long long int  national_id;
    unsigned long long int  father_id;
    unsigned long long int  mother_id;
    string nnational_id;
    string n_id;
    string m_id;
    string f_id;
    string expiration_date;

public:

//OPERATOR OVERLOADING
    friend ostream& operator <<(ostream &outs, const customer &o){
    outs<<"\n\n\n\n\n\t\t\t\t\t\t  THANKS\n"<<"\t\t\t\t\t    MR: "<<o.first_name<<" "<<o.last_name<<endl;
    return outs;
    }
//DEAFAULT CONSTRUCTOR
    customer()
    {
    first_name="";
    last_name="";
    mother_name="";
    nationality="";
    gender="";
    religion="";
    status="";
    place_of_birth="";
    residence="";
    work="";
    national_id=0;
    father_id=0;
    mother_id=0;
    }
//ALL SETERS & GETTERS FOR THE PRIVATE ATTRIBUTES
    void set_first_name(string a){
        first_name=a;
    }
    string get_first_name(){
        return first_name;
    }

    void set_last_name(string b){
        last_name=b;
    }
    string get_last_name(){
        return  last_name;
    }


    void set_mother_name(string x){
        mother_name=x;
    }
    string get_mother_name(){
        return  mother_name;
    }

    void set_nationality(string c){
        nationality=c;
    }
    string get_nationality(){
        return nationality;
    }

    void set_gender(){
        int num;
        cout<<"(press 1 OR 2) "<<endl;
        cout<<"\t1.Male"<<endl;
        cout<<"\t2.Female"<<endl;
        cin>>num;
        if(num==1){
            gender="Male";
         }
        else if(num=2){
            gender="Female";
        }
        else{
            cout<<"INVALID INPUT(ERROR)"<<endl;
        }
    }

    string get_gender(){
        return gender;
    }

     void set_status(){
            int num;
            cout<<"(press 1 OR 2) "<<endl;
            cout<<"\t1.Single"<<endl;
            cout<<"\t2.Married"<<endl;
            cin>>num;
            if(num==1){
                status="Single";
            }
            else if(num=2){
                status="Married";
            }
            else{
                cout<<"INVALID INPUT(ERROR)"<<endl;
            }
    }

    string get_status(){
        return status;
    }

    void set_religion(){
        int type;
        cout<<"press 1 OR 2 OR 3 "<<endl;
        cout<<"\t1.Muslim"<<endl;
        cout<<"\t2.christian"<<endl;
        cout<<"\t3.other"<<endl;
        cin>>type;
        if(type==1){
            religion="Muslim";
        }
        else if(type==2){
            religion="christian";
        }
        else if(type==3){
            religion="other";
        }
    }

    string get_religion(){
        return religion;
    }

    void set_place_of_birth(string f){
        place_of_birth=f;
    }

    string get_place_of_birth(){
        return place_of_birth;
    }

    void set_residence(string g){
        residence=g;
    }
    string get_residence(){
        return residence;
    }
    void set_national_id(unsigned long long int  h){
        national_id=h;
    }
    unsigned long long int  get_national_id(){
        return national_id;
    }

    void set_father_id(unsigned long long int  I){
        father_id=I;
    }
    unsigned long long int  get_father_id(){
        return father_id;
    }

    void set_mother_id(unsigned long long int  j){
        mother_id=j;
    }
    unsigned long long int  get_mother_id(){
        return mother_id;
    }

    void set_work(string y){
        work=y;
    }
    string get_work(){
        return work;
    }

//SHOWING BIRTH CITIFICATE INFORMATION TO THE USER ON SCREEN
    void showdata_1()
    {
        cout<<"\n\n\t\t\t\t\t  National ID : "<<n_id;
        cout<<"\n\n\t\t\t  _________________________"<< "Birth Data"<<"_____________________________";
        cout<<"\n\t\t          |                                                              |";
        cout<<"\n\t\t\t  |\t\t\t   "<<first_name<< "\t\t\t         |";
        cout<<"\n\t\t          |"<<"Religion :"<<religion<<"\t\t\t  "<<"Nationality :"<<nationality<<"  |";
        cout<<"\n\t\t          |"<<"Gender :"<<gender<<"\t\t\t        "<<"Place of Birth :"<<place_of_birth<<" |";
        cout<<"\n\t\t          |                                                              |";
        cout<<"\n\t\t          |                        \t\t  "<<"Birth Date :"<<birth_date<<" |";
        cout<<"\n\t\t          |                                                              |";
        cout<<"\n\t\t\t  |________________________"<< "Father Data"<<"___________________________|";
        cout<<"\n\t\t          |                                                     "<<last_name<<"    |";
        cout<<"\n\t\t          |                                                              |";
        cout<<"\n\t\t          |                                          "<<"Religion :"<<religion<<"    |";
        cout<<"\n\t\t          |"<<"ID :"<<f_id<<"                                            |";
        cout<<"\n\t\t          |                                     "<<"nationality :"<<nationality<<"    |";
        cout<<"\n\t\t\t  |________________________"<< "Mother Data"<<"___________________________|";
        cout<<"\n\t\t          |                                                     "<<mother_name<<"    |";
        cout<<"\n\t\t          |                                                              |";
        cout<<"\n\t\t          |                                          "<<"Religion :"<<religion<<"    |";
        cout<<"\n\t\t          |"<<"ID :"<<m_id<<"                                            |";
        cout<<"\n\t\t          |                                     "<<"nationality :"<<nationality<<"    |";
        cout<<"\n\t\t\t  |______________________________________________________________|";
        cout<<endl<<endl<<endl;

    }
//READING BIRTH CIRTICATE DATA FROM FILE
    void raed_1_from_file()
    {
        ifstream inFile;
        inFile.open("birth_certificate.dat");
        if( inFile.is_open() )
        {
                inFile>>n_id;
                inFile>>first_name;
                inFile>>last_name;
                inFile>>birth_date;
                inFile>>mother_name;
                inFile>>nationality;
                inFile>>gender;
                inFile>>religion;
                inFile>>place_of_birth;
                inFile>>f_id;
                inFile>>m_id;
                /*getline( inFile , n_id );
                getline( inFile , first_name );
                getline( inFile , last_name );
                getline( inFile , birth_date );
                getline( inFile , mother_name );
                getline( inFile , nationality );
                getline( inFile , gender );
                getline( inFile , religion );
                getline( inFile , place_of_birth );
                getline( inFile , f_id );
                getline( inFile , m_id );*/
                showdata_1();
         }
        else
        {
            cout << "Fail to open birth_certificate" << endl;
        }

    }
//SHOWING ID CARD INFORMATION TO THE USER ON SCREEN
//USED IN CHOICE 3 (Renewal of a national id card)
    void showdata_2(){

        cout<<"\n\t\t\t\t\t\t\t  "<<"Front";
        cout<<"\n\n\t\t\t\t   ________________________________________________";
        cout<<"\n\t\t\t\t   |                      "<<"Arab Republic Of Egypt"<<"   |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   | _______                      "<<first_name<<"      |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |      |                          "<<last_name<<"       |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |      |                      "<<residence<<"    |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |______|                     "<<nnational_id<<"   |";
        cout<<"\n\t\t\t\t   |_______________________________________________|";
        cout<<endl;

        stringstream geek(expiration_date);//to convert string to int
        int new_expiration_date = 0;
        geek >> new_expiration_date;

        cout<<"\n\t\t\t\t\t\t\t  "<<"Back";
        cout<<"\n\n\t\t\t\t   ________________________________________________";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |    "<<new_expiration_date+7<<"     \t         "<<nnational_id<<"    |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |                                   "<<work<<"     |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |  \t" <<status << "  \t" <<religion<< "   \t " <<gender<< "      |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |                     "<<"Expiration Date :"<<new_expiration_date+14<<"\t   |";
        cout<<"\n\t\t\t\t   |_______________________________________________|";
        cout<<endl<<endl;

    }
//READING ID CARD DATA FROM FILE
    void raed_2_from_file()
    {
        ifstream inFile;
        inFile.open("ID_CARD.dat");
        if( inFile.is_open())
        {   inFile>>nnational_id;
            inFile>>first_name;
            inFile>>last_name;
            inFile>>residence;
            inFile>>work;
            inFile>>gender;
            inFile>>religion;
            inFile>>status;
            inFile>>expiration_date;
            /*getline( inFile , nnational_id );
            getline( inFile , first_name );
            getline( inFile , last_name );
            getline( inFile , residence );
            getline( inFile , work );
            getline( inFile , gender );
            getline( inFile , religion );
            getline( inFile , status );
            getline( inFile , expiration_date );*/
            showdata_2();
        }
        else
        {
            cout << "Fail to open ID_CARD" << endl;
        }

    }

};
//CLASS FOR CREATING THE MENU LIST & INTRO SCREEN AND SHOWING THEM TO THE USER
class service
{
public:
//LINKED LIST TO DISPLAY MENU
   struct node
   {
        string data;
        int ddata;
        node*next;
   };

   node*head=NULL;
   node*last;

   void insert(string new_data){
       node*new_node=new node;
       new_node->data=new_data;
        if(head==NULL)
        {
            new_node->next=head;
            head=new_node;
        }
        else
        {
            node*last=head;
            while(last->next!=NULL){
                last=last->next;
            }
            last->next=new_node;
            new_node->next=NULL;
       }
    }

    void display(){
        node*current_node;
        if(head==NULL){
            cout<<"the list is empty"<<endl;
        }
        else{
            current_node=head;
            while(current_node!=NULL)
            {
                cout<<current_node->data<<endl;
                current_node=current_node->next;
            }
        }
    }

    void delete_begin(){
        node*temp=head;
        head=head->next;
        delete(temp);
    }

    void delete_end(){
        node*ptr=head;
        while(ptr->next->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=NULL;
    }

   void delete_middle(int key)
{
    node*temp = head;
    bool foundKey = false;

    while(temp->next != NULL)
    {
        if (temp->next->ddata==key)
        {
            foundKey = true;
            break;
        }
        temp = temp->next;
    }

    if (foundKey)
    {
        temp->next = temp->next->next;
    }
    else
    {
        cout << "search key not found" << endl;
    }
}
//INTRO SCREEN CODE
void intro()
{
    cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"\n\n\n\t\t\t\t\t\t  Civil Registry";
	cout<<"\n\n\t\t\t\t\t\t     PROJECT";
    cout<<"\n\n\t\t\t\t\t\t  DR:Ahmed Seif";
	cout<<"\n\n\t\t\t\t\t  University : Ahram canadian";
	cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t  Press Enter TO Continue....";
	//BET5ALI EL INTRO YEFDAL 3AL SHAHA LE8AYT AMA ADOS ENTER MN 8ERHA BYMSHI 3LA TOOL
	cin.get();
}


};

class request : public customer//INHERITANCE FROM CUSTOMER CLASS
{
public:

//FUNCTIONS FOR SETTING UP THE DATE
    string ddate="";

    bool isLeap(int year)//SANA KABESA W BASETA
    {
    // Return true if year is a multiple pf 4 and not multiple of 100. OR year is multiple of 400.
    return (((year % 4 == 0) &&
             (year % 100 != 0)) ||
             (year % 400 == 0));
    }

    bool isValidDate(int d, int m, int y)
    {
        // Handle February month with leap year
        if (m == 2)
        {
            if (isLeap(y)){
                return (d <= 29);
            }
            else {
                return (d <= 28);
            }
        }

        // Months of April, June, Sept and Nov must have number of days less than or equal to 30
        if (m == 4 || m == 6 ||
            m == 9 || m == 11){
                return (d <= 30);
            }
        return true;
    }

// THE MAIN FUNCTION FOR DATE
   void get_date(){

        cout<<"\n\tEnter day of birth :";
        int i_day;
        cin>>i_day;
        if( i_day >= 1 && i_day <= 31){}
        else{
            cout<<"\n\tINPUT ERROR"<<endl;
            exit(1);
        }

        cout<<"\n\tEnter month of birth :";
        int i_month;
        cin>>i_month;
        if(i_month >= 1 && i_month <= 12){}
        else{
            cout<<"\n\tINPUT ERROR"<<endl;
            exit(1);
        }

        cout<<"\n\tEnter year of birth :";
        int year;
        int century;
        cin>>year;

        string final_day = "";
        string final_month = "";

        if (year > 0)
    	{
            stringstream s_year;// function from sstream  to convert num to string
            s_year<<year;
            string final_year;
            s_year>>final_year;

	        if (isValidDate(i_day, i_month, year) )
			{
			    if( i_day > 0 && i_day < 10)
                {
                    stringstream s_day;
                    s_day<<i_day;
                    string day;
                    s_day>>day;
                    final_day = "0" + day;
                }
                else
                {
                    stringstream s_day;
                    s_day<<i_day;
                    string day;
                    s_day>>day;
                    final_day = day;
                }

			    if( i_month > 0 && i_month < 10)
                {
                    stringstream s_month;
                    s_month<<i_month;
                    string month;
                    s_month>>month;
                    final_month = "0" + month;
                }
                else
                {
                    stringstream s_month;
                    s_month<<i_month;
                    string month;
                    s_month>>month;
                    final_month = month;
                }

		        if(final_year[0]=='1'){
		            century=2;
		        }
		        else if(final_year[0]=='2'){
		            century=3;
		        }

//SUB STRING TO CUT THE LAST TWO NUMBERS IN YEAR TO PUT THEM IN NATIONAL ID
				string r = final_year.substr(2, 2);
	    	    ddate=final_day+ "/" + final_month + "/" + final_year;

	    	   //REMOVEING THE OLD FILE BEFORE OPENING A NEW ONE
                remove( "birth_certificate.dat" );
                ofstream out_stream;
                out_stream.open("birth_certificate.dat",ios::binary|ios::app);//app:append / binary:3ashan elkalam yeb2a english
                out_stream <<century;
                out_stream <<r;
                out_stream <<final_month;
                out_stream <<final_day;
                out_stream.close();

	        }
	        else{
		           cout<<"\n\tInvalid Date"<<endl;
		           exit(1);
		        }
	    }

	    else
	    {
	    	cout<<"\n\tINPUT ERROR"<<endl;
	    	exit(1);
		}
	}
//THE MAIN FUNCTION FOR PLACE OF BIRTH
    string town;
    void city(){

    cout<<"Choose your city"<<endl;
    int x[2]={0};
    int city;

    string govern[28]={"1- Cairo","2- Alexandria","3- Portsaid","4- Suez","5- Damietta","6- Dakahlia","7- Eastern","8- Qalyubia","9- Kafrelsheikh","10- Western",
	"11- Monufia","12- Bahera","13- Ismailia","14- Giza","15- Banisweif","16- Fayoum","17- Minya","18- Asyut","19- Sohag","20- Qena","21- Aswan","22- Luxor","23- Redsea","24- Newvalley",
	"25- Matrouh","26- Northsinai","27- Southsinaa","28- Out Side"};
	for(int i =0;i<28;i++)
	{
		cout << govern[i]<<"\n";
	}

	cin>>city;

    if(city==1)
    {
        town="Cairo";
        x[0]=0;
        x[1]=1;
    }
    else if (city== 2)
    {
        town=" Alexandria";
        x[0]=0;
        x[1]=2;
    }
    else if (city==3)
    {
        town="Portsaid";
        x[0]=0;
        x[1]=3;
	}
	 else if (city==4)
    {
        town="Suez";
        x[0]=0;
        x[1]=4;
	}
	else if (city==5)
    {
        town="Damietta";
        x[0]=1;
        x[1]=1;
	}
	else if (city==6)
    {
        town="Dakahlia";
        x[0]=1;
        x[1]=2;
	}
	else if (city==7)
    {
        town="Eastern";
        x[0]=1;
        x[1]=3;
	}
	else if (city==8)
    {
        town="Qalyubia";
        x[0]=1;
        x[1]=4;
	}
	else if (city==9)
    {
        town="Kafrelsheikh";
        x[0]=1;
        x[1]=5;
	}
	else if (city==10)
    {
        town="Western";
        x[0]=1;
        x[1]=6;
	}
	else if (city==11)
    {
        town="Monufia";
        x[0]=1;
        x[1]=7;
	}
	else if (city==12)
    {
        town="Bahera";
        x[0]=1;
        x[1]=8;
	}
	else if (city==13)
    {
        town="Ismailia";
        x[0]=1;
        x[1]=9;
	}
	else if (city==14)
    {
        town="Giza";
        x[0]=2;
        x[1]=1;
	}
	else if (city==15)
    {
        town="Banisweif";
        x[0]=2;
        x[1]=2;
	}
	else if (city==16)
    {
        town="Fayoum";
        x[0]=2;
        x[1]=3;
	}
	else if (city==17)
    {
        town="Minya";
        x[0]=2;
        x[1]=4;
	}
	else if (city==18)
    {
        town="Asyut";
        x[0]=2;
        x[1]=5;
	}
	else if (city==19)
    {
        town="Sohag";
        x[0]=2;
        x[1]=6;
	}
	else if (city==20)
    {
        town="Qena";
        x[0]=2;
        x[1]=7;
	}
	else if (city==21)
    {
        town="aswan";
        x[0]=2;
        x[1]=8;
	}
	else if (city==22)
    {
        town="luxor";
        x[0]=2;
        x[1]=9;
	}
	else if (city==23)
    {
        town="Redsea";
        x[0]=3;
        x[1]=1;
	}
	else if (city==24)
    {
        town="Newvalley";
        x[0]=3;
        x[1]=2;
	}
	else if (city==25)
    {
        town="Matrouh";
        x[0]=3;
        x[1]=3;
	}
		else if (city==26)
    {
        town="Northsinai";
        x[0]=3;
        x[1]=4;
	}
	else if (city==27)
    {
        town="Southsinaa";
        x[0]=3;
        x[1]=5;
	}
	else if (city==28)
	{
	    town="outside";
		x[0]=8;
		x[1]=8;
	}
ofstream out_stream;
out_stream.open("birth_certificate.dat",ios::binary|ios::app);
out_stream <<x[0];
out_stream <<x[1];
out_stream.close();

    }


void gender(string type){
    int z[5]={0};
    if(type=="Male"){
        z[0]=0;
        z[1]=0;
        z[2]=4;
        z[3]=1;
        z[4]=1;
    }
    else{
        z[0]=0;
        z[1]=0;
        z[2]=3;
        z[3]=2;
        z[4]=1;
        }

ofstream out_stream;
out_stream.open("birth_certificate.dat",ios::binary|ios::app);
out_stream <<z[0];
out_stream <<z[1];
out_stream <<z[2];
out_stream <<z[3];
out_stream <<z[4]<<endl;
out_stream.close();

    }

//FUNCTION IF THE USER CHOOSE 1 IN MENU
    void choice_1(){

        customer obj2;
        request obj4;
        string fname ;
        string lname ;
        string mname ;
        string national;
        string type ;
        string diana;
        string city;
        string rasidence ;
        unsigned long long int f_id=0;
        unsigned long long int m_id=0;

        cout<<"\n\tEnter your first name : ";
        cin>>fname;
        obj2.set_first_name(fname);

        cout<<"\n\tEnter your last name : ";
        //getline(cin,lname);
        cin>>lname;
        obj2.set_last_name(lname);

        cout<<"\n\tEnter father's id :";
        cin>>f_id;
        obj2.set_father_id(f_id);

        obj4.get_date();

        cout<<"\n\tEnter your mother's name :";
        cin>>mname;
        // getline(cin,mname);
        obj2.set_mother_name(mname);

        cout<<"\n\tEnter mother's id :";
        cin>>m_id;
        obj2.set_mother_id(m_id);

        cout<<"\n\tEnter your nationality : ";
        cin>>national;
        obj2.set_nationality(national);

        cout<<"\n\tEnter your gender : ";
        obj2.set_gender();
        type=obj2.get_gender();

        cout<<"\n\tEnter your religion : ";
        obj2.set_religion();
        diana=obj2.get_religion();

        cout<<"\n\tEnter your place of birth : ";
        obj4.city();
        obj4.set_place_of_birth(city);

        gender(type);


//OPENNING FILE TO WRITE IN IT
        ofstream out_stream;
        out_stream.open("birth_certificate.dat",ios::binary|ios::app);
//WRITEING IN THE FILE
        out_stream << obj2.get_first_name()<<endl;
        out_stream << obj2.get_last_name()<<endl;
        out_stream << obj4.ddate<<endl;
        out_stream << obj2.get_mother_name()<<endl;
        out_stream << obj2.get_nationality()<<endl;
        out_stream << obj2.get_gender()<<endl;
        out_stream << obj2.get_religion()<<endl;
        out_stream << obj4.town<<endl;
        out_stream << obj2.get_father_id()<<endl;
        out_stream << obj2.get_mother_id()<<endl;
        out_stream << "======================"<<endl;
//CLOSEING THE FILE
        out_stream.close();

}



};
//FUNCTION IF THE USER CHOOSE 2 IN MENU
    void choice_2(){
//DELETING THE OLD FILE BEFORE CREATING THE NEW ONE
        remove( "ID_CARD.dat" );

        string fname="";
        string lname="";
        string rasidence = "";
        unsigned long long int id=0;
        string work="";
        string type = "";
        string diana = "";
        string status="";
        int Release_Date=0;
        int expiration_date=0;


        customer obj3;
        cout<<endl<<endl<<endl;

        cout<<"\n\tEnter your national id :";
        cin>>id;
        obj3.set_national_id(id);

        cout<<"\n\tEnter your first name : ";
        cin>>fname;
        obj3.set_first_name(fname);

        cout<<"\n\tEnter your last name : ";
        //getline (cin, lname);
        cin>>lname;
        obj3.set_last_name(lname);

        cout<<"\n\tEnter your Place of residence :";
        cin>>rasidence;
        obj3.set_residence(rasidence);

        cout<<"\n\tEnter your work :";
        cin>>work;
        obj3.set_work(work);

        cout<<"\n\tEnter your gender : ";
        obj3.set_gender();
        type=obj3.get_gender();

        cout<<"\n\tEnter your religion : ";
        obj3.set_religion();
        diana=obj3.get_religion();

        cout<<"\n\tEnter your status :";
        obj3.set_status();
        status=obj3.get_status();

        cout<<"\n\tEnter the Release year :";
        cin>>Release_Date;
        expiration_date=Release_Date+7;
//OPENNING FILE TO WRITE IN IT
        ofstream out_stream;
        out_stream.open("ID_CARD.dat");
//WRITEING IN THE FILE
        out_stream << obj3.get_national_id()<<endl;
        out_stream << obj3.get_first_name()<<endl;
        out_stream << obj3.get_last_name()<<endl;
        out_stream << obj3.get_residence()<<endl;
        out_stream << obj3.get_work()<<endl;
        out_stream << obj3.get_gender()<<endl;
        out_stream << obj3.get_religion()<<endl;
        out_stream << obj3.get_status()<<endl;
        out_stream << Release_Date<<endl;
//CLOSEINE THE FILE
        out_stream.close();
        system("cls");//CLEAR SCREEN

//DISPLAYING THE ID CARD TO THE USER ON SCREEN
        cout<<"\n\t\t\t\t\t\t\t  "<<"Front";
        cout<<"\n\n\t\t\t\t   ________________________________________________";
        cout<<"\n\t\t\t\t   |                      "<<"Arab Republic Of Egypt"<<"   |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   | _______                      "<<obj3.get_first_name()<<"      |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |      |                          "<<obj3.get_last_name()<<"       |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |      |                      "<<obj3.get_residence()<<"    |";
        cout<<"\n\t\t\t\t   | |      |                                      |";
        cout<<"\n\t\t\t\t   | |______|                     "<<obj3.get_national_id()<<"   |";
        cout<<"\n\t\t\t\t   |_______________________________________________|";
        cout<<endl;

        cout<<"\n\t\t\t\t\t\t\t  "<<"Back";
        cout<<"\n\n\t\t\t\t   ________________________________________________";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |    "<<Release_Date<<"     \t         "<<obj3.get_national_id()<<"    |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |                                   "<<obj3.get_work()<<"     |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |  \t" <<obj3.get_status() << "  \t" <<obj3.get_religion()<< "   \t " <<obj3.get_gender()<< "      |";
        cout<<"\n\t\t\t\t   |                                               |";
        cout<<"\n\t\t\t\t   |                     "<<"Expiration Date :"<<expiration_date<<"\t   |";
        cout<<"\n\t\t\t\t   |_______________________________________________|";
        cout<<endl<<endl;

        }

int main()
{//OBJECTS FROM CLASSES TO USE IN MAIN
    service obj[2];
    customer arr[5];//ARRAY OF OBJECT

//DISPLAYING INTRO ON SCREEN
    obj[1].intro();

    system("cls");//CLEAR SCREAN
//DISPLAYING THE MENU ON SCREEN TO THE USER
    cout<<"\n\t Choose a service :"<<endl;
    obj[0].insert("\n\n\n\n\t\t\t\t\t 1- Obtaining a birth certificate.");
    obj[0].insert("\n\n\t\t\t\t\t 2- Obtaining a national id card.");
    obj[0].insert("\n\n\t\t\t\t\t 3- Renewal of a national id card.");
    obj[0].insert("\n\n\t\t\t\t\t 4- Exit.");
    obj[0].display();

    while(1)//INFINITE LOOP
        {
        int choice;
        cin>>choice;
        system("cls");
//THE FIST CHOICE IN THE MENU
        if(choice==1){

            request x;
            x.choice_1();
            system("cls");

            arr[0].raed_1_from_file();

            int n;
            cout<<"Return to main menu (press 1 OR any key to exit)"<<endl;
            cin>>n;
            if(n==1){
                system("cls");//CLEAR SCREAN
                obj[0].display();
            }
            else{
                exit(1);
            }
        }

//THE SECOND CHOICE IN THE MENU
        else if(choice==2){
            choice_2();
            int n;
            cout<<"Return to main menu (press 1 OR any key to exit)"<<endl;
            cin>>n;
            if(n==1){
                system("cls");
                obj[0].display();
            }
            else{
                exit(1);
            }
        }

//THE THIRD CHOICE IN THE MENU
        else if(choice==3){

            arr[0].raed_2_from_file();
            int n;
            cout<<"Return to main menu (press 1 OR any key to exit)"<<endl;
            cin>>n;
            if(n==1){
                system("cls");
                obj[0].display();
            }
            else{
                exit(1);
            }
        }

//THE FORTH CHOICE IN THE MENU
        else if(choice==4){
            cout<<endl<<endl<<endl<<endl<<endl;
            cout<<"                                  "<<arr[0];
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            exit(1);
        }

//IF THE USER ENTERED ANY THING ELSE
        else{
            cout<<"\t\t\t\t\t!!!Please choose from the list!!!"<<endl;
            obj[0].display();
        }
    }
    return 0;
};
