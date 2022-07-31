#include<iostream>
using namespace std;

#include "cataloguer.h"
#include "User.h"
#include "component.h"

User u;
cataloguer c;
component comp;

int choice1,choice2,choice3=0;
string username,password;

void userfunc(void);

int main()
{
    cout<<"-------------SOFTWARE COMPONENT CATALOGUE SOFTWARE-------------------"<<endl;
    cout<<"Select User Type:"<<endl;
    cout<<"1.User\t 2.Cataloguer"<<endl;
    fflush(stdin);
    cin>>choice1;
    if(choice1==1)
    {
        cout<<"Selct your choice:"<<endl;
        cout<<"1.Existing User\t 2.New User"<<endl;
        fflush(stdin);
        cin>>choice2;
        if(choice2==1)
        {
            fflush(stdin);
            cout<<"Enter Username:";
            getline(cin,username);
            fflush(stdin);
            cout<<"Enter Password:";
            getline(cin,password);
            if(u.authenticate(username,password))
            {
                userfunc();
            }
            else
            {
                cout<<"Invalid Username or Password\n";
            }
        }
        else if(choice2==2)
        {
            fflush(stdin);
            cout<<"Enter Username:";
            getline(cin,username);
            fflush(stdin);
            cout<<"Enter Password:";
            getline(cin,password);
            u.userMap[username]=password;
            userfunc();

        }
        else
        {
            cout<<"Invalid choice"<<endl;
        }     

    }
    else if(choice1==2)
    {
        fflush(stdin);
        cout<<"Enter Username:";
        getline(cin,username);
        fflush(stdin);
        cout<<"Enter Password:";
        getline(cin,password);
        if(username=="admin" and password=="admin")
        {
            while(choice3!=9)
            {
                fflush(stdin);
                cout<<"\n\n";
                cout<<"-------Cataloguer----------"<<endl;
                cout<<"1.View Component catalogue"<<endl;
                cout<<"2.Search component"<<endl;
                cout<<"3.Add component"<<endl;
                cout<<"4.Associate keyword"<<endl;
                cout<<"5.Associate category"<<endl;
                cout<<"6.Delete component"<<endl;
                cout<<"7.View Queries"<<endl;
                cout<<"8.List of Users"<<endl;
                cout<<"9.Logout"<<endl;
                cout<<"Enter your choice:";
                cin>>choice3;
                if(choice3==1)
                    comp.display();
                else if(choice3==2)
                    comp.searchComponent();
                else if(choice3==3)
                    comp.addComponent();
                else if(choice3==4)
                    comp.associateKeyword();
                else if(choice3==5)
                    comp.associateCategory();
                else if(choice3==6)
                    comp.deleteComponent();
                else if(choice3==7)
                    c.viewQuery();
                else if(choice3==8)
                    u.display();
                else if(choice3==9)
                    cout<<"Logging out"<<endl;
                else
                    cout<<"Invalid choice...Please enter valid choice"<<endl;
                
            }
            
        }
        else
        {
            cout<<"Invalid Username or Password\n";
        }

    }
    else
    {
        cout<<"Invalid choice"<<endl;
    }
    
}
void userfunc()
{
    while(choice3!=4)
    {
        fflush(stdin);
        cout<<"\n\n";
        cout<<"--------User----------"<<endl;
        cout<<"1.View Component catalogue"<<endl;
        cout<<"2.Search component"<<endl;
        cout<<"3.Raise a Query"<<endl;
        cout<<"4.Logout"<<endl;
        cout<<"\nEnter your choice:";
        cin>>choice3;
        if(choice3==1)
            comp.display();
        else if(choice3==2)
            comp.searchComponent();
        else if(choice3==3)
            u.raiseQuery();
        else if(choice3==4)
            cout<<"Logging out"<<endl;
        else
            cout<<"Invalid choice...Please enter valid choice"<<endl;
    }

}