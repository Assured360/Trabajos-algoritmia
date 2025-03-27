#include <iostream>

int main() {
    // Cantidad de vértices
    int v;
    std::cout << "Ingrese la cantidad de vertices: ";
    std::cin >> v;

    // Arreglos para almacenar coordenadas
    float x[100], y[100], z[100];

    // Coordenadas para cada vértice
    for (int i = 0; i < v; i++) {
        std::cout << "\nVertice " << i + 1 << ":\n";
        std::cout << "Ingrese la coordenada x: ";
        std::cin >> x[i];
        std::cout << "Ingrese la coordenada y: ";
        std::cin >> y[i];
        std::cout << "Ingrese la coordenada z: ";
        std::cin >> z[i];
    }

    // Cantidad de caras
    int m;
    std::cout << "\nIngrese la cantidad de caras: ";
    std::cin >> m;

    // Arreglo para almacenar índices de caras
    int caras[100][100];
    int vertices_por_cara[100];

    for (int i = 0; i < m; i++) {
        std::cout << "\nCara " << i + 1 << ":\n";
        std::cout << "Ingrese el número de vértices para esta cara: ";
        std::cin >> vertices_por_cara[i];

        for (int j = 0; j < vertices_por_cara[i]; j++) {
            std::cout << "Ingrese el índice del vértice " << j + 1 << " (1-" << v << "): ";
            std::cin >> caras[i][j];
        }
    }

    // Imprimir estructura
    std::cout << "\nEstructura:\n";
    std::cout << "Vertices:\n";
    for (int i = 0; i < v; i++) {
        std::cout << i + 1 << ". (" << x[i] << ", " << y[i] << ", " << z[i] << ")\n";
    }

    std::cout << "\nCaras:\n";
    for (int i = 0; i < m; i++) {
        std::cout << i + 1 << ". f";
        for (int j = 0; j < vertices_por_cara[i]; j++) {
            std::cout << " " << caras[i][j];
        }
        std::cout << "\n";
    }

    return 0;
}
