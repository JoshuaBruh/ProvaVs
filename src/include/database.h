#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
class Database{
    private: //private scope of the class, only the class can access this variables and function

    protected: //anything that belongs to the class or anything that this class Inherits can acces the variables and function defined here

    public:
        Database(){}
        ~Database(){}
    
        vector<vector<string>> mainList;
        string name;
        void write(vector<vector<string>> mainList);
        vector<vector<string>> read();
        

};