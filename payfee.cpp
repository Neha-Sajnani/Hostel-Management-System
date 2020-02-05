#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include<sstream>
using namespace std;
void fees_det()
{
    string a,b,c,d,e,h,x;
    int z,i,j,k,l,m;
    /*fstream f;
    f.open("d:\\project.txt",ios::in | ios::out);
    f.seekg(0,ios::beg);
    fstream f1("d:\\temp2.txt",ios::out);*/
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
                //f1<<x<<endl;
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
    ifstream f3("d://temp2.txt");

    while(f3)
          {
            f3>>c;
            f2<<c<<endl;
          }
}

int main()
{
    fees_det();
    return 0;
}
