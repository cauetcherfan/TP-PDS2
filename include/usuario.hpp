#ifndef USUARIO_H
#define USUARIO_H

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
		std::string nome;

		/**
		 * @brief 
		 * @details
		 */
		std::string senha;

		/**
		 * @brief 
		 * @details
		 */
		std::string email;

		/**
		 * @brief 
		 * @details
		 */
		std::string telefone;

	public:

		/**
		 * @brief Construct a new Usuario object
		 * @details
		 * @param _nome 
		 * @param _email 
		 * @param _telefone 
		 */
		Usuario(std::string _nome, std::string _senha, std::string _email, std::string _telefone);

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
		virtual bool exibeMenu() = 0;

		virtual void verPerfil() = 0;

};

#endif