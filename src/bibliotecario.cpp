#include "bibliotecario.hpp"

Bibliotecario::Bibliotecario(){}

Bibliotecario::Bibliotecario(std::string n, std::string s, std::string e, std::string t):
    nome(n), senha(s), email(e), telefone(t) {}

virtual ~Bibliotecario() = default;

int Bibliotecario::exibeMenu() override{

}


//funções vazias

void Bibliotecario::pesquisarLivroNome(Cliente *cliente, Livro *livro){}

void Bibliotecario::pesquisarLivroAutor(Cliente *cliente, Livro *livro){}

void Bibliotecario::pesquisarLivroAssunto(Cliente *cliente, Livro *livro){}

void Bibliotecario::emprestarLivro(Cliente *cliente, Livro *livro){}

void Bibliotecario::cadastrarLivro(Bibliotecario *b){}

void Bibliotecario::cadastrarPrateleira(Bibliotecario *b){}

void Bibliotecario::cadastrarEstante(){}

void Bibliotecario::cadastrarCliente(){}

std::list<Cliente> Bibliotecario::pesquisarReserva(Livro livro){}

int Bibliotecario::buscaEstanteIDnobanco(std::string categoria){}

Prateleira Bibliotecario::buscaPrateleiranobanco(std::string assunto){}

// 		"10 - Ver perfil \n"
// 		"11 - Logoff \n"
// 		"12 - Sair \n";