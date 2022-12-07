#include "bibliotecario.hpp"
#include <string>

Bibliotecario::Bibliotecario(std::string n, std::string s, std::string e, std::string t):
    nome(n), senha(s), email(e), telefone(t) {}

~Bibliotecario(){}

int Bibliotecario::exibeMenu() override{

}

void verPerfil(){
    std::string presentation = "";
    presentation += "Olá! Eu sou o/a bibliotecário(a) " + nome;
    std::cout<<presentation<<std::endl;
    std::cout<<"Dados para contato:"<<std::endl;
    std::cout<<"Meu email é "<< email<< std::endl;
    std::cout<<"Meu telefone é "<<telefone<<std::endl;
}

//funções vazias

void Bibliotecario::pesquisarLivroNome(std::string nome){}

void Bibliotecario::pesquisarLivroAutor(std::string autor){}

void Bibliotecario::pesquisarLivroAssunto(std::string assunto){}

void Bibliotecario::emprestarLivro(Cliente *cliente, Livro *livro){}

void Bibliotecario::cadastrarLivro(int id, std::string nome, std::string autor, std::string assunto){}

void Bibliotecario::cadastrarPrateleira(int id, int idEstante, std::string assunto){}

void Bibliotecario::cadastrarEstante(int id, std::string assunto){}

void Bibliotecario::cadastrarCliente(string nome, string senha, string email, string telefone){}

// 		"11 - Logoff \n"
// 		"12 - Sair \n";