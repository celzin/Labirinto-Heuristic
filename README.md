# Labirinto-Euristica

<div style="display: inline-block;">
<img align="center" alt="C++" src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
<img align="center" height="28px" width="112px" src="https://img.shields.io/badge/Made%20for-VSCode-1f425f.svg"/> 
</a> 
</div>

<p> </p>
<p> </p>

## Grupo
- Celso Vinícius S. F.
- Pedro H. Pires Dias

## Abstract


## Estrutura BFS Search

## Estrutura DFS Search

## A* (Eurística)

## Método PrintMaze
<p align="justify">
Nesse método...
</p>

```c
// imprimir a primeira DFS
void PrintMaze(int** sol, int N){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
}
```

## Método CheckPath
<p align="justify">
Nesse método...
</p>

```c
bool CheckPath(int** maze, int N, int x, int y){
    // se (x, y fora do labirinto) retorna falso
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1)
        return true;
    return false;
}  
```


## Método solveMaze
<p align="justify">
Nesse método...
</p>

```c
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
```

## Método SolutionPath
<p align="justify">
Nesse método...
</p>

```c
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
```





## Funcionamento do programa

<p align="justify">	
	Inicialmente o usuário insere o tamanho do labirinto, sendo este no formato NxN.
  </p>
    <p align="center">
    <img align="center" src="imgs/tam_maze.png"/> 
  </p>
  
  Em seguida o usuário ''entra'' no labirinto, e é aí onde insere as paredes e os possíveis caminhos para percorrer. 
  </p>
    <p align="center">
    <img align="center" src="imgs/inside_maze.png"/> 
  </p>
  
  Ao digitar o número '1', o programa lê como um caminho possível a ser percorrido.
  </p>
    <p align="center">
    <img align="center" src="imgs/example_insert_1.png"/> 
  </p>
  
  Caso seja digitado o número '0', o programa entende que têm uma parede nesse local.
  </p>
    <p align="center">
    <img align="center" src="imgs/example_insert_0.png"/> 
  </p>
  
  
  Todos os caminhos e paredes inseridos neste exemplo:
  </p>
    <p align="center">
    <img align="center" src="imgs/all_inserts.png"/> 
  </p>
  
  Após inserido o labirinto conforme o usuário desejar, é impresso o labirinto digitado.
  </p>
    <p align="center">
    <img align="center" src="imgs/maze_initialized.png"/> 
  </p>
  
  Por fim, é impresso o caminho percorrido pelo programa.
  </p>
    <p align="center">
    <img align="center" src="imgs/maze_solution.png"/> 
  </p>
  
## Compilação e Execução

O código disponibilizado possui um arquivo Makefile que realiza todo o procedimento de compilação e execução. Para tanto, temos as seguintes diretrizes de execução:


| Comando                |  Função                                                                                           |                     
| -----------------------| ------------------------------------------------------------------------------------------------- |
|  `make clean`          | Apaga a última compilação realizada contida na pasta build                                        |
|  `make`                | Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build           |
|  `make run`            | Executa o programa da pasta build após a realização da compilação                                 |


