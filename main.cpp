#include <iostream>
#include <conio.h>
#include "matrix.h"

void Matrix::read()
{
    std::cout << "Please enter a size of a matrix like (3 x 3)  :\n";
    std::cin >>u>>v;
    std::cout << "Please enter the elements in the matrix   :\n";
    for(int i = 0; i < u; i++)
        for(int j = 0; j < v; j++)
            std::cin>>array[i][j];
}

void Matrix::show()
{
    for(int i = 0; i < u; i++)
        {
            for(int j = 0; j < v; j++)
                {
                    std::cout << array[i][j]<<"\t";
                }
            std::cout << "\n";
        }


}

int main(void){

    Matrix object1, object2, object3;
        std::cout << "  Please Enter First Matrix " << std::endl;
            object1.read();

        std::cout << "  Please Enter Second Matrix " << std::endl;
            object2.read();

            object3=object1 + object2;
        std::cout << "  Result after addition of the two matrices: " << std::endl;
           object3.show();

            object3=object1 - object2;
        std::cout << "  Result after subtraction of the two matrices: " << std::endl;
           object3.show();

            object3 = object1 * object2;
        std::cout << "  Result after multiplication of the two matrices: " << std::endl;
            object3.show();

}
