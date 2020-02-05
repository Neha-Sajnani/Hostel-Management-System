#include<iostream>
#include<fstream>
#include<cstring>
#include<stdlib.h>
#include<sstream>
using namespace std;
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

int main()
{
    det();
    return 0;
}
