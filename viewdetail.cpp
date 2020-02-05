#include<iostream>
#include<string.h>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<sstream>
using namespace std;
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
            cout<<"**********"<<endl;
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
int main()
{
    system("color f2");
    view();
    return 0;
}
