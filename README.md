# jogo_da_cobrinha
Um jogo clássico da cobrinha desenvolvido em **C** para o terminal Linux utilizando a biblioteca **ncurses**.

O objetivo deste projeto é recriar o jogo Snake de forma modular e organizada, aplicando conceitos importantes da linguagem C, como estruturas de dados, matrizes, ponteiros, modularização, gerenciamento de memória e lógica de jogos.

Este projeto está sendo desenvolvido como parte do meu aprendizado em Ciência da Computação e também como um projeto de portfólio.

---

## ✨ Funcionalidades

* Movimento contínuo da cobra
* Controle por teclado (WASD)
* Geração aleatória de comida
* Sistema de pontuação
* Crescimento da cobra
* Colisão com paredes
* Colisão com o próprio corpo
* Menu inicial
* Tela de Game Over
* Recorde salvo em arquivo
* Interface colorida utilizando `ncurses`

---

## 🛠️ Tecnologias

* Linguagem C
* GCC
* ncurses
* Make
* Git

---

## 📁 Estrutura do projeto

```text
snake-c/
├── src/
├── include/
├── Makefile
├── README.md
└── .gitignore
```

---

## 🚀 Compilação

```bash
make
```

ou

```bash
gcc src/*.c -lncurses -o snake
```

---

## ▶️ Execução

```bash
./snake
```

---

## 🎮 Controles

| Tecla | Ação     |
| ----- | -------- |
| W     | Cima     |
| A     | Esquerda |
| S     | Baixo    |
| D     | Direita  |
| P     | Pausar   |
| Q     | Sair     |

---

## 📚 Objetivos de aprendizado

Durante o desenvolvimento deste projeto serão praticados conceitos como:

* Estruturas (`struct`)
* Matrizes
* Vetores
* Ponteiros
* Modularização
* Organização de projetos
* Manipulação de arquivos
* Entrada de teclado em tempo real
* Game Loop
* Programação no terminal utilizando `ncurses`

---

## 📌 Status

🚧 Projeto em desenvolvimento.

---

## 📄 Licença

Este projeto está licenciado sob a licença MIT.
