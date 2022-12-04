#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter Row: ";
    cin >> row;
    cout << "Enter Col: ";
    cin >> col;
    int mat[col][row];
    int mat2[col][row];
    int sub[col][row];
    int mul[col][row];

    // Inserting Matrix One
    cout << "Enter Matrix One Values: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> mat[i][j];
        }
    }
    // Inserting Matrix Two
    cout << "Enter Matrix Two Values: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cin >> mat2[i][j];
        }
    }
    // Output Matrix One
    cout << "Show Matrix One: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    // Output Matrix Two
    cout << "Show Matrix Two: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }

    // Subtraction

    cout << "+++++++++Subtraction Running:+++++++ \n\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            sub[i][j] = mat[i][j] - mat2[i][j];
        }
    }

    // OutPut Subtraction Result
    cout << "+++++++++Subtraction Matrix:+++++++ \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << sub[i][j] << " ";
        }
        cout << "\n";
    }

    // Multiplication
    if (row == col)
    {
        cout << "+++++++++Multiplication Running:+++++++ \n\n";
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                mul[i][j] = 0;
                for (int k = 0; k < row; k++)
                {
                    mul[i][j] += mat[i][k] * mat2[k][j];
                }
            }
        }

        // OutPut Multiplication Result
        cout << "+++++++++Multiplication Matrix:+++++++ \n";
        for (int i = 0; i < col; i++)
        {
            for (int j = 0; j < row; j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "\nMultipication operaction failed because mat[row]!=mat2[col]\n";
    }

    return 0;
}
