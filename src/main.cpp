#include"Header.hpp"
int main(){

    int n, m;
    cout << "Digite o tamanho do labirinto: " << endl;
    cin >> n;
    m = n;
    int** maze = new int* [n];
    for (int i = 0; i < m; ++i){
        maze[i] = new int[m];
    }
    cout << "Agora entre no labirinto. Se você digitar 1, então significa que existe um caminho. Se você pressionar 0, significa inserir uma parede" << endl << endl;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Insira o " << "labirinto[" << i << "]" << "[" << j << "] = ";
            cin >> maze[i][j];
        }
    }
    cout << endl << endl;
    cout << "Labirinto inicializado: " << endl << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maze[i][j];
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl << endl;
    cout << "Labirinto com o caminho necessário para percorrer: " << endl << endl;
    solveMaze(maze, n);
    cout << endl;
    system("pause");
    return 0;
}