#include <iostream>
#include <string>
#include "bibliotecario.hpp"
#include "cliente.hpp"
#include "usuario.hpp"


int main (){

    Bibliotecario matt("Matheus", "123", "matt.salles@outlook.com", "(31) 99544-5804");

    Cliente cauet("Cauet", "321", "cauetcherfan@yahoo.com", "(16) 98848-6818");

    Cliente marcelle("Marcelle", "213", "marcelle@gmail.com", "(31) 99521-7763");

    std::string login, senha;

    bool reLogin = true;

    do{
        std::cout<<"Seja bem vindo(a) à Biblioteca Central"<<std::endl;
        std::cout<<"Digite o seu nome"<<std::endl;
        std::cin>>login;
        std::cout<<"Digite a sua senha"<<std::endl;
        std::cin>>senha;

        if(login == "Matheus" && senha == "123")
        {
            matt.verPerfil();
            reLogin = matt.exibeMenu();
        }

        else if(login == "Cauet" && senha == "321")
        {
            cauet.verPerfil();
            reLogin = cauet.exibeMenu();
        }

        else if(login == "Marcelle" && senha == "213")
        {
            marcelle.verPerfil();
            reLogin = marcelle.exibeMenu();
        }
    
        else
        {
            std::cout<<std::endl<<"Login inválido! Tente novamente"<< std::endl;
        }

    }while(reLogin);

    return 0;
}