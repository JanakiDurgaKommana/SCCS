#include<iostream>
#include<string>
#include<fstream>
#include<unordered_map>
class User
{
    public:
        unordered_map<string, string> userMap;
        string username,password;
        User()
        {
            userMap["user"]="user";
        }
        void raiseQuery()
        {
            ofstream fout;
            ifstream fin;
            fin.open("query.txt");
            fout.open ("query.txt",ios::app);
            fflush(stdin);
            string str; 
            cout<<"Enter your query:";
            getline(cin, str);

            if(fin.is_open())
            {
                fout<<str;
                fout<<"\n-----------------------\n";
            }

            cout<<"\n Query raised successfully"<<endl;
            fin.close();
            fout.close();

        }
        void display()
        {
            cout<<"\nList of registered users:\n";
            cout<<"Username - Password\n\n";
            for (auto i = userMap.begin(); i != userMap.end(); i++)
            cout << i->first <<" - "<< i->second<< endl;
        }
        int authenticate(string uname,string pswrd)
        {
            for (auto i = userMap.begin(); i != userMap.end(); i++)
            {
                if(i->first == uname and i->second==pswrd)
                    return 1;
            }
            return 0;
        }
        ~User()
        {
        }
};