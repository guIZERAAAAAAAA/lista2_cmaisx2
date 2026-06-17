#include <iostream>


// Exercício 1 — Média de três notas

float media(float a, float b, float c) {
    return (a + b + c) / 3.0f;
}


// Exercício 2 — Imprimir linha de 30 traços

void imprimirLinha() {
    for (int i = 0; i < 30; i++) {
        std::cout << "-";
    }
    std::cout << "\n";
}

// Exercício 3 — Maior entre dois números

int maior(int a, int b) {
    if (a >= b) return a;
    return b;
}

// Exercício 4 — Trocar valores por referência

void trocar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}


// Exercício 5 — Área do retângulo

float areaRetangulo(float base, float altura) {
    return base * altura;
}


// Main — testa todas as funções

int main() {

    // Exercício 1
    imprimirLinha();
    std::cout << "Exercicio 1 — Media de tres notas\n";
    imprimirLinha();
    float n1, n2, n3;
    std::cout << "Digite a nota 1: "; std::cin >> n1;
    std::cout << "Digite a nota 2: "; std::cin >> n2;
    std::cout << "Digite a nota 3: "; std::cin >> n3;
    std::cout << "Media: " << media(n1, n2, n3) << "\n";

    // Exercício 2
    std::cout << "\n";
    imprimirLinha();
    std::cout << "Exercicio 2 — Linha impressa acima!\n";
    imprimirLinha();

    // Exercício 3
    std::cout << "\n";
    imprimirLinha();
    std::cout << "Exercicio 3 — Maior entre dois numeros\n";
    imprimirLinha();
    int x, y;
    std::cout << "Digite o primeiro numero:  "; std::cin >> x;
    std::cout << "Digite o segundo numero: "; std::cin >> y;
    std::cout << "Maior: " << maior(x, y) << "\n";

    // Exercício 4
    std::cout << "\n";
    imprimirLinha();
    std::cout << "Exercicio 4 — Trocar valores\n";
    imprimirLinha();
    int a = 10, b = 20;
    std::cout << "Antes  — a: " << a << " | b: " << b << "\n";
    trocar(a, b);
    std::cout << "Depois — a: " << a << " | b: " << b << "\n";

    // Exercício 5
    std::cout << "\n";
    imprimirLinha();
    std::cout << "Exercicio 5 — Area do retangulo\n";
    imprimirLinha();
    float base, altura;
    std::cout << "Digite a base:   "; std::cin >> base;
    std::cout << "Digite a altura: "; std::cin >> altura;
    std::cout << "Area: " << areaRetangulo(base, altura) << "\n";

    imprimirLinha();
    return 0;
}