#include <iostream>


int main(){
    int row = 5;
    for(int i=0; i<row; i++){
        for(int j=row; j>i; j--){
            std::cout << " ";
        }
        for(int k=0; k<2*i+1; k++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}