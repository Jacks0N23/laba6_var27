//
// Created by Alexandr on 01.06.2015.
//
/*
 * 27. Дана матрица A из N строк и N столбцов. Если в матрице А нет элементов, абсолютная величина
которых отличается от заданной величины Р менее, чем на заданную величину Е, найти для каждой
ее строки среднее арифметическое положительных элементов.
 */

#ifndef LABA6_VAR27_HEADER_FILE_H
#define LABA6_VAR27_HEADER_FILE_H

#include <iostream>
#include <c++/fstream>
#include <c++/iomanip>

using namespace std;

void  Input(int n, int **A, ifstream& input_file) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            input_file >> A[i][j];
        }
    }
}

void InputedMatrix(int n,int **A, ofstream& output_file )
{

    output_file << "\nInputed Matrix" << endl;
    for (int i = 0; i < n; i++) {
        output_file << endl;
        for (int j = 0; j < n; j++) {
            output_file << setw(5) << A[i][j];

        }
    }
}

bool cheking(int n, int P, int E, int** A)
{
    int k=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if(abs(A[i][j]) + E > P)
           {
               k++;
           }
        }
    }
    if(k >0)
    {
        return false;
    }
    else
        return true;
}

void average(int n,int** A, ofstream& output_file)
{
    int sum,k=1;
    for (int i = 0; i < n; i++) {
        sum=0;
        for (int j = 0; j < n; j++) {
            if(A[i][j] > 0)
            {
                sum+=A[i][j];
                k++;
            }
        }
        output_file << "\naverage of " << i+1 << " line is "<<sum/k<<endl;
    }
}
#endif //LABA6_VAR27_HEADER_FILE_H
