//HeaderFile,for prototypes, variables used ecc.
#include "database.h"

using namespace std;
class List{
    private: //private scope of the class, only the class can access this variables and function

    protected: //anything that belongs to the class or anything that this class Inherits can acces the variables and function defined here

    public:
        List(){
            
        }
        ~List(){}
    
        void print_menu();
        void print_list();
        void add_item();
        void delete_item();
        bool find_userList();
        void save_list();
        vector<string> list;
        string name;
        vector<vector<string>> mainList;
        unsigned int currentUserIndex;
        Database data;
        

};