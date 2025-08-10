#include "include/database.h"
void Database::write (vector<vector<string>> mainList){
    ofstream db; //output file stream
    db.open("db/lists.sl");


    if(db.is_open()){
        for (unsigned int user_index = 0; user_index<mainList.size(); user_index++){
            for (unsigned int list_index=0 ; list_index< mainList[user_index].size(); list_index++ ){
                if (list_index == 0){
                    db << "#" << mainList[user_index][list_index] << endl;
                }
                else {
                db << mainList[user_index][list_index] << endl;
                }
            }
            db << "%" << endl;

        }
    }
    else{
        cout << "Cannot open file for writing\n";
    }
    db.close();

}

vector<string> userList;









vector<vector<string>> Database::read(){
    string line;
    ifstream db; //input file stream
    db.open("db/lists.sl");


    if(db.is_open()){
        while(getline(db, line, '\n')){
            if(line.front() == '#'){
                cout << "Found an Hashtag" <<line << endl;
                line.erase(line.begin());
                userList.push_back(line);
            }
            else if (line.front() == '%'){
                cout << "Found a percentage: " << line << endl;
                mainList.push_back(userList);
                userList.clear();

            }
            else{
                cout << "Found an Item: " << line << endl;
                userList.push_back(line);

            }

        }
    }
    else{
        cout << "Cannot open file for writing\n";
    }
    db.close();

    return mainList;



}