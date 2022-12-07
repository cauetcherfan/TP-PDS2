#ifndef USUARIO_H
#define USUARIO_H
#include <list>
#include <string>

/**
 * @file usuarios.hpp
 * @author Marcelle
 * @brief Armazena as caracteristicas do Usuário
 * @version 1.0
 * @date 07-12-2022
 * @details 
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief 
 * 
 */
class Usuario {
  protected:
	
	/**
	 * @brief 
	 * 
	 */
		bool LogarComoAdmin;

	/**
	 * @brief 
	 * 
	 */
		std::string nome;

	/**
	 * @brief 
	 * 
	 */
		std::string senha;

	/**
	 * @brief 
	 * 
	 */
		std::string email;

	/**
	 * @brief 
	 * 
	 */
		std::string telefone;

  public:

	/**
	 * @brief Construct a new Usuario object
	 * 
	 */
		Usuario();

	/**
	 * @brief Construct a new Usuario object
	 * 
	 * @param nome 
	 * @param email 
	 * @param telefone 
	 */
		Usuario(std::string nome, std::string email, std::string telefone);

	/**
	 * @brief 
	 * 
	 * @param nomedoLivro 
	 * @return Livro 
	 */
		Livro pesquisarLivroPorNome(std::string nomedoLivro);

	/**
	 * @brief 
	 * 
	 * @param nomedoAutor 
	 * @return std::list<Livro> 
	 */
		std::list<Livro> pesquisarLivroPorAutor(std::string nomedoAutor);

	/**
	 * @brief 
	 * 
	 * @param assunto 
	 * @return std::list<Livro> 
	 */
		std::list<Livro> pesquisarLivroPorAssunto(std::string assunto);

	/**
	 * @brief 
	 * 
	 * @param cliente 
	 */
		void cadastrarCliente(Cliente cliente);

	/**
	 * @brief 
	 * 
	 * @param livroParaReserva 
	 * @return std::list<Cliente> 
	 */
		virtual std::list<Cliente> pesquisarReserva(Livro livroParaReserva) = 0;

	/**
	 * @brief Set the Id object
	 * 
	 * @param id 
	 */
		void setId(int id);

	/**
	 * @brief Set the Logar Como Admin object
	 * 
	 * @param LogarComoAdmin 
	 */
		void setLogarComoAdmin(bool LogarComoAdmin);

	/**
	 * @brief Set the Nome object
	 * 
	 * @param nome 
	 */
		void setNome(std::string nome);

	/**
	 * @brief Set the Senha object
	 * 
	 * @param senha 
	 */
		void setSenha(std::string senha);

	/**
	 * @brief Set the Email object
	 * 
	 * @param email 
	 */
		void setEmail(std::string email);

	/**
	 * @brief Set the Telefone object
	 * 
	 * @param telefone 
	 */
		void setTelefone(std::string telefone);

	/**
	 * @brief Get the Id object
	 * 
	 * @return int 
	 */
		int getId();

	/**
	 * @brief Get the Logar Como Admin object
	 * 
	 * @return true 
	 * @return false 
	 */
		bool getLogarComoAdmin();

	/**
	 * @brief Get the Nome object
	 * 
	 * @return std::string 
	 */
		std::string getNome();

	/**
	 * @brief Get the Senha object
	 * 
	 * @return std::string 
	 */
		std::string getSenha();

	/**
	 * @brief Get the Email object
	 * 
	 * @return std::string 
	 */
		std::string getEmail();

	/**
	 * @brief Get the Telefone object
	 * 
	 * @return std::string 
	 */
		std::string getTelefone();

	/**
	 * @brief 
	 * 
	 * @return int 
	 */
		virtual int ImprimirMenu() const;
};


