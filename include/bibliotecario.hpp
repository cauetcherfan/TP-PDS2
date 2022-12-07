#ifndef BIBLIOTECARIO_H
#define BIBLIOTECARIO_H

#include "usuarios.hpp"

/**
 * @file bibliotecario.hpp
 * @author Matheus 
 * @brief Armazena as caracteristicas do Bibliotecário
 * @version 1.0
 * @date 07-12-2022
 * @details O Bibliotecario é o administrador do sistema.
 * Ele pode realizar todas as pesquisas que Cliente faz,
 * porém, o Bibliotecário pode cadastrar itens no sistema,
 * como por exemplo, livros e outros Clientes,
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe Bibliotecário,
 * @details Atributos e métodos de Bibliotecário.
 */
class Bibliotecario : public Usuario {
  public:
	/**
	 * @brief Construtor da classe bibliotecário,
	 * @details Constrói um novo objeto Bibliotecario sem inicializar nenhum atributo
	 */
	Bibliotecario();

	/**
	 * @brief Construtor da classe bibliotecário,
	 * @details Constrói um novo objeto Bibliotecario recebendo o nome, senha, email e telefone.
	 * @param nome
	 * @param senha
	 * @param email
	 * @param telefone
	 */
	Bibliotecario(std::string nome, std::string senha, std::string email, std::string telefone);

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
	void cadastrarLivro(Bibliotecario *b);

	/**
	 * @brief Função que cadastra prateleiras,
	 * @details Cadastra uma nova prateleira no banco de dados. Recebe como parâmetro o Bibliotecário que fará o cadastro.
	 * @param b
	 */
	void cadastrarPrateleira(Bibliotecario *b);

	/**
	 * @brief Função que cadastra uma nova estante,
	 * @details Cadastra uma nova estante no banco de dados utilizado.
	 */
	void cadastrarEstante();

	/**
	 * @brief Função que cadastra um novo cliente,
	 * @details Cadastra um novo cliente no banco de dados utilizado.
	 */
	void cadastrarCliente();

	/**
	 * @brief Realiza a pesquisa no banco de dados sobre as reservas de um determinado livro e retorna a lista uma lista de clientes
	 *@details A lista de reserva funciona como uma fila, o primeiro cliente é, de fato, com quem está o livro.
				O segundo cliente pegará o livro assim que o primeiro devolver o livro para a biblioteca.
	 * @param livro
	 * @return std::list<Cliente>
	 */
	std::list<Cliente> pesquisarReserva(Livro livro);

	/**
	 * @brief Função que busca o ID da estante da respectiva categoria, 
	 * @details Busca, no banco de dados, o ID da estante que possui a categoria recebida como parâmetro.
	 * @param categoria
	 * @return int
	 */
	int buscaEstanteIDnobanco(std::string categoria);

	/**
	 * @brief Função que busca uma prateleira com assunto específico,
	 * @details Busca, no banco de dados, um objeto Prateleira que possui o assunto recebido como parâmetro.
	 * @param assunto
	 * @return Prateleira
	 */
	Prateleira buscaPrateleiranobanco(std::string assunto);

    void pesquisarLivroNome(Cliente *cliente, Livro *livro);

    void pesquisarLivroAutor(Cliente *cliente, Livro *livro);

    void pesquisarLivroAssunto(Cliente *cliente, Livro *livro);

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
	virtual ~Bibliotecario() = default;
};

#endif

/*
int Bibliotecario::exibeMenu() const {
	std::string textoMenuBibliotecario =
		"1 - Pesquisar livro pelo nome \n"
		"2 - Pesquisar livro pelo autor \n"
		"3 - Pesquisar livro pelo assunto \n"
		"4 - Pesquisar reservas de livros \n"
		"5 - Emprestar livro \n"
		"6 - Cadastrar livro \n"
		"7 - Cadastrar prateleira \n"
		"8 - Cadastrar estante \n"
		"9 - Cadastrar cliente \n"
		"10 - Ver perfil \n"
		"11 - Logoff \n"
		"12 - Sair \n";

	int opcao;

	std::cout << textoMenuBibliotecario << std::endl;

	std::cout << "Digite a opcao escolhida: ";

	std::cin >> opcao;

	return opcao;
}
*/