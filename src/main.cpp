#include "include/list.h"
/*
int main() {
    std :: cout << "Hello World" << std::endl;
    return 0;
}
*/

int main(int arg_count, char *args[]){

    List simpleList;

    if (arg_count >1){
        
        simpleList.name=string(args[1]);
        //simpleList.mainList = data.read();
        simpleList.mainList = simpleList.data.read();
        simpleList.find_userList();   
        simpleList.print_menu();

    }
    else{
        cout << "Username not supplied"<< endl;
    }
    

    return 0;

}

