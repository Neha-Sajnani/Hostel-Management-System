#include<iostream>
#include<cstring>
#include<sstream>
#include<fstream>
using namespace std;
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
int main()
{
    new_add();
    return 0;
}
