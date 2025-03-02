#include <iostream>
#include <vector>
using namespace std;

class List{
    private:
    // only class itself can access variables
    protected:
    // inherits or belongs to class
    public:
        // anything 
        List(){
            // constructor
        }
        ~List(){
            // destructor
        }

        void print_menu();
        void print_list();
        void add_item();
        void delete_item();

        vector<string> list;
        string name;

        


    


};