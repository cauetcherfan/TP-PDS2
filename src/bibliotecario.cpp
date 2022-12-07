#include "bibliotecario.hpp"
#include <iostream>
#include <string>

Bibliotecario::Bibliotecario(std::string n, std::string s, std::string e, std::string t):
    nome(n), senha(s), email(e), telefone(t) {}

~Bibliotecario(){}

int Bibliotecario::exibeMenu() override{

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
		std::cin>>op;
		if(op == 10){
			
		}else if(op == 11){
			login = false;
		}else{
			continue;
		}
	}while(login);
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

void Bibliotecario::logoff(){}

void Bibliotecario::sair(){}