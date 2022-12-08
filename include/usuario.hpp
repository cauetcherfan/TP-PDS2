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
 * @details
 */
class Usuario {
	protected:

		/**
		 * @brief 
		 * @details
		 */
			int _id;

		/**
		 * @brief 
		 * @details
		 */
			std::string _nome;

		/**
		 * @brief 
		 * @details
		 */
			std::string _senha;

		/**
		 * @brief 
		 * @details
		 */
			std::string _email;

		/**
		 * @brief 
		 * @details
		 */
			std::string _telefone;

	public:

		/**
		 * @brief Construct a new Usuario object
		 * @details
		 * @param nome 
		 * @param email 
		 * @param telefone 
		 */
		Usuario(std::string nome, std::string senha, std::string email, std::string telefone);

		/**
		 * @brief Set the Nome object
		 * @details
		 * @param nome 
		 */
			void setNome(std::string nome);

		/**
		 * @brief Set the Senha object
		 * @details
		 * @param senha 
		 */
			void setSenha(std::string senha);

		/**
		 * @brief Set the Email object
		 * @details
		 * @param email 
		 */
			void setEmail(std::string email);

		/**
		 * @brief Set the Telefone object
		 * @details
		 * @param telefone 
		 */
			void setTelefone(std::string telefone);

		/**
		 * @brief Get the Nome object
		 * @details
		 * @return std::string 
		 */
			std::string getNome();

		/**
		 * @brief Get the Senha object
		 * @details
		 * @return std::string 
		 */
			std::string getSenha();

		/**
		 * @brief Get the Email object
		 * @details
		 * @return std::string 
		 */
			std::string getEmail();

		/**
		 * @brief Get the Telefone object
		 * @details
		 * @return std::string 
		 */
			std::string getTelefone();
			
		/**
		 * @brief 
		 * @details
		 * @return int 
		 */
		virtual int exibeMenu() const;

};
