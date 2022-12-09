# TP-PDS2
Sistema parcial de biblioteca.

O programa implementado visa demonstrar, na prática, conceitos aprendidos relacionados à orientação a objetos.
    Foram implementadas três classes, sendo elas:
        - Classe Usuario (Classe-Mãe);
        - Classe Cliente (Subclasse);
        - Classe Bibliotecario (Subclasse);
    
    Com tais classes em mão, implementamos uma relação de herança entre a Classe-Mãe e suas respectivas subclasses. Tal herança é observada na própria declaração das subclasses, onde utilizamos "Class (nome da subclasse) : public Usuario{...}".
    O uso de polimorfismo também pode ser observado, de modo prático, na função exibeMenu(), a qual é apenas uma interface na Classe-Mãe (Usuario) e, nas subclasses, é implementado um comportamento específico para cada Classe-Filha, realizando assim o conceito de polimorfismo aprendido ao longo do curso.
    Como solicitado, o programa foi criado de maneira suscinta e objetiva, onde apenas algumas funções necessárias para o funcionamento básico foram implementadas, como por exemplo as funcionalidades "logoff" e "sair" que, quando acionadas, realizam o comportamento esperado.

    Para compilar o programa, basta o utilizar o comando make no terminal  e, para rodá-lo, basta digitar ./main.out
    Uma vez compilado e pronto para ser executado, deve-se usar o nome "Matheus" e a senha "123" para logar como bibliotecário no sistema e, para logar como cliente, deve-se usar o nome "Cauet" e a respectiva senha "321", dessa forma você poderá visualizar e testar todas as funcionalidades implementadas no projeto.