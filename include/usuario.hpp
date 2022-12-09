#ifndef USUARIO_H
#define USUARIO_H

#include <string>

/**
 * @file usuarios.hpp
 * @author Marcelle
 * @brief Armazena as caracteristicas do Usuário
 * @version 2.0
 * @date 07-12-2022
 * @details Um Usuário pode ser do tipo Cliente ou Bibliotecário. as funções exibeMenu() e verPerfil() são compartilhadas e adequada a cada tipo de usuario.
 * @copyright GNU General Public License v2.0.
 */

/**
 * @brief Classe usuario,
 * @details @details Atributos e métodos de usuario
 */
class Usuario {
	protected:

		/**
		* @brief Nome do Usuário,
		* @details Atributo com o nome do Usuário.
		 */
		std::string nome;

		/**
		 * @brief Senha do Usuário,
		 * @details Atributo com a senha do Usuário.
		 */
		std::string senha;

		/**
		 * @brief Email do Usuário,
		 * @details Atributo com o email do Usuário.
	 	 */
		std::string email;

		/**
		 * @brief Telefone do Usuário,
	 	 * @details Atributo com o telefone do Usuário.
		 */
		std::string telefone;

	public:

		/**
		 * @brief Construtor de Usuario,
		 * @details Constrói um novo objeto Usuario recebendo como parâmetro o nome, senha, email e telefone.
	 	 * @param nome
	 	 * @param email
		 * @param telefone
		 */
		Usuario(std::string _nome, std::string _senha, std::string _email, std::string _telefone);

		/**
		 * @brief Retorna o nome do Usuario,
	 	 * @details Função que retorna o nome do respectivo Usuario.
		 * @return std::string
		 */
		std::string getNome();

		/**
	   	 * @brief Retorna a senha do Usuario,
		 * @details Função que retorna a senha do respectivo Usuario.
		 * @return std::string
		 */
		std::string getSenha();

		/**
		 * @brief Retorna o email do usuario,
		 * @details Função que retorna o email do respectivo Usuario.
		 * @return std::string
		 */
		std::string getEmail();

		/**
		 * @brief Retorna o telefone do usuario,
		 * @details Função que retorna o telefone do respectivo Usuario.
		 * @return std::string
		 */
		std::string getTelefone();
			
		/**
		 * @brief  Função que imprime o menu do usuario,
		 * @details função puramente virtual do Usuario que sera Sobrescrita para exibir o menu do Bibliotecário ou cliente cada um com suas especificações das classes filhas. Retorna qual opção do menu foi selecionada.
		 * @return bool
		 */
		virtual bool exibeMenu() = 0;

		/**
		 * @brief Função que imprime o perfil do usuario,
		 * @details função puramente virtual do Usuario que sera Sobrescrita pelas classes filhas, por meio da qual o perfil do usuario é exibido, contendo uma saudação, nome, telefone e email do usuario instanciado.
		 */
		virtual void verPerfil() = 0;

};

#endif
