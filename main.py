#*************************************************************************************************
#                     Arquivo principal com código Python
#*************************************************************************************************

from ctypes import CDLL         #Importa o módulo ctypes necessário para trabalho com bibliotecas

hlibc = CDLL("./libsoma.so")    #Cria um objeto hlibc do tipo ctypes com os módulos de libsoma.so

iret = hlibc.soma(2, 7)         #Chama uma rotina interna contida em libsoma.so descrita em soma.c
print(iret)                     #Imprime o resultado