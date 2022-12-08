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
 * @details 
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

    //Algumas das funções que nem vamos usar eu deixei sem parâmetro, mas se precisarmos usar de alguma forma, só implementar;

    /**
     * @brief 
     * @details
     */
        void reservarLivro();

    /**
     * @brief 
     * @details
     */
        void renovarLivro();

    /**
     * @brief 
     * @details
     * @return * void 
     */
        void pagarMulta();

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

    /**
     * @brief Set the Multa object
     * @details
     * @return * void 
     */
        void setMulta();

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