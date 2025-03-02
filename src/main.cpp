#include "include/list.h"
/*

all listed here is available already with list.h

#include <iostream>
#include <vector>
using namespace std;

void print_menu(string name);
void print_list();
void add_item();
void delete_item();

vector<string> list;
string name;
*/

int main(int arg_count, char *args[]){

    if(arg_count > 1){
        List simpleList;
        simpleList.name = args[1];
        simpleList.print_menu();
    }
    else {
        cout << "Username not supported.. existing the program" << endl;
    }

    return 0;
}


/*

all listed below are migrated to list.cpp

void print_menu(string name){
    int choice;
    
    cout << "*********************"  << endl;
    cout << " 1 - Print list." << endl;
    cout << " 2 - Add to list." << endl;
    cout << " 3 - Delete from list." << endl;
    cout << " 4 - Quit." << endl;
    cout << "Enter your choice and press return/enter." << endl;
    
   // print_menu(name);
    cin >> choice; 
    cout << endl;
    
    if(choice == 4){
        exit(0);
    }
    else if(choice == 1){
        print_list();    
    }else if(choice == 2){
        add_item();
    }else if(choice == 3){
        delete_item();
    }
    else{
        cout << "Sorry choice hasn't been implemented.\n";
    }

}

void print_list(){

    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "****************** Printing List ******************"  << endl;
    if(list.size()){
        for(int list_index = 0; list_index < list.size(); list_index++){
            cout << " " << list_index << ": " << list[list_index] << "\n"; 
        }
    }
    cout << "M - Menu\n";
    char choice;
    cin >> choice;
    if(choice == 'M' || choice == 'm'){
        print_menu(name);
    }
    else{
        cout << "Invalid choice. Quiting..\n";
    }
    cout << "**************************************************"  << endl;
    
}

void add_item(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "****** Add item *****\n";
    cout << "Type in an item and press enter: ";

    string item;
    cin >> item;
    list.push_back(item);
    cout << "Successfully added an item to the list \n\n\n\n\n\n";
    cin.clear();
    print_menu(name);
}

void delete_item(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
    cout << "****** Delete item *****\n";
    cout << "Select an item index to delete.\n";

    if(list.size()){
        for(int i = 0; i < list.size(); i++){
            cout << " " << i << ": " << list[i] << "\n"; 
        }
    }else{
        cout << "No items in the list or to delete.\n";
    }


    string item;
    cin >> item;
    list.push_back(item);
    cout << "Successfully added an item to the list \n\n\n\n\n\n";
    cin.clear();
    print_menu(name);

}
*/