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
 * 
 */
class Cliente : public Usuario
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
     * @param nome 
     * @param email 
     * @param telefone 
     */
        Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

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
        virtual bool exibeMenu() const override;

    /**
     * @brief Destroy the Cliente object
     * 
     */
    ~Cliente();
};

#endif