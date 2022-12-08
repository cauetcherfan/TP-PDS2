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
			int _id;
		/**
		 * @brief 
		 * 
		 */
			std::string _nome;

		/**
		 * @brief 
		 * 
		 */
			std::string _senha;

		/**
		 * @brief 
		 * 
		 */
			std::string _email;

		/**
		 * @brief 
		 * 
		 */
			std::string _telefone;
		/**
		 * @brief 
		 * 
		 */
			
			

	public:

		/**
		 * @brief Construct a new Usuario object
		 * 
		 * @param nome 
		 * @param email 
		 * @param telefone 
		 */
		Usuario(std::string nome, std::string senha, std::string email, std::string telefone);

		
			
	
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
			
		virtual int exibeMenu() const;

};
