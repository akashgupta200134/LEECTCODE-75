#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int srcx, int srcy, int newx, int newy, int maze[][4], int row, int col, vector<vector<bool>> &Visited)
{

    if (
        (newx >= 0 && newx < row) &&
        (newy >= 0 && newy < col) &&
        maze[newx][newy] == 1 &&
        Visited[newx][newy] == false)
    {
        return true;
    }
    else
    {

        return false;
    }
}

void PrintPath(int maze[][4], int row, int col, int srcx, int srcy, vector<vector<bool>> &Visited, string output)
{


    // base case 

    if(srcx== row-1 && srcy == col-1){
        cout << output << endl ;
        return ; 
    }




    // UP
    int newx = srcx - 1;
    int newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, Visited))
    {
        Visited[newx][newy] = true;
        output.push_back('U');

        PrintPath(maze, row, col, newx, newy, Visited , output);

        output.pop_back();
        Visited[newx][newy] = false;
    }

    // Right
     newx = srcx;
     newy = srcy + 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, Visited))
    {

        Visited[newx][newy] = true;
        output.push_back('R');

        PrintPath(maze, row, col, newx, newy, Visited , output);

        output.pop_back();
        Visited[newx][newy] = false;
    }

    // Down
 newx = srcx + 1;
    newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, Visited))
    {

        Visited[newx][newy] = true;
        output.push_back('D');

        PrintPath(maze, row, col, newx, newy, Visited, output);

        output.pop_back();
        Visited[newx][newy] = false;
    }

    // Left
     newx = srcx;
     newy = srcy - 1;
    if (isSafe(srcx, srcy, newx, newy, maze, row, col, Visited))
    {

        Visited[newx][newy] = true;
        output.push_back('L');

        PrintPath(maze, row, col, newx, newy, Visited, output);

        output.pop_back();
        Visited[newx][newy] = false;
    }
}

int main()
{

    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}};
    int row = 4;
    int col = 4;


     int srcx = 0;
    int srcy = 0;

    string output = "";
   
    vector<vector<bool>> Visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0)
    {
        cout << " NO path Exits" << endl;
    }
    else
    {
        Visited[srcx][srcy] = true;
        PrintPath(maze, row, col, srcx, srcy, Visited, output);
    }

    return 0;
}