#pragma once

// encontrar a primeira pesquisa em DFS
#include <iostream>
using namespace std;
bool SolutionPath(int** maze, int N, int a, int y, int** sol); // encontra a solução do programa
void PrintMaze(int** sol, int N); // função para imprimir a primeira pesquisa de DFS
bool CheckPath(int** maze, int N, int x, int y); //verificar se o labirinto está com caminho livre ou não ou há final
bool solveMaze(int** maze, int N); /* verificar se uma solução existe ou não. Se é uma solução. Definir o caminho da solução. 
imprimir o labirinto desejado com o caminho necessário*/