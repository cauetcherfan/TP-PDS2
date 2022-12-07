#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "usuarios.hpp"

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
	 * @brief Construtor da classe bibliotecário,
	 * @details Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone);

    void verPerfil();

	/**
	 * @brief  Função que realiza o empréstimo de livros,
	 * @details Realiza as ações necessárias para emprestar um livro para um Cliente.
	 * @param cliente
	 * @param livro
	 */
	void emprestarLivro(Cliente *cliente, Livro *livro);

	/**
	 * @brief Função que realiza o cadastro de livros,
	 * @details Cadastra um novo livro no banco de dados. Recebe como parâmetro o Bibliotecário que fará o cadastro.
	 * @param b
	 */
	void cadastrarLivro(int id, std::string nome, std::string autor, std::string assunto);

	/**
	 * @brief Função que cadastra prateleiras,
	 * @details Cadastra uma nova prateleira no banco de dados. Recebe como parâmetro o Bibliotecário que fará o cadastro.
	 * @param b
	 */
	void cadastrarPrateleira(int id, int idEstante, std::string assunto);

	/**
	 * @brief Função que cadastra uma nova estante,
	 * @details Cadastra uma nova estante no banco de dados utilizado.
	 */
	void cadastrarEstante(int id, std::string assunto);

	/**
	 * @brief Função que cadastra um novo cliente,
	 * @details Cadastra um novo cliente no banco de dados utilizado.
	 */
	void cadastrarCliente(string nome, string senha, string email, string telefone);

    void pesquisarLivroNome(std::string nome);

    void pesquisarLivroAutor(std::string autor);

    void pesquisarLivroAssunto(std::string assunto);

	/**
	 * @brief  Função que exibe o menu do bibliotecário,
	 * @details Reescrita do método exibeMenu() do Usuario para exibir o menu do Bibliotecário.
	 * 			Retorna qual opção do menu foi selecionada.
	 *
	 * @return int
	 */
	virtual int exibeMenu() override;

	/**
	 * @brief Destrói o objeto Bibliotecário
	 * @details Destrói a classe Bibliotecário instanciada.
	 *
	 */
	~Bibliotecario();
};

#endif