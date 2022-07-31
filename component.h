#include<iostream>
#include<string>
#include <list>
class component{
    public:
        list <string> compList;
        string keyword,comp,category;
        int size=10;
        list <string> *keywordList = new list<string>[size];
        list <string> *categoryList= new list<string>[size];
        list <string> ::iterator i,j,k;
        component(){
           
            compList.push_back("ANTLR 2.7.6");
            compList.push_back("AKKA 2.1");
            compList.push_back("COZYROC");

            keywordList[0].push_back("Parser");
            keywordList[1].push_back("Middleware");
            keywordList[2].push_back("SQL");
            keywordList[2].push_back("ETL");

            categoryList[0].push_back("Java");
            categoryList[1].push_back("Scala");
            categoryList[1].push_back("DBMS");
            categoryList[2].push_back("Data Integration");
           

        }
        void searchComponent()
        {
           cout<<"1.Search by Keyword\t 2.Search by Category "<<endl;
           int choice;
           string s;
           fflush(stdin);
           cout<<"Enter your choice: ";
           cin>>choice;
           if(choice==1)
           {
                fflush(stdin);
                cout<<"Enter keyword:";
                getline(cin,s);
                compByKeyword(s);
           }
           else if(choice==2)
           {
                fflush(stdin);
                cout<<"Enter Category:";
                getline(cin,s);
                compByCategory(s);
           }
           else
              cout<<"\nInvalid Choice";
        }
        void compByKeyword(string keyword)
        {
            cout<<"\nComponent(s) related to "<<keyword<<":\n";
            int index=0,flag=0;
            while(index<=compList.size())
            {
                for (i = keywordList[index].begin();i != keywordList[index].end(); i++) 
                {
                    if(*i==keyword)
                    {
                        flag=1;
                        j=compList.begin();
                        advance(j,index);
                        cout<<*j<<"\n";
                    }
                }
                ++index;
            }
            if(flag==0) cout<<"\nNo components available for the keyword :"<<keyword<<"\n";
        }
        void compByCategory(string category)
        {
            cout<<"\nComponent(s) related to "<<category<<":\n";
            int index=0,flag=0;
            while(index<=compList.size())
            {
                for (i = categoryList[index].begin();i != categoryList[index].end(); i++) 
                {
                    if(*i==category)
                    {
                        flag=1;
                        j=compList.begin();
                        advance(j,index);
                        cout<<*j<<"\n";
                    }
                }
                ++index;
            }
            if(flag==0) cout<<"\nNo components available for the category :"<<category<<"\n";
        }
        void display()
        {
            cout<<"\n\n -----Components Catalogue--------------\n";
            int index=0;
            while(index<compList.size())
            {
                cout<<"\n------------------------";
                i=compList.begin();
                advance(i,index);
                cout<<"\nComponent:"<<*i;
                cout<<"\nKeywords:";
                for(j=keywordList[index].begin(); j!=keywordList[index].end();j++)
                    cout<<" "<<*j;
                cout<<"\nCategory:";
                for(k=categoryList[index].begin(); k!=categoryList[index].end();k++)
                    cout<<" "<<*k;

                ++index;
            }
        }
        void addComponent()
        {
             fflush(stdin);
            cout<<"Component: ";
            getline(cin,comp);
            compList.push_back(comp);
            fflush(stdin);
            cout<<"keyword:";
            getline(cin,keyword);
            keywordList[compList.size()-1].push_back(keyword);
            fflush(stdin);
            cout<<"category:";
            getline(cin,category);
            categoryList[compList.size()-1].push_back(category);
            cout<<"\nComponent added successfully"<< endl;
        }
        void associateKeyword()
        {
            fflush(stdin);
            int index=0,flag=0;
            cout<<"Select a component:";
            getline(cin,comp);
            for(i=compList.begin(); i!=compList.end();i++)
            {
                if(*i==comp) 
                {
                    flag=1;
                    break;
                }
               
                ++index;
            }
            if(flag==0)
                cout<<"\nGiven component is not available\n";
            else
            {
                fflush(stdin);
                cout<<"Enter keyword:";
                getline(cin,keyword);
                keywordList[index].push_back(keyword);
                cout<<"Keyword added successfully"<< endl;
            }

        }
        void associateCategory()
        {
            fflush(stdin);
            int index=0,flag=0;
            cout<<"Select a component:";
            getline(cin,comp);
            for(i=compList.begin(); i!=compList.end();i++)
            {
                if(*i==comp) 
                {
                    flag=1;
                    break;
                }
               
                ++index;
            }
            if(flag==0)
                cout<<"\nGiven component is not available\n";
            else
            {
                fflush(stdin);
                cout<<"Enter Category:";
                getline(cin,category);
                categoryList[index].push_back(category);
                cout<<"Category added successfully"<< endl;
            }

        }
        void deleteComponent()
        {
            fflush(stdin);
            int index=0,flag=0;
            cout<<"Select a component:";
            getline(cin,comp);
            for(i=compList.begin(); i!=compList.end();i++)
            {
                if(*i==comp)
                {
                    flag=1;
                    break;
                }
                ++index;
            }
            if(flag==0)
                cout<<"\nGiven component is not available\n";
            else
            {
                fflush(stdin);
                compList.erase(i);
                keywordList[index].clear();
                categoryList[index].clear();
                cout<<"Component deleted successfully"<< endl;
            }
        }
        ~component()
        {
        }
};