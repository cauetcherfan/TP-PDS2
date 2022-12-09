#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include <string>
#include "cliente.hpp"
#include "usuario.hpp"

/**
* @file bibliotecario.hpp
* @author Matheus 
* @brief Armazena as caracteristicas do Bibliotecário
* @version 2.0
* @date 07-12-2022
* @details O Bibliotecario é o administrador do sistema.
* Ele pode realizar todas as pesquisas que Cliente faz,
* porém, o Bibliotecário pode cadastrar itens no sistema,
* como por exemplo, livros e outros Clientes,
* @copyright GNU General Public License v2.0.
*/

/**
* @brief Classe Bibliotecario,
* @details Atributos e métodos de Bibliotecário.
*/
class Bibliotecario : public Usuario {
	public:

		/**
		* @brief Construtor da classe Bibliotecario,
		* @details Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
		* @param _nome
		* @param _senha
		* @param _email
		* @param _telefone
		*/
		Bibliotecario(std::string _nome, std::string _senha, std::string _email, std::string _telefone);

		/**
		 * @brief Função que imprime o perfil do Bibliotecario,
		 * @details Sobrescrita da função verPerfil() herdada de Usuario, por meio da qual o perfil do Bibliotecario é exibido, contendo uma saudação, nome, telefone e email do Bibliotecario instanciado.
		 */
		virtual void verPerfil() override;

		/**
		 * @brief  Função que realiza o empréstimo de livros,
		 * @details Empresta um livro para um Cliente, recebendo um ponteiro para o cliente, de modo a regitrar nesse objeto a alocação do livro.
		 * @param cliente
		 * @param livro
		 */
		void emprestarLivro(Cliente *cliente, std::string livro);

		/**
		 * @brief Função que realiza o cadastro de livros,
		 * @details Cadastra um novo livro, recebendo seu id, nome, autor e assunto .
		 * @param id
		 * @param nome
		 * @param autor
		 * @param assunto
		 */
		void cadastrarLivro(int id, std::string nome, std::string autor, std::string assunto);

		/**
		 * @brief Função que cadastra prateleiras,
		 * @details Cadastra uma nova prateleira, recebendo seu id, o id da estante correspondente e o assunto dessa prateleira.
		 * @param id
		 * @param idEstante
		 * @param assunto
		 */
		void cadastrarPrateleira(int id, int idEstante, std::string assunto);

		/**
		 * @brief Função que cadastra uma nova estante,
		 * @details Cadastra uma nova estante, recebendo seu id e assunto.
		 * @param id
		 * @param assunto
		 */
		void cadastrarEstante(int id, std::string assunto);

		/**
		 * @brief Função que cadastra um novo cliente,
		 * @details Cadastra um novo cliente, recebendo seu nome, senha, email e telefone.
		 * @param _nome
		 * @param _senha
		 * @param _email
		 * @param _telefone
		 */
		void cadastrarCliente(std::string _nome, std::string _senha, std::string _email, std::string _telefone);

		/**
		 * @brief Função que pesquisa um livro pelo nome,
		 * @details Pesquisa um livro pelo nome que é recebido como parâmetro.
		 * @param nome 
		 */
		void pesquisarLivroNome(std::string nome);

		/**
		 * @brief Função que pesquisa um livro pelo autor,
		 * @details Pesquisa um livro pelo nome do autor que é recebido como parâmetro.
		 * @param autor 
		 */
		void pesquisarLivroAutor(std::string autor);

		/**
		 * @brief Função que pesquisa um livro pelo assunto,
		 * @details Pesquisa um livro pelo assunto que é recebido como parâmetro.
		 * @param assunto 
		 */
		void pesquisarLivroAssunto(std::string assunto);

		/**
		 * @brief  Função que imprime o menu do bibliotecário,
		 * @details Reescrita do método exibeMenu() do Usuario para exibir o menu do Bibliotecário. Retorna qual opção do menu foi selecionada.
		 * @return bool
		 */
		virtual bool exibeMenu() override;

		/**
		 * @brief Destrutor da classe Bibliotecario
		 * @details Destrói o objeto do tipo Bibliotecario instanciado.
		 */
		~Bibliotecario();
};

#endif