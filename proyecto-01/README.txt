# Esta pauta esta referenciada de la pagina http://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/


# Instalando el compilador C/C++ 

# Instalando com yum
$ yum groupinstall 'Development Tools'

# Instalando con apt
$ sudo apt-get update
$ sudo apt-get install build-essential manpages-dev

# Validando la instalacion

$ whereis gcc
$ which gcc
$ gcc --version

---------------------------------------------------------------------------------------------
# Compilando programas en C
Los archivos en c tienen la extension *.c, estos pueden ser compilados de la siguiente forma:

1. usando cc
$ cc program-source-code.c -o executable-file-name
2. usando gcc
$ gcc program-source-code -o executable-file-name
3. usando make, se asume que el archivo program-source-code.c existe en el actual directorio
$ make executable-file-name

# Compilando programas en C++
Los archivos en C++ tienen la extension *.C, estos pueden ser compilados de la siguiente forma:

1. usando g++
$ g++ program-source-code.C -o executable-file-name
2. usando make
$ make executable-file-name

