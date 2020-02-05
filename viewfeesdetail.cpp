#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include<sstream>
using namespace std;
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

int main()
{
    fees_det();
    return 0;
}
