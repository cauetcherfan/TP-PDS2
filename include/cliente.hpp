#ifndef CLIENTE_H
#define CLIENTE_H

#include "usuario.hpp"
#include <string>

/**
 * @file cliente.hpp
 * @author Cauet 
 * @brief Armazena as caracteristicas do Cliente
 * @version 1.0
 * @date 07-12-2022
 * @details  O Cliente é o "usuário comum" do sistema.
 *           Ele pode realizar as pesquisas no sistema, como buscar um livro pelo nome ou autor,
 *           fazer reservas de livros e administar suas multas por atraso.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief 
 * @details
 */
class Cliente : public Usuario
{
    private:

    /**
     * @brief 
     * @details
     */
        list <Livro *> _livrosEmprestados;

    /**
     * @brief 
     * @details
     */
        double _multa;
    
    public:

    /**
     * @brief Construct a new Cliente object
     * @details
     * @param nome 
     * @param email 
     * @param telefone 
     */
        Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

    // Funções que não serão implementadas;

    /**
     * @brief 
     * @details
     */
        void reservarLivro(Livro *livro);

    /**
     * @brief 
     * @details
     * @param livro 
     */
        void renovarReservar(Livro *livro);

    /**
     * @brief 
     * @details
     * @return * void 
     */
        void pagarMulta(double multa);

    /**
     * @brief 
     * @details
     * @param livro 
     * @return std::list<Cliente> 
     */
        std::list<Cliente> pesquisarReserva(Livro livro);

    /**
     * @brief Get the Id Cliente object
     * @details
     * @return int 
     */
        int getIdCliente();

    /**
     * @brief Get the Livros Emprestados object
     * @details
     * @return list<Livro *> 
     */
        list<Livro *> getLivrosEmprestados();

    /**
     * @brief Get the Multa object
     * @details
     * @return double 
     */
        double getMulta();

    /**
     * @brief Set the Logar Como Admin object
     * @details
     * @param LogarComoUsuario 
     */
        void setLogarComoAdmin(bool LogarComoUsuario);
        //void setTipoUsuario(bool tipoUsuario);

    /**
     * @brief Set the Multa object
     * @details
     * @return * void 
     */
        void setMulta(double multa);

    /**
     * @brief 
     * @details
     * @return int 
     */
        virtual bool exibeMenu() const override;

    /**
     * @brief Destroy the Cliente object
     * @details
     */
        ~Cliente();
};

#endif