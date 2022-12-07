#include <iostream>
#include <string>
#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "usuario.hpp"


int main (){

    Bibliotecario::Bibliotecario matt("Matheus", "123", "matheus@email.com", "1234-5678");

    std::string login, senha;

    bool erroLogin = true;

    int rodar;
    do{
        do{
            std::cout<<"Seja bem vindo(a) à Biblioteca Central"<<std::endl;
            std::cout<<"Digite o seu nome"<<std::endl;
            std::cin>>login;
            std::cout<<"Digite a sua senha"<<std::endl;
            std::cin>>senha;

            if(login == "Matheus" && senha == "123"){
                matt.verPerfil();
                rodar = matt.exibirMenu();
                erroLogin = false;
            }
            else if(login == "" && senha == ""){
                
                erroLogin = false;
            }else{
                std::cout<<std::endl<<"Login inválido! Tente novamente";
            }
        }while(erroLogin);
    }


    // int rodando = 1;
    // while(rodando){

    // }
}