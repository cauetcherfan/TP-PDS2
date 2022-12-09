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

    Para compilar o programa, basta o comando make e para rodá-lo, ./main.out