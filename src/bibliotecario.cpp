#include <iostream>
#include <string>
#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "usuario.hpp"

Bibliotecario::Bibliotecario(std::string _nome, std::string _senha, std::string _email, std::string _telefone):
    Usuario(_nome, _senha, _email, _telefone) {}

Bibliotecario::~Bibliotecario(){}

bool Bibliotecario::exibeMenu() {

	bool login = true;
	int op;

    std::string menu =
		"1 - Pesquisar livro pelo nome \n"
		"2 - Pesquisar livro pelo autor \n"
		"3 - Pesquisar livro pelo assunto \n"
		"4 - Emprestar livro \n"
		"5 - Cadastrar livro \n"
		"6 - Cadastrar prateleira \n"
		"7 - Cadastrar estante \n"
		"8 - Cadastrar cliente \n"
		"9 - Ver perfil \n"
		"10 - Logoff \n"
		"11 - Sair \n";

    do{
		std::cout<<std::endl<<menu<<std::endl;
		std::cout<<"Digite a opção desejada"<<std::endl;
		std::cin>>op;
		if(op == 9){
			verPerfil();
		}else if(op == 10){
			login = false;
		}else if(op == 11){
			return false;
		}else{
			continue;
		}
	}while(login);

	return true;
}

void Bibliotecario::verPerfil(){
	std::cout << std::endl;
    std::string presentation = "";
    presentation += "Olá! Eu sou o/a bibliotecário(a) " + nome;
    std::cout<<presentation<<std::endl;
    std::cout<<"Dados para contato:"<<std::endl;
    std::cout<<"Meu email é "<< email<< std::endl;
    std::cout<<"Meu telefone é "<<telefone<<std::endl;
}

//funções vazias

void Bibliotecario::pesquisarLivroNome(std::string _nome){}

void Bibliotecario::pesquisarLivroAutor(std::string autor){}

void Bibliotecario::pesquisarLivroAssunto(std::string assunto){}

void Bibliotecario::emprestarLivro(Cliente *cliente, std::string livro){}

void Bibliotecario::cadastrarLivro(int id, std::string nome, std::string autor, std::string assunto){}

void Bibliotecario::cadastrarPrateleira(int id, int idEstante, std::string assunto){}

void Bibliotecario::cadastrarEstante(int id, std::string assunto){}

void Bibliotecario::cadastrarCliente(std::string _nome, std::string _senha, std::string _email, std::string _telefone){}