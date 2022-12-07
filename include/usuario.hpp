#ifndef USUARIO_H
#define USUARIO_H
#include <list>
#include <string>
class Usuario {
  protected:
	
	

	
	bool LogarComoAdmin;

	
	std::string nome;


	std::string senha;

	std::string email;

	std::string telefone;

  public:
	
	Usuario();

	
	Usuario(std::string nome, std::string email, std::string telefone);

	
	Livro pesquisarLivroPorNome(std::string nomedoLivro);

	std::list<Livro> pesquisarLivroPorAutor(std::string nomedoAutor);

	std::list<Livro> pesquisarLivroPorAssunto(std::string assunto);
	 void cadastrarCliente(Cliente cliente);

	 virtual std::list<Cliente> pesquisarReserva(Livro livroParaReserva) = 0;

	void setId(int id);

	
	void setLogarComoAdmin(bool LogarComoAdmin);

	void setNome(std::string nome);

	
	void setSenha(std::string senha);


	void setEmail(std::string email);

	
	void setTelefone(std::string telefone);


	int getId();

	
	bool getLogarComoAdmin();

	std::string getNome();

	std::string getSenha();

	std::string getEmail();

	std::string getTelefone();

	virtual int ImprimirMenu() const;
};


