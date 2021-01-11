#include<fstream>
#include<string.h>
#include<iostream>
#include<conio.h>
using namespace std;
class cricket
{
	public:
		char team[100];
		int j;
		char name[10];
		int a;
		void add();
		void input();
		void Delete();
		void DEMO()
		{
	cout<<"Welcome to IPL-2017"<<"\n";
	cout<<"1.Team names"<<"\n";
	cout<<"2.Tournament shedule"<<"\n";
	cout<<"3.Tournament result"<<"\n";
	cout<<"4.Team members"<<"\n";
	cout<<"5.Tornament record names"<<"\n";
	cout<<"For adding a team"<<"\n";
	cout<<"<< For deleting a team"<<"\n";
	cout<<"What you want to do ???"<<"\n";
	cin>>j;
	if(j==1)
	{
    {
		fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		int p;
       cout<<"\n"<<"enter 1 for main menu:"<<"\n";
       cin>>p;
       if(p==1)
         {
         DEMO();
        }
         else
        {
    	cout<<"please enter valid data"<<"\n";
     	}
}
	    else if(j==2)
	    {
		   {
				fstream infile;
		infile.open("tsd.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				int p;
        cout<<"\n"<<"Enter_1_for_main_menu:"<<"\n";
        cin>>p;
        if(p==1)
        {
         DEMO();
         }
         else
         {
    	cout<<"Please_enter_valid_data"<<"\n";
	    }
	    }
	    else if(j==3)
	    {
		   {
				fstream infile;
		infile.open("trd.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
				int p;
   cout<<"\n"<<"Enter_1_for_main_menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
    else
    {
    	cout<<"Please_enter_valid_data"<<"\n";
	}
	}
	else if(j==4)
	{
		{
				fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		cout<<"Enter the team number you want to see:"<<endl;
		cin>>a;
		if(a==1)
		{
			fstream infile;
		infile.open("DC.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==2)
			{
			fstream infile;
		infile.open("MI.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==3)
			{
			fstream infile;
		infile.open("CSK.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==4)
			{
			fstream infile;
		infile.open("RCB.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else if(a==5)
			{
			fstream infile;
		infile.open("CT.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
		else
		{
			cout<<"Please enter valid data"<<"\n";
		}
				int p;
   cout<<"\n"<<"Pnter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
    else
    {
    	cout<<"Please enter valid data"<<"\n";
	}
		}//players information rasuko
	else if(j==5)
	{
		{
			fstream infile;
		infile.open("RECORD.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();//record rasuko
		}
	int p;
   cout<<"\n"<<"Pnter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
    else
    {
    	cout<<"Please enter valid data"<<"\n";
	}
	}
	else if(j==6)
	{
		{
		add();
	}
		int p;
   cout<<"\n"<<"Enter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
    else
    {
    	cout<<"Please enter valid data"<<"\n";
	}
}
	else if(j==7)
{
	{
		Delete();
	}
		int p;
   cout<<"\n"<<"Enter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
    else
    {
    	cout<<"Please enter valid data"<<"\n";
	}
}
	else
	{
		{
		cout<<"Please enter valid data"<<"\n";
	    }
	int p;
   cout<<"\n"<<"Enter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }}}
};

void cricket::input()
{
	cout<<"Enter new team name:"<<"\n";
	char team[100];
	cin>>team;
	{
				fstream infile;
		infile.open("dtn.txt",ios::in);
		string line;
		while(infile.good())
		{
			getline(infile,line);
			cout<<line<<endl;
		}
		infile.close();
		}
	cout<<"New team added to the file"<<"\n";
	cout<<"6.\t\t"<<team;
}
void cricket::add()
{
	{
	fstream fil;
	cricket fileobj;
	char ch='y';
	fil.open("display.txt",ios::app| ios::out);
	while(ch=='y' || ch =='Y')
	{
		fileobj.input();
		fil.write((char*)&fileobj, sizeof(fileobj));
		exit(0);
	}
	fil.close();
    }
	int p;
    cout<<"\n"<<"enter 1 for main menu:"<<"\n";
    cin>>p;
    if(p==1)
    {
    DEMO();
    }
}
void cricket::Delete()
{
  string line, name;
  cout << "Please Enter the name of record you want to delete: ";
  cin >> name;
  ifstream myfile;
  ofstream temp;
  myfile.open("CSK.txt");
  temp.open("temp.txt");
  while (getline(myfile, line))
  {
    if (line != name)
      temp << line << endl;
  }
  cout <<name<< "The record with the name was deleted if it exsisted" << endl;
  myfile.close();
  temp.close();
  remove("CSK.txt");
  rename("temp.txt", "CSK.txt");
}		

int main()
{  
	cricket c;
	c.DEMO();
}

