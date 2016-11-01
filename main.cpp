#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    //test hash
    int tongshu = 100;

    int step = 1;
    char* input = "ef";
    int input_length = strlen(input);


    cout<< sizeof(input) <<endl;
    cout<< strlen(input) <<endl;
    cout<< (input) <<endl;

    for (int j = 0; j < input_length/step; ++j) {
        char* p_in =&input[input_length-step*(j + 1)];
        cout<< p_in<<endl;
        int t = 0;
        for (int i = 0; i < step; ++i) {
            t = t + (int)*(&p_in[i]);
        }
        cout<<t<<endl;
        int index_hash = t%tongshu;
        cout<< index_hash<<endl;
    }



//    for (int i = 0; i < input_length; ++i) {
//
//    }


    return 0;
}