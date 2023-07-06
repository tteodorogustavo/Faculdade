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
        arquivo.getline(estoque[i].Nome,20, ',');
        arquivo >> estoque[i].Preco;
        arquivo >> lixeira;
        arquivo.getline(estoque[i].DataValidade,11, ',');
        arquivo >> estoque[i].QuantidadeEstoque;
        arquivo >> lixeira;
        arquivo.getline(estoque[i].Categoria,20, ',');
    }
}

int descobrirTamanho( ifstream& arquivo, int contador = 0) {
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

bool buscarProdutoPorNome(const Produto estoque[], int tamanho, string Nome) {
    for (int i = 0; i < tamanho; i++) {
        const Produto& produto = estoque[i];
        if (produto.Nome == Nome) {
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

void editarProduto(Produto estoque[], int tamanho, int ID) {
    for (int i = 0; i < tamanho; i++) {
        Produto& produto = estoque[i];
        if (produto.ID == ID) {
            cout << "=== Edicao de Produto ===" << endl;

             // Limpa o buffer antes de ler o novo nome do produto
            cout << "Nome do Produto: ";
            cin >> produto.Nome;

            cout << "Preco: ";
            cin >> produto.Preco;

            cout << "Quantidade em Estoque: ";
            cin >> produto.QuantidadeEstoque;

             // Limpa o buffer antes de ler a nova data de validade
            cout << "Data de Validade: ";
            cin >> produto.DataValidade;

             // Limpa o buffer antes de ler a nova categoria
            cout << "Categoria: ";
            cin >> produto.Categoria;

            cout << "Produto editado com sucesso!" << endl;
            return;
        }
    }

    cout << "Produto nao encontrado." << endl;
}

void inserirProduto(Produto estoque[], int& tamanho, int posicao) {
    bool produtoExistente = false;

    if (posicao >= 0 && posicao <= tamanho) {
        Produto novoProduto;

        cout << "=== Cadastro de Produto ===" << endl;

        cin.ignore(); // Limpa o buffer antes de ler o nome do produto
        cout << "Nome do Produto: ";
        cin >> novoProduto.Nome;

        // Verifica se o nome ja existem no estoque
        for (int i = 0; i < tamanho && !produtoExistente; i++) {
            if (estoque[i].Nome == novoProduto.Nome) {
                produtoExistente = true;
            }
        }
        
        if (produtoExistente) {
            cout << "O produto com o mesmo nome já existe no estoque." << endl;
            return; // Interrompe a execução da função
        }
        produtoExistente = false;

        cout << "Preco: ";
        cin >> novoProduto.Preco;

        cout << "ID: ";
        cin >> novoProduto.ID;

        for(int i = 0; i <  tamanho && !produtoExistente; i++){
            if(estoque[i].ID == novoProduto.ID){
                produtoExistente = true;
            }
        }
        if (produtoExistente) {
            cout << "O produto com o mesmo ID ja existe no estoque." << endl;
            return; 
        }

        cout << "Quantidade em Estoque: ";
        cin >> novoProduto.QuantidadeEstoque;

        cin.ignore(); 
        cout << "Data de Validade: ";
        cin >> novoProduto.DataValidade;

        cin.ignore(); 
        cout << "Categoria: ";
        cin >> novoProduto.Categoria;

        for (int i = tamanho; i > posicao; i--) {
            estoque[i] = estoque[i - 1];
        }

        estoque[posicao] = novoProduto;
        tamanho++;

        cout << "Produto inserido com sucesso!" << endl;
    } else {
        cout << "Posicao invalida." << endl;
    }
}

void removerProduto(Produto estoque[], int& tamanho, int ID) {
    for (int i = 0; i < tamanho; i++) {
        if (estoque[i].ID == ID) {
            for (int j = i; j < tamanho - 1; j++) {
                estoque[j] = estoque[j + 1];
            }
            tamanho--;
            cout << "Produto removido com sucesso!" << endl;
            return;
        }
    }

    cout << "Produto nao encontrado." << endl;
}

void salvarEstoque(const Produto estoque[], int tamanho) {
    ofstream arquivoSalvo("produtos.csv");

    if (arquivoSalvo.is_open()) {
        for (int i = 0; i < tamanho; i++) {
            arquivoSalvo << estoque[i].ID << ",";
            arquivoSalvo << estoque[i].Nome << ",";
            arquivoSalvo << estoque[i].Preco << ",";
            arquivoSalvo << estoque[i].DataValidade << ",";
            arquivoSalvo << estoque[i].QuantidadeEstoque << ",";
            arquivoSalvo << estoque[i].Categoria << endl;
        }

        cout << "Estoque salvo com sucesso!" << endl;
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
    }

    arquivoSalvo.close();
}

bool carregarEstoque(Produto estoque[], int& tamanho) {
    ifstream arquivo("produtos.csv");

    if (arquivo.is_open()) {
       
        string linha;
        char lixeira;
        descobrirTamanho(arquivo, tamanho);

        for (int i = 0; i < tamanho; i++)
        {
            arquivo>> estoque[i].ID;
            arquivo >> lixeira;
            arquivo.getline(estoque[i].Nome,20, ',');
            arquivo >> estoque[i].Preco;
            arquivo >> lixeira;
            arquivo.getline(estoque[i].DataValidade,11, ',');
            arquivo >> estoque[i].QuantidadeEstoque;
            arquivo >> lixeira;
            arquivo.getline(estoque[i].Categoria,20, ',');
        }
        

       
        cout << "Estoque carregado com sucesso!" << endl;
        return true;
    } else {
        cout << "Erro ao abrir o arquivo." << endl;
        return false;
    }

    arquivo.close();
}

int main() {
    const int MAX_ESTOQUE = 100;
    Produto estoque[MAX_ESTOQUE];
    
    ifstream arquivo("produtos.csv");

    descobrirTamanho(arquivo,contador)
    int contador;
    int tamanho=contador;
   
    descobrirTamanho(arquivo, tamanho);

    // Carregar estoque do arquivo
    if (!carregarEstoque(estoque, tamanho))
        cout << "Erro ao carregar o estoque. Criando novo estoque..." << endl;

    int opcao;
    int ID;
    string Nome;
    do {
        cout << " ________________ MENU ____________________ " << endl;
        cout << "|   DIGITE [1] - Listar Produtos           |" << endl;
        cout << "|   DIGITE [2] - Buscar Produto Por ID     |" << endl;
        cout << "|   DIGITE [3] - Buscar Produto Por Nome   |" << endl;
        cout << "|   DIGITE [4] - Editar Produto            |" << endl;
        cout << "|   DIGITE [5] - Inserir Produto           |" << endl;
        cout << "|   DIGITE [6] - Remover Produto           |" << endl;
        cout << "|   DIGITE [0] - Sair                      |" << endl;
        cout << "|__________________________________________|" << endl;
        
        cout << "           OPCAO ESCOLHIDA: ";
        cin >> opcao;


        switch (opcao) {
            case 1:
                listarProdutos(estoque, tamanho);
                break;
            case 2:
                cout << "ID do Produto: ";
                cin >> ID;
                buscarProdutoPorID(estoque, tamanho, ID);
                break;
            case 3:
                cout << "Nome do Produto: ";
                cin >> Nome;
                buscarProdutoPorNome(estoque, tamanho, Nome);
                break;
            case 4:
                cout << "ID do Produto: ";
                cin >> ID;
                editarProduto(estoque, tamanho, ID);
                break;
            case 5:
                int posicao;
                cout << "Posicao: ";
                cin >> posicao;
                inserirProduto(estoque, tamanho, posicao);
                break;
            case 6:
                cout << "ID do Produto: ";
                cin >> ID;
                removerProduto(estoque, tamanho, ID);
                break;
            case 0:
                break;
            default:
                cout << "Opcao invalida." << endl;
                break;
        }
    } while (opcao != 0);

    // Salvar estoque no arquivo
    salvarEstoque(estoque, tamanho);

    return 0;
}
