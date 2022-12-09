#include <iostream>
#include <string>
#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "usuario.hpp"


int main (){

    Bibliotecario matt("Matheus", "123", "matheus@email.com", "1234-5678");

    Cliente c("Cauet", "321", "cauetcherfan@yahoo.com", "(16) 98848-6818");

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
            reLogin = matt.exibeMenu();
        }

        else if(login == "Cauet" && senha == "321")
        {
            c.verPerfil();
            reLogin = c.exibeMenu();
        }
    
        else{
            std::cout<<std::endl<<"Login inválido! Tente novamente"<< std::endl;
        }
    }while(reLogin);

    return 0;
}