#include "include/list.h"
/*
int main() {
    std :: cout << "Hello World" << std::endl;
    return 0;
}
*/

int main(int arg_count, char *args[]){
    if (arg_count >1){
        List simpleList;
        simpleList.name=string(args[1]);
        simpleList.print_menu();

    }
    else{
        cout << "Username not supplied"<< endl;
    }

    return 0;

}

