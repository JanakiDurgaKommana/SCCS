#include<iostream>
#include<fstream>
#include<string>
class cataloguer
{
    public:
       
        public:
        void viewQuery()
        {
            cout<<"\nList of Queries:\n\n";
            fstream f;
            f.open("query.txt",ios::in); 
            { 
                string tp;
                while(getline(f, tp))
                { 
                    cout << tp << "\n"; 
                }
            f.close(); 
            }
        }
        ~cataloguer()
        {

        }

};