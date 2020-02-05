#include<iostream>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<stdlib.h>
#include<sstream>
#include<windows.h>
#include<iomanip>
using namespace std;
COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left corner of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
class detail
{
    public:

void display()
{
    cout<<"\n\n\n\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\tCHANDUBHAI S PATEL UNIVERSITY OF TECHNOLOGY"<<endl;
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t       MINI PROJECT"<<endl;
    cout<<"\t\t\t\t\t\t\t HOSTEL MANAGEMENT SYSTEM"<<endl;
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\tMade by:"<<endl;
    cout<<"\t\t\t\t\t\t\t\tMANTHAN SHAH"<<endl;
    cout<<"\t\t\t\t\t\t\t\tNEHA SAJNANI"<<endl;
    cout<<"\t\t\t\t\t\t\t\tDAKSH SHAH"<<endl;
    cout<<"\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\tSubmitted to:"<<endl;
    cout<<"\t\t\t\t\t\t\t\tKRUTI MA'AM"<<endl;
     cout<<"\t\t\t\t\t\t\t\tSNEHA MA'AM"<<endl;


}


void fees_det()
{
    string a,b,c,d,e;
    int z,i,j,k;
    fstream f;
    f.open("d:\\project.txt",ios::in | ios::out);
    f.seekg(0,ios::beg);
    cout<<"Enter room no : ";
    cin>>a;
    cout<<"Enter name of student : ";
    cin>>b;
    while(f)
    {
        f>>c;

        if(c.compare(a)==0)
        {
            f>>c;

            f>>z;

            if(z==0)
            {
                for(i=0;i<3;i++)
                {
                   f>>c;

                   f>>c;

                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;
                       }
                       f>>c;
                       cout<<c;
                       f>>c;
                       cout<<c<<endl;

                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;

                     }
                   }
                }
                break;
            }
            else if(z==1)
            {

                for(i=0;i<2;i++)
                {
                   f>>c;

                   f>>c;

                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;

                       }
                       f>>c;
                       cout<<c;
                       f>>c;
                       cout<<c<<endl;

                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;

                     }
                   }

                }
                break;
            }
        }
            else if(z==2)
            {
                for(i=0;i<1;i++)
                {
                   f>>c;
                   f>>c;
                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;
                       }
                       f>>c;
                       cout<<c;
                       f>>c;
                       cout<<c<<endl;

                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;

                     }
                   }
                }
                break;
            }


        }
    }



void view()
{
   int a,i,flag=0,z,l;
    string b,c,f;

    int d;
    int e[3];
    for(i=0;i<3;i++)
    {
        e[i]=i;
    }
    //fstream enter;
    Q:cout<<"Enter the room no :";
    cin>>c;
    stringstream geek(c);
    geek>>l;
    if(l<301||l>310)
        {
            cout<<"please enter a correct room no"<<endl;
            if(getch())
            {
                system("cls");
            }
            goto Q;

        }
    //cout<<endl;
    fstream enter;
    enter.open("d://project.txt",ios::out|ios::in);
    enter.seekg(0,ios::beg);
    while(enter)
    {
        enter>>b;
        if(b.compare(c)==0)
        {
        flag=1;
        break;
        }

    }
    if (flag==1)
    {
        enter>>f;
        cout<<f;
        enter>>d;
        cout<<d;
        cout<<endl;
        cout<<endl;
        if(d==e[0])
        {
            for(a=0;a<3;a++)
            {
                for(z=0;z<5;z++)
                {enter>>f;
                cout<<f<<endl;
                }
                enter>>f;
                enter>>f;
                cout<<endl;
                cout<<endl;
            }
        }
        else if(d==e[1])
        {
            for(a=0;a<2;a++)
            {
                for(z=0;z<5;z++)
                {enter>>f;
                cout<<f<<endl;
                }
                enter>>f;
                enter>>f;
                cout<<endl;
                cout<<endl;
            }
        }
        else if (d==e[2])
        {
            for(a=0;a<1;a++)
            {
               for(z=0;z<5;z++)
                {enter>>f;
                cout<<f<<endl;
                }
                enter>>f;
                enter>>f;
                cout<<endl;
                cout<<endl;
            }
        }

    }
    enter.close();
}
};
class modify:public detail
{
public:



void new_add()
{
    string a,b,f,c,s,w,e,g;
    int i,j,k,h;
    cout<<"Enter new name : ";
    cin>>c;
    cout<<"Enter college id : ";
    cin>>w;
    cout<<"Enter mobile no : ";
    cin>>e;
    cout<<"Enter department : ";
    cin>>g;
    q:
    cout<<"Enter room no : ";
    cin>>b;
    fstream m("d://project.txt",ios::in|ios::out|ios::app);
    m.seekg(0,ios::beg);
    ofstream n("d://temp.txt");
    while(m)
    {
        m>>a;
        if(a.compare(b)==0)
        {
                n<<a<<endl;
                m>>f;
                n<<f<<endl;
                m>>h;
                if(h==0)
            {
                cout<<"No more beds are available in this room"<<endl;
                goto q;
            }
                h=h-1;
                n<<h<<endl;
                n<<"name:"<<endl<<c<<endl;
                n<<"college_id:"<<w<<endl;
                n<<"mobile_no:"<<e<<endl;
                n<<"Department:"<<g<<endl;
                n<<"Pending_fees:"<<endl;
                n<<"10000"<<endl;

        }
        else
        {
               n<<a<<endl;
        }
    }

m.close();
n.close();
ofstream m1("d://project.txt");
ifstream n1("d://temp.txt");
while(n1)
    {
        n1>>a;
        m1<<a<<endl;

    }
m1.close();
n1.close();

}


void det()
{
        string a,b,c,d,e,h,x,w;
    int z,i,j,k,l,m,o;
    fstream f;
    f.open("d:\\project.txt",ios::in | ios::out);
    f.seekg(0,ios::beg);
    fstream f1("d:\\temp3.txt",ios::out);
    cout<<"Enter room no : ";
    cin>>a;
    cout<<"Enter name of student : ";
    cin>>b;
    while(f)
    {
        f>>x;
        if(x.compare(a)==0)
        {
            f1<<x<<endl;
            f>>c;
            f1<<c<<endl;
            f>>z;
            o=z+1;
            f1<<o<<endl;
            if(z==0)
            {
                for(i=0;i<3;i++)
                {
                   f>>e;
                   f>>w;
                   if(w.compare(b)==0)
                   {
                       for(j=0;j<5;j++)
                       {
                           f>>c;
                       }
                       cout<<"The details of student is deleted successfully"<<endl;
                   }
                   else
                   {
                       f1<<e<<endl;
                       f1<<w<<endl;

                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;

                     }
                   }
                }
            }
            else if(z==1)
            {
                for(i=0;i<2;i++)
                {
                   f>>e;
                   f>>w;
                   if(w.compare(b)==0)
                   {
                       for(j=0;j<5;j++)
                       {
                           f>>c;
                       }
                       cout<<"The details of student is deleted successfully"<<endl;
                   }
                   else
                   {
                       f1<<e<<endl;
                       f1<<w<<endl;
                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;
                     }
                   }
                }
          }
            else if(z==2)
            {
                for(i=0;i<1;i++)
                {
                   f>>e;
                   f>>w;
                   if(w.compare(b)==0)
                   {
                       for(j=0;j<5;j++)
                       {
                           f>>c;

                       }
                       cout<<"The details of student is deleted successfully"<<endl;
                   }
                   else
                   {
                       f1<<e<<endl;
                       f1<<w<<endl;

                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;

                     }
                   }
                }
            }
        }
        else
        {
            f1<<x<<endl;
        }
    }
    f.close();
    f1.close();
    ofstream f2("d://project.txt");
    ifstream f3("d://temp3.txt");
    while (f3)
    {
        f3>>c;
        f2<<c<<endl;
    }
}

void fees_detmod()
{
    string a,b,c,d,e,h,x;
    int z,i,j,k,l,m;
    cout<<"Enter room no of student of which you want to pay fee : ";
    cin>>a;
    cout<<"Enter name of student : ";
    cin>>b;
    Z:cout<<"Enter the amount of fees you want pay : ";
    cin>>m;
    fstream f;
    f.open("d:\\project.txt",ios::in | ios::out);
    f.seekg(0,ios::beg);
    fstream f1("d:\\temp2.txt",ios::out);
    while(f)
    {
        f>>x;
        if(x.compare(a)==0)
        {
            f1<<x<<endl;
            f>>c;
            f1<<c<<endl;
            f>>z;
            f1<<z<<endl;
            if(z==0)
            {
                //f1<<x<<endl;
                for(i=0;i<3;i++)
                {
                   f>>c;
                   f1<<c<<endl;
                   f>>c;
                   f1<<c<<endl;
                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;
                           f1<<c<<endl;
                       }
                       f>>c;
                       f1<<c<<endl;
                       //cout<<c;
                       f>>h;
                       stringstream geek(h);
                       geek>>l;
                       if(l<m)
                       {
                          cout<<"please enter a valid amount of fees"<<endl;
                          goto Z;

                       }
                       l=l-m;
                       f1<<l<<endl;
                       cout<<c;
                       cout<<l<<endl;
                       cout<<"Your fees has been payed sucessfully"<<endl;


                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;

                     }
                   }
                }

            }
            else if(z==1)
            {
                //f1<<x<<endl;
                for(i=0;i<2;i++)
                {
                   f>>c;
                   f1<<c<<endl;
                   f>>c;
                   f1<<c<<endl;
                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;
                           f1<<c<<endl;
                       }
                       f>>c;
                       f1<<c<<endl;
                       //cout<<c;
                       f>>h;
                       stringstream geek(h);
                       geek>>l;
                       if(l<m)
                       {
                          cout<<"please enter a valid amount of fees"<<endl;
                          goto Z;

                       }
                        l=l-m;
                       f1<<l<<endl;
                       cout<<c;
                       cout<<l<<endl;
                       cout<<"Your fees has been payed sucessfully"<<endl;


                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;

                     }
                   }
                }
                //break;
          }
            else if(z==2)
            {
                for(i=0;i<1;i++)
                {
                   f>>c;
                   f1<<c<<endl;
                   f>>c;
                   f1<<c<<endl;
                   if(c.compare(b)==0)
                   {
                       for(j=0;j<3;j++)
                       {
                           f>>c;
                           f1<<c<<endl;
                       }
                       f>>c;
                       f1<<c<<endl;
                       //cout<<c;
                       f>>h;
                       stringstream geek(h);
                       geek>>l;
                        if(l<m)
                       {
                          cout<<"please enter a valid amount of fees"<<endl;
                          goto Z;

                       }
                       l=l-m;
                       f1<<l<<endl;
                       cout<<c;
                       cout<<l<<endl;
                       cout<<"Your fees has been payed successfully"<<endl;


                   }
                   else
                   {

                     for(k=0;k<5;k++)
                     {
                       f>>c;
                       f1<<c<<endl;

                     }
                   }
 0               }

            }


        }
        else
        {
            f1<<x<<endl;
        }
    }
    f.close();
    f1.close();

    ofstream f2("d://project.txt");
    ifstream f3("d://temp2.txt");

    while(f3)
          {
            f3>>c;
            f2<<c<<endl;
          }
}
};
int main()
{
    system("color d3");
    modify m;
    cout<<"\n\n\n\n\n\n";
    gotoxy(30,13);
    cout<<"\n";
    cout<<"\t\t\t\t*****************************************************************"<<endl;
    cout<<"\t\t\t\t*    rrrrrrrrrrrrrrrrrrrr             ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*    rrrrrrrrrrrrrrrrrrrr             ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*    rrrrr          rrrrr             ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*    rrrrr          rrrrr             cccccc                    *"<<endl;
    cout<<"\t\t\t\t*    rrrrr          rrrrr             cccccc                    *"<<endl;
    cout<<"\t\t\t\t*    rrrrrrrrrrrrrrrrrrrr             cccccc                    *"<<endl;
    cout<<"\t\t\t\t*    rrrrrrrrrr                       cccccc                    *"<<endl;
    cout<<"\t\t\t\t*    rrrrr    rrrrrr                  cccccc                    *"<<endl;
    cout<<"\t\t\t\t*    rrrrr      rrrrrr                ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*    rrrrr        rrrrrr              ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*    rrrrr           rrrrrr           ccccccccccccccccccccccc   *"<<endl;
    cout<<"\t\t\t\t*****************************************************************"<<endl;
    cout<<"\t\t\t\t                WELCOME TO ROYAL CARE BOYS HOSTEL               "<<endl;
    if(getch())
        {
            system("cls");
        }
    while(1)
    {
    q:cout<<"\t\t\t\t\t\t\t\tMAIN MENU"<<endl;
    gotoxy(20,5);
    cout<<"1.Details of rooms"<<endl;
    gotoxy(20,7);
    cout<<"2.New admission"<<endl;
    gotoxy(20,9);
    cout<<"3.Delete admission"<<endl;
    gotoxy(20,11);
    cout<<"4.View fees status"<<endl;
    gotoxy(20,13);
    cout<<"5.pay fees"<<endl;
    gotoxy(20,15);
    cout<<"6.Exit"<<endl;
    int i;
    gotoxy(20,17);
    cout<<"Enter number of the task you want to perform:";
    cin>>i;
    if(getch())
        {
            system("cls");
        }
    switch(i)
    {
    case 1:
        m.view();
        if(getch())
        {
            system("cls");
        }
        break;
    case 2:
        m.new_add();
        if(getch())
        {
            system("cls");
        }
        break;
    case 3:
        m.det();
        if(getch())
        {
            system("cls");
        }
        break;
    case 4:
        m.fees_det();
        if(getch())
        {
           system("cls");
        }
        break;
    case 5:
        m.fees_detmod();
        if(getch())
        {
            system("cls");
        }
        break;
    case 6:
        m.display();
        if(getch())
        {
            exit(0);
        }

    default:
        cout<<"Please enter a valid no:"<<endl;
        if(getch())
        {
            system("cls");
        }
        goto q;
        break;

    }
    }
    system("color f2");
    return 0;
}
