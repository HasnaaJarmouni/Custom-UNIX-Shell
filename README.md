"# Custom-UNIX-Shell" 
# Mini Shell en C

Petit mini-shell développé en C sous Lubuntu.

Le but du projet était de comprendre un peu mieux comment fonctionne un terminal Linux en créant une version simplifiée d’un shell UNIX.

Le programme peut lire et exécuter des commandes Linux directement depuis le terminal.

## Fonctionnalités

- prompt personnalisé
- lecture des commandes utilisateur
- parsing des arguments
- exécution des commandes Linux
- gestion des processus avec `fork()` et `execvp()`
- commandes internes :
  - cd
  - clear
  - exit

## Structure du projet

src/ <br>
├── main.c <br>
├── parser.c <br>
├── executor.c <br>
├── prompt.c <br>
├── builtins.c <br>
├── utils.c <br>
include/ <br>
└── shell.h

## Compilation
make

## Lancement du shell
./hasnaashell

## Exemples de commandes
ls <br>
pwd <br>
whoami <br>
date <br>
echo hello <br>

## Technologies utilisées
- Langage C
- GCC
- Linux/Lubuntu
- GitHub
