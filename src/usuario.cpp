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

void Usuario::setNome(std::string _nome) {
	nome = _nome;
}

void Usuario::setSenha(std::string _senha) {
	senha = _senha;
}

void Usuario::setEmail(std::string _email) {
	email = _email;
}

void Usuario::setTelefone(std::string _telefone) {
	telefone = _telefone;
}