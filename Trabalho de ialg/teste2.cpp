#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

struct Produto {
    int ID;
    char Nome[20];
    float Preco;
    char DataValidade[11];
    int QuantidadeEstoque;
    char Categoria[20];
};

void armazenar(ifstream& arquivo, Produto estoque[], int tamanho) {
    char lixeira;
    for (int i = 0; i < tamanho; i++) {
        arquivo >> estoque[i].ID;
        arquivo >> lixeira;
        arquivo.getline(estoque[i].Nome, 20, ',');
        arquivo >> estoque[i].Preco;
        arquivo >> lixeira;
        arquivo.getline(estoque[i].DataValidade, 11, ',');
        arquivo >> estoque[i].QuantidadeEstoque;
        arquivo >> lixeira;
        arquivo.getline(estoque[i].Categoria, 20, ',');
    }
}

int descobrirTamanho(ifstream& arquivo, int contador = 0) {
    string quantidadeDeLinhas;

    while (getline(arquivo, quantidadeDeLinhas)) {
        contador++;
    }
    return contador;
}

void listarProdutos(const Produto estoque[], int tamanho) {
    cout << "=== Produtos em Estoque ===" << endl;

    if (tamanho == 0) {
        cout << "Nenhum produto cadastrado." << endl;
    } else {
        for (int i = 0; i < tamanho; i++) {
            const Produto& produto = estoque[i];
            cout << "ID: " << produto.ID << endl;
            cout << "Nome: " << produto.Nome << endl;
            cout << "Preco: " << produto.Preco << endl;
            cout << "Data de Validade: " << produto.DataValidade << endl;
            cout << "Quantidade em Estoque: " << produto.QuantidadeEstoque << endl;
            cout << "Categoria: " << produto.Categoria << endl;
            cout << "---------------------" << endl;
        }
    }
}

bool buscarProdutoPorID(const Produto estoque[], int tamanho, int ID) {
    for (int i = 0; i < tamanho; i++) {
        const Produto& produto = estoque[i];
        if (produto.ID == ID) {
            cout << "=== Produto Encontrado ===" << endl;
            cout << "ID: " << produto.ID << endl;
            cout << "Nome: " << produto.Nome << endl;
            cout << "Preco: " << produto.Preco << endl;
            cout << "Data de Validade: " << produto.DataValidade << endl;
            cout << "Quantidade em Estoque: " << produto.QuantidadeEstoque << endl;
            cout << "Categoria: " << produto.Categoria << endl;
            cout << "---------------------" << endl;
            return true;
        }
    }

    cout << "Produto nao encontrado." << endl;
    return false;
}
bool buscarProdutoPorNome(const Produto estoque[], int tamanho, const char* Nome) {
    for (int i = 0; i < tamanho; i++) {
        const Produto& produto = estoque[i];
        if (strcmp(produto.Nome, Nome) == 0) {
            cout << "=== Produto Encontrado ===" << endl;
            cout << "ID: " << produto.ID << endl;
            cout << "Nome: " << produto.Nome << endl;
            cout << "Preco: " << produto.Preco << endl;
            cout << "Data de Validade: " << produto.DataValidade << endl;
            cout << "Quantidade em Estoque: " << produto.QuantidadeEstoque << endl;
            cout << "Categoria: " << produto.Categoria << endl;
            cout << "---------------------" << endl;
            return true;
        }
    }

    cout << "Produto nao encontrado." << endl;
    return false;
}

void adicionarProduto(Produto estoque[], int& tamanho) {
    Produto novoProduto;

    cout << "=== Adicionar Produto ===" << endl;

    cout << "ID: ";
    cin >> novoProduto.ID;
    cin.ignore();

    cout << "Nome: ";
    cin.getline(novoProduto.Nome, 20);

    cout << "Preco: ";
    cin >> novoProduto.Preco;
    cin.ignore();

    cout << "Data de Validade (DD/MM/AAAA): ";
    cin.getline(novoProduto.DataValidade, 11);

    cout << "Quantidade em Estoque: ";
    cin >> novoProduto.QuantidadeEstoque;
    cin.ignore();

    cout << "Categoria: ";
    cin.getline(novoProduto.Categoria, 20);

    estoque[tamanho] = novoProduto;
    tamanho++;

    cout << "Produto adicionado com sucesso." << endl;
}

int main() {
    const int TAMANHO_MAXIMO = 100;
    Produto estoque[TAMANHO_MAXIMO];
    int tamanho = 0;

    ifstream arquivo("produtos.csv");
    if (arquivo.is_open()) {
        tamanho = descobrirTamanho(arquivo);
        arquivo.close();

        arquivo.open("produtos.csv");
        armazenar(arquivo, estoque, tamanho);
        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }

    listarProdutos(estoque, tamanho);

    int opcao;

    do {
        cout << "=== MENU ===" << endl;
        cout << "1. Buscar produto por ID" << endl;
        cout << "2. Buscar produto por nome" << endl;
        cout << "3. Adicionar produto" << endl;
        cout << "4. Sair" << endl;

        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                int ID;
                cout << "Digite o ID do produto: ";
                cin >> ID;
                buscarProdutoPorID(estoque, tamanho, ID);
                break;
            }
            case 2: {
                cin.ignore();
                char nome[20];
                cout << "Digite o nome do produto: ";
                cin.getline(nome, 20);
                buscarProdutoPorNome(estoque, tamanho, nome);
                break;
            }
            case 3:
                adicionarProduto(estoque, tamanho);
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao invalida. Tente novamente." << endl;
                break;
        }
    } while (opcao != 4);

    return 0;
}