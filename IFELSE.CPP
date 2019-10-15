#include<iostream.h>
#include<conio.h>
int main()
{system("cls");
int d;
float c,f;
cout<<"     *********>>>>>>>>>>>>>>Welcome to Temperature convertion<<<<<<<<******* ";
cout<<"\n 1.Farhenheit to Celsius";
cout<<"\n 2.Clesius to Farhenheit";
cout<<"\n wanna know how warmer is today in other scale?"<<"\n just choose the your convertion and POOF!, you have it"<<"\n So, picked it up, uh";
cout<<"\n enter: ";
cin>>d;
if (d == 1)
       { cout<<"\n"<<"I knew you were a celsius lover";
	 cout<<"\n tell me the temperature :";
	 cin>>f;
	 c=(f-32)/1.8;
	 cout<<"  KBOOM!! : "<<c;
       }
else
	{ cout<<"\n"<<"let me deduce, you're the scientific one, right";
	  cout<<"\n come on tell me up :";
	  cin>>c;
	  f=1.8*c+32;
	  cout<<" POOF!! :"<<f;
	}
cout<<" \n\n\n \n\n\n\n\n\n\n";
cout<<"                   CREDITS ";
cout<<"\n           created by SAMEER SAINI  ";
getch();
 return 0;
}
//yash mor
