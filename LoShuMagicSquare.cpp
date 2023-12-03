#include <iostream>
#include <ctime>
using namespace std;

const int col = 3;
const int row = 3;

void checkMagicSquare(int arr[][col], int row)
{
    int sum = 0;
    srand(time(0));
    cout << "The matrix is\n";
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            arr[i][j] = rand() % 9 + 1;
            // displaying the matrix

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 1; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            // finding sum of first row
            sum += arr[i][j];
        }
    }
    // comparing sum of first row with diagonal's sum and other rows sum
    if (arr[1][1] + arr[2][2] + arr[0][0] == sum &&
        arr[1][0] + arr[1][1] + arr[1][1] == sum &&
        arr[2][1] + arr[2][2] + arr[2][0] == sum)
    {
        cout << "It ia a lo shu magic square......\n";
    }
    else
    {

        cout << "But it is not a lo shu magic square......\n";
    }
}

int main()
{
    int arr[row][col];
    // call the fumction
    //  pass a 2d-array as an argument
    checkMagicSquare(arr, 3);
    return 0;
}