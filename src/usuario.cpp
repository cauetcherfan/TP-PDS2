#include <list>
#include <string>
#include "usuario.hpp"

Usuario::Usuario(){};

Usuario::Usuario(std::string nome, std::string email, std::string telefone) {
	_nome = nome;
	_email = email;
	_telefone = telefone;
}

int Usuario::exibeMenu() const {
	return -1;
}



std::string Usuario::getNome() {
	
	return _nome;
}

std::string Usuario::getSenha() {
	return _senha;
}

std::string Usuario::getEmail() {
	return _email;
}

std::string Usuario::getTelefone() {
	return _telefone;

}

void Usuario::setNome(std::string nome) {
	_nome = nome;
}

void Usuario::setSenha(std::string senha) {
	_senha = senha;
}

void Usuario::setEmail(std::string email) {
	_email = email;
}

void Usuario::setTelefone(std::string telefone) {
	_telefone = telefone;
}
