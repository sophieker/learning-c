#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
// for pausing between generations
#include <chrono>
#include <thread>
using namespace std;

const int SIZE = 10;

int getGenerations()
{
    int gen;
    cout << "Enter the number of generations: ";
    cin >> gen;
    return gen;
}

void initializeBoard(bool array[SIZE + 2][SIZE + 2])
{
    string userChoice;

    for (int i = 0; i < SIZE+2; i++)
    {
        for (int j = 0; j < SIZE+2; j++)
        {
            array[i][j] = false;
        }
    }
        cout << "Choose a pattern (diagonal, alternate, random, or line): ";
        cin >> userChoice;

        int row, col, i;

        if (userChoice == "random")
        {
            i = 0;
            while(i < (SIZE * SIZE / 2))
            {
                row = rand() % SIZE + 1; 
                col = rand() % SIZE + 1;
                array[row][col] = true;
                i++;
            }
        }

        else if (userChoice == "alternate")
        {
            for (int i = 1; i < SIZE + 1; i += 2)
            {
                for (int j = 1; j < SIZE + 1; j += 2)
                {
                    array[i][j] = true;
                }
                for (int j = 2; j < SIZE + 1; j+=2)
                {
                    array[i+1][j] = true;
                }
            }
        }

        else if (userChoice == "line")
        {
            row = SIZE/2 + 1;
            for (int i = 1; i < SIZE + 1; i++)
            {
                array[row][i] = true;
            }
        }

        else if (userChoice == "diagonal")
        {
            for (int i = 1; i < SIZE + 1; i++)
            {
                array[i][i] = true;
                array[i][SIZE + 1 - i] = true;
            }
        }

        else
        {
            cout << "Invalid input. ";
        }
}

void displayBoard(bool array[SIZE + 2][SIZE + 2])
{
    for (int i = 1; i < SIZE + 1; i++)
    {
        for (int j = 1; j < SIZE + 1; j++)
        {
            if (array[i][j] == false)
            {
                cout << " -";
            }
            else
            {
                cout << " ■";
            }
        }
        cout << endl;
    }
}

int howManyNeighbors(bool array[SIZE+2][SIZE+2], int row, int column)
{
    int neighbors = 0;
    // top row
    if (array[row-1][column-1] == true)
        neighbors++;
    if (array[row-1][column] == true)
        neighbors++;
    if (array[row-1][column+1] == true)
        neighbors++;
    // current row
    if (array[row][column-1] == true)
        neighbors++;
    if (array[row][column+1] == true)
        neighbors++;
    // bottom row
    if (array[row+1][column-1] == true)
        neighbors++;
    if (array[row+1][column] == true)
        neighbors++;
    if (array[row+1][column+1] == true)
        neighbors++;

    return neighbors;
}

void oneGeneration(bool array[SIZE + 2][SIZE + 2])
{
    int current_neighbors;
    // temp 2D array for a single generation
    int** tempArr = new int* [SIZE+2];
    for (int i = 0; i < SIZE + 2; i++)
    {
        tempArr[i] = new int[SIZE + 2];
    }

    // copy values to temp array
    for (int i = 0; i < SIZE+2; i++)
    {
        for (int j = 0; j < SIZE + 2; j++)
        {
            tempArr[i][j] = array[i][j];
        }
    }

    // generational changes
    for (int i = 1; i < SIZE + 1; i++)
    {
        for (int j = 1; j < SIZE + 1; j++)
        {
            current_neighbors = howManyNeighbors(array, i, j);
            if (array[i][j] == true)
            {
                if (current_neighbors > 3)
                {
                    tempArr[i][j] = false; // died of overpopulation
                }
                else if (current_neighbors < 2)
                {
                    tempArr[i][j] = false; // died of loneliness
                }
            }
            else
            {
                if (current_neighbors == 3)
                {
                    tempArr[i][j] = true; // new creature born
                }
            }

        }
    }

    // copy values back to original array
    for (int i = 0; i < SIZE+2; i++)
    {
        for (int j = 0; j < SIZE + 2; j++)
        {
            array[i][j] = tempArr[i][j];
        }
    }

    // deallocate heap memory for temp array
    for (int i = 0; i < SIZE + 2; i++)
    {
        delete[] tempArr[i];
    }
    delete[] tempArr;
}

int main()
{
    const int GENERATIONS = getGenerations();
    srand(time(NULL));

    bool arr[SIZE + 2][SIZE + 2];
    initializeBoard(arr);
    displayBoard(arr);

    chrono::seconds dura(1);
    this_thread::sleep_for(dura);

    int i = GENERATIONS;
    while (i > 0)
    {
        cout << endl << endl;
        oneGeneration(arr);
        displayBoard(arr);
        
        // pausing between generations
        chrono::seconds duration(1);
        this_thread::sleep_for(duration);

        i--;
    }

}