#ifndef CLIENTE_H
#define CLIENTE_H

#include "usuario.hpp"

#include <iostream>
#include <list>
#include <string>

using namespace std;

/**
 * @file cliente.hpp
 * @author Cauet 
 * @brief Armazena as caracteristicas do Cliente
 * @version 1.0
 * @date 07-12-2022
 * @details 
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief 
 * 
 */
Class Cliente : public Usuario
{
    private:

    /**
     * @brief 
     * 
     */
        list <Livro *> _livrosEmprestados;

    /**
     * @brief 
     * 
     */
        double _multa;
    
    public:

    /**
     * @brief Construct a new Cliente object
     * 
     */
        Cliente();

    /**
     * @brief Construct a new Cliente object
     * 
     * @param usuario 
     */
        Cliente(Usuario *usuario);

    /**
     * @brief Construct a new Cliente object
     * 
     * @param LogarComoAdmin 
     * @param nome 
     * @param senha 
     * @param email 
     * @param telefone 
     */
        Cliente(bool LogarComoAdmin, string nome, string senha, string email, string telefone);

    /**
     * @brief Construct a new Cliente object
     * 
     * @param nome 
     * @param senha 
     * @param email 
     * @param telefone 
     */
        Cliente(string nome, string senha, string email, string telefone);

    /**
     * @brief Construct a new Cliente object
     * 
     * @param nome 
     * @param email 
     * @param telefone 
     */
        Cliente(string nome, string email, string telefone);

    //Algumas das funções que nem vamos usar eu deixei sem parâmetro, mas se precisarmos usar de alguma forma, só implementar;

    /**
     * @brief 
     * 
     */
        void reservarLivro();

    /**
     * @brief 
     * 
     */
        void renovarLivro();

    /**
     * @brief 
     * 
     * @return * void 
     */
        void pagarMulta();

    /**
     * @brief 
     * 
     * @return list<Cliente> 
     */
        list<Cliente> pesquisarReserva();

    /**
     * @brief Get the Id Cliente object
     * 
     * @return int 
     */
        int getIdCliente();

    /**
     * @brief Get the Livros Emprestados object
     * 
     * @return list<Livro *> 
     */
        list<Livro *> getLivrosEmprestados();

    /**
     * @brief Get the Multa object
     * 
     * @return double 
     */
        double getMulta();

    /**
     * @brief Set the Logar Como Admin object
     * 
     * @param LogarComoUsuario 
     */
        void setLogarComoAdmin(bool LogarComoUsuario);

    /**
     * @brief Set the Multa object
     * 
     * @return * void 
     */
        void setMulta();

    /**
     * @brief 
     * 
     * @return int 
     */
        virtual int exibeMenu() const override;

    /**
     * @brief Destroy the Cliente object
     * 
     */
        virtual ~Cliente() = default;
};

#endif