#include <string>
#include "usuario.hpp"

Usuario::Usuario(std::string _nome, std::string _senha, std::string _email, std::string _telefone) {
	nome = _nome;
	senha = _senha;
	email = _email;
	telefone = _telefone;
}

bool Usuario::exibeMenu() {};

std::string Usuario::getNome() {
	return nome;
}

std::string Usuario::getSenha() {
	return senha;
}

std::string Usuario::getEmail() {
	return email;
}

std::string Usuario::getTelefone() {
	return telefone;
}