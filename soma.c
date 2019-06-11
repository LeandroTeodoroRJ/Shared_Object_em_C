//***********************************************************************
//    Arquivo fonte compilado em C com a função que será exportada
//***********************************************************************
/*
     Um arquivo Shared Object ".so" é o equivalente no Linux aos ".dll"
     (biblioteca dinâmica). São arquivos contendo fragmentos de códigos
     porém já compilados.
*/

#include <stdio.h>

extern soma(int a,int b);	//Cláusula que indica que a função será exportada
				//e não ficará somente restrita ao escopo interno
				//desse códido. 
				//Obs: Funcionou também sem essa linha de código
 
int soma(int a,int b)		//Função que será exportada, soma dois números
{
    int resultado;
    resultado = a+b;	
    return resultado;
}

// Como compilar um arquivo Shared Object ".so" utilizando o compilador gcc
// do Linux:

// Para compilar o arquivo objeto:
// gcc -c -fPIC <nome do arquivo fonte> -o <nome do arquivo objeto>
// gcc -c -fPIC soma.c -o soma.o

// Para criar o arquivo ".so"
// gcc <nome do arquivo objeto> -shared -o <nome do arquivo .so>
// gcc soma.o -shared -o libsoma.so

//********************** REFERÊNCIAS ************************
//https://stackoverflow.com/questions/14884126/build-so-file-from-c-file-using-gcc-command-line
//http://swig.org/tutorial.html (ver aqui)
//https://docs.python.org/3/library/ctypes.html
//https://www.cprogramming.com/tutorial/shared-libraries-linux-gcc.html
