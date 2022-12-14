#include <iostream>

class Matrix
{

private:
            int array[10][10];
            int u,v;//rows and columns

public:
            void show();       
            Matrix operator+(Matrix);
            Matrix operator-(Matrix);
            Matrix operator*(Matrix);
             void read();


};

//oveloading +
Matrix Matrix::operator+(Matrix parameters)
{
        Matrix t;
        t.u = u;
        t.v = v;
        std::cout << "The matrix has: "<< t.u <<" rows. "<<std::endl;
         std::cout << "The matrix has: "<< t.v <<" columns. "<<std::endl;
        for(int i=0;i<t.u;i++)
                    for(int j=0;j<t.v;j++)
                         t.array[i][j]=array[i][j]+parameters.array[i][j];
                         return t;

}
//overloading -
Matrix Matrix::operator-(Matrix parameters)
{
        Matrix t;
        t.u = u;
        t.v = v;
        std::cout << "The matrix has: "<< t.u <<" rows. "<<std::endl;
         std::cout << "The matrix has: "<< t.v <<" columns. "<<std::endl;
        for(int i = 0;i < t.u; i++)
                    for(int j=0;j < t.v; j++)
                         t.array[i][j]=array[i][j]-parameters.array[i][j];
                         return t;

}


//overloading *
Matrix Matrix::operator*(Matrix parameters)
     {
               Matrix t;
               t.u = u;
               t.v = parameters.v;
               for(int i=0;i < t.u; i++)
                    for(int j=0;j < t.v; j++)
                        {
                           t.array[i][i]=0;
                           for(int k=0;k < v; k++)
                                  t.array[i][j] += array[i][k] * parameters.array[k][j];
                        }
                                  return t;
       }

