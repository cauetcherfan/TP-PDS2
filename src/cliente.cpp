#include "cliente.hpp"
#include "usuario.hpp"
#include <iostream>
#include <string>

Cliente::Cliente(std::string _nome, std::string _senha, std::string _email, std::string _telefone):
    Usuario(_nome, _senha, _email, _telefone) {}

Cliente::~Cliente(){}

bool Cliente::exibeMenu() {

	bool login = true;
	int op;

    std::string menu =
        "1 - Pesquisar livro pelo nome \n"
        "2 - Pesquisar livro pelo autor \n"
        "3 - Pesquisar livro pelo assunto \n"
        "4 - Reservar livro \n"
        "5 - Renovar reserva \n"
        "6 - Conferir valor da multa \n"
        "7 - Pagar multa \n"
        "8 - Ver perfil \n"
        "9 - Logoff \n"
        "10 - Sair \n";

    do{
		std::cout<<std::endl<<menu<<std::endl;
		std::cout<<"Digite a opção desejada"<<std::endl;
		std::cin>>op;
		if(op == 8){
			verPerfil();
		}else if(op == 9){
			login = false;
		}else if(op == 10){
            return false;
        }else{
			continue;
		}
	}while(login);

    return true;
}

void Cliente::verPerfil(){
    std::cout << std::endl;
    std::string presentation = "";
    presentation += "Olá! Eu sou o cliente " + nome;
    std::cout<<presentation<<std::endl;
    std::cout<<"Dados para contato:"<<std::endl;
    std::cout<<"Meu email é "<< email<< std::endl;
    std::cout<<"Meu telefone é "<<telefone<<std::endl;
}

void Cliente::pesquisarLivroNome(std::string _nome){}

void Cliente::pesquisarLivroAutor(std::string autor){}

void Cliente::pesquisarLivroAssunto(std::string assunto){}

void Cliente::reservarLivro(Cliente *cliente, std::string livro){}

void Cliente::renovarReserva(Cliente *cliente, std::string livro){}

void Cliente::conferirMulta(Cliente *cliente){}

void Cliente::pagarMulta(int valor){}