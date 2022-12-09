#ifndef CLIENTE_H
#define CLIENTE_H

#include "usuario.hpp"
#include <string>

/**
 * @file cliente.hpp
 * @author Cauet 
 * @brief Armazena as caracteristicas do Cliente,
 * @version 1.0
 * @date 07-12-2022
 * @details  O Cliente é o "usuário comum" do sistema.
 *           Ele pode realizar as pesquisas no sistema, como buscar um livro pelo nome ou autor,
 *           fazer reservas de livros e administar suas multas por atraso.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Cliente,
 * @details Contém os métodos de Cliente.
 */
class Cliente : public Usuario{

    public:

        /**
         * @brief Construtor da classe Cliente,
         * @details Constrói e instancia um novo objeto Cliente a partir dos parâmetros nome, senha, email e telefone recebidos.
         * @param nome 
         * @param email 
         * @param telefone 
         */
        Cliente(std::string nome, std::string senha, std::string email, std::string telefone);

        /**
         * @brief Função que realiza a reserva de um livro,
         * @details Reserva um livro para um Cliente, recebendo um ponteiro para o cliente, de modo a registrar nesse objeto a reserva de um livro.
         */
        void reservarLivro(Cliente *cliente, std::string livro);

        /**
         * @brief Função que renova a reserva de um livro,
         * @details Renova a reserva de um livro para um Cliente, recebendo um ponteiro para o cliente, de modo a renovar a reserva, diretamente no objeto recebido.
         * @param livro 
         */
        void renovarReserva(Cliente *cliente, std::string livro);

        /**
         * @brief Função responsável pelo pagamento da multa,
         * @details Realiza o pagamento da multa de um Cliente em questão, recebendo como parâmetro o valor dessa multa.
         * @param valor 
         */
        void pagarMulta(int valor);

        /**
         * @brief Função que confere a existência da multa,
         * @details Confere a respectiva multa de um determinado Cliente, que foi recebido por referência no parâmetro da função.
         * @param cliente 
         */
        void conferirMulta(Cliente *cliente);

        /**
         * @brief Função que pesquisa um livro pelo seu nome,
         * @details Realiza a pesquisa de um livro através de seu nome, recebido como parâmetro.
         * @param _nome 
         */
        void pesquisarLivroNome(std::string _nome);

        /**
         * @brief Função que pesquisa um livro pelo seu autor,
         * @details Realiza a pesquisa de um livro através de seu autor, recebido como parâmetro.
         * @param autor 
         */
        void pesquisarLivroAutor(std::string autor);

        /**
         * @brief Função que pesquisa um livro pelo seu assunto,
         * @details Realiza a pesquisa de um livro através de seu assunto, recebido como parâmetro.
         * @param assunto 
         */
        void pesquisarLivroAssunto(std::string assunto);

        /**
		 * @brief Função que imprime o perfil do Cliente,
		 * @details Sobrescrita da função verPerfil() herdada de Usuario, por meio da qual o perfil do Cliente é exibido, contendo uma saudação, nome, telefone e email do Cliente instanciado.
		 */
		virtual void verPerfil() override;

        /**
	    * @brief Função que imprime o menu do Cliente,
		* @details Sobrescrita da função exibeMenu() herdada de Usuario, por meio da qual o menu do Cliente é       exibido, contendo diversas funções possíveis (nem todas funcionais). 
	    */
        virtual bool exibeMenu() override;

        /**
         * @brief Destrutor da classe Cliente,
         * @details Destrói o objeto do tipo Cliente instanciado.
         */
        ~Cliente();
};

#endif