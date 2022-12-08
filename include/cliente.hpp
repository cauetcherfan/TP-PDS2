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
class Cliente : public Usuario{

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
        void reservarLivro(std::string livro);

        /**
         * @brief 
         * @details
         * @param livro 
         */
        void renovarReservar(Cliente *cliente, std::string livro);

        /**
         * @brief 
         * @details
         * @return * void 
         */
        void pagarMulta(double multa);

        /**
        * @brief Get the Multa object
        * @details
        * @return double 
        */
        double getMulta();

        /**
	    * @brief 
	    * @details
	    */
		void verPerfil();

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