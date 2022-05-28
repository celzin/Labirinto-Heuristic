#include "Header.hpp"
#include <iostream>
// imprimir a primeira DFS
void PrintMaze(int** sol, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
}

//verificar se o labirinto está com caminho livre ou não ou há final
bool CheckPath(int** maze, int N, int x, int y){
    // se (x, y fora do labirinto) retorna falso
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    return false;
}

/* verificar se uma solução existe ou não. Se é uma solução. Definir o caminho da solução. 
imprimir o labirinto desejado com o caminho necessário*/
bool solveMaze(int** maze, int N){
    int M;
    M = N;
    int** sol = new int* [M];
    for (int i = 0; i < M; ++i){
        sol[i] = new int[M];
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            sol[i][j] = 0;
        }
    }
    if (SolutionPath(maze, N, 0, 0, sol) == false){
        cout << "Solução não existe";
        return false;
    }
    PrintMaze(sol, N);
    return true;
}

// resolve o problema do labirinto usando CheckPath e Solution
bool SolutionPath(int** maze, int N, int a, int y, int** sol){
    if (a == N - 1 && y == N - 1 && maze[a][y] == 1) {
        sol[a][y] = 1;
        return true;
    }
    if (CheckPath(maze, N, a, y) == true){
        if (sol[a][y] == 1)
            return false;
        sol[a][y] = 1;
        if (SolutionPath(maze, N, a + 1, y, sol) == true)
            return true;
        if (SolutionPath(maze, N, a, y + 1, sol) == true)
            return true;
        sol[a][y] = 0;
        return false;
    }
    return false;
}