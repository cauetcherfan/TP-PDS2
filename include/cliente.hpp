#ifndef CLIENTE_H
#define CLIENTE_H

#include "usuario.hpp"

#include <iostream>
#include <list>
#include <string>

using namespace std;

Class Cliente : public Usuario
{
    private:
        list <Livro *> _livrosEmprestados;

        double _multa;
    
    public:
        Cliente();

        Cliente(Usuario *usuario);

        Cliente(bool LogarComoAdmin, string nome, string senha, string email, string telefone);

        Cliente(string nome, string senha, string email, string telefone);

        Cliente(string nome, string email, string telefone);

        void reservarLivro();

        void renovarLivro();

        void pagarMulta();

        list<Cliente> pesquisarReserva();

        int getIdCliente();

        list<Livro *> getLivrosEmprestados();

        double getMulta();

        void setLogarComoAdmin(bool LogarComoUsuario);

        void setMulta();

        virtual int exibeMenu() const override;

        virtual ~Cliente() = default;
};

#endif