#include "cliente.hpp"
#include <iostream>
#include <string>

Cliente::Cliente(std::string n, std::string s, std::string e, std::string t):
    nome(n), senha(s), email(e), telefone(t) {}

~Cliente(){}

bool Cliente::exibeMenu() override{

	bool login = true;
	int op;

    std::string menu =
        "1 - Pesquisar livro pelo nome \n"
        "2 - Pesquisar livro pelo autor \n"
        "3 - Pesquisar livro pelo assunto \n"
        "4 - Pesquisar reservas de livros \n"
        "5 - Conferir lista de livros emprestados \n"
        "6 - Conferir valor da multa \n"
        "7 - Pagar multa \n"
        "8 - Ver perfil \n"
        "9 - Logoff \n"
        "10 - Sair \n";

    do{
		std::cout<<std::endl<<menu<<std::endl;
		std::cout<<"Digite a opção desejada"<<std::endl;
		std::cin>>op;
		if(op == 9){
			return false;
		}else if(op == 10){
			login = false;
		}else{
			continue;
		}
	}while(login);
}

void verPerfil(){
    std::string presentation = "";
    presentation += "Olá! Eu sou o cliente " + nome;
    std::cout<<presentation<<std::endl;
    std::cout<<"Dados para contato:"<<std::endl;
    std::cout<<"Meu email é "<< email<< std::endl;
    std::cout<<"Meu telefone é "<<telefone<<std::endl;
}

//funções vazias

    void Cliente::reservarLivro(){}

    void Cliente::renovarLivro(){}

    void Cliente::pagarMulta(){}

    
