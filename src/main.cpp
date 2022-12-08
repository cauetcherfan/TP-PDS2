#include <iostream>
#include <string>
#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "usuario.hpp"


int main (){

    Bibliotecario::Bibliotecario matt("Matheus", "123", "matheus@email.com", "1234-5678");

    Cliente::Cliente c("Cauet", "321", "cauetcherfan@yahoo.com", "(16) 98848-6818");

    std::string login, senha;

    bool reLogin = true;

    do{
        std::cout<<"Seja bem vindo(a) à Biblioteca Central"<<std::endl;
        std::cout<<"Digite o seu nome"<<std::endl;
        std::cin>>login;
        std::cout<<"Digite a sua senha"<<std::endl;
        std::cin>>senha;

        if(login == "Matheus" && senha == "123"){
            matt.verPerfil();
            reLogin = matt.exibirMenu();
        }

        if(login == "Cauet" && senha == "321")
        {
            c.verPerfil();
            reLogin = c.exibirMenu();
        }

        else if(login == "" && senha == ""){
            
        }else{
            std::cout<<std::endl<<"Login inválido! Tente novamente";
        }
    }while(reLogin);

}