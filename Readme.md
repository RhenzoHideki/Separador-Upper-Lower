# Separador de maiúsculas e minúsculas

Escreva um programa que leia palavras de um arquivo e, ao final, apresente as palavras na tela da seguinte forma:

1. Todas as palavras que iniciam com letra maiúscula
1. Todas as palavras que iniciam com letra minúscula

Em ambos os casos, as palavras devem ser mostradas na ordem em que foram lidas do arquivo. Por exemplo, se o arquivo tiver este conteúdo:

```
Em um belo dia de sol, Bilica saiu de casa e foi pra praia do Campeche passear.
Após caminhar algumas horas, resolveu ir pro Centro.
```
... o programa deve mostrar:

```
Em Bilica Campeche Após Centro.
um belo dia de sol, saiu de casa e foi pra praia do passear caminhar algumas horas, resolveu ir pro
```

Seu programa deve ler o arquivo apenas uma vez (portanto, não pode ler o arquivo duas ou mais vezes). Use a estrutura de dados fila para resolver esse problema em seu programa.

O nome do arquivo é informado como primeiro argumento de linha de comando.

Dicas:

* leia [este resumo](https://wiki.sj.ifsc.edu.br/wiki/index.php/Introdu%C3%A7%C3%A3o_C%2B%2B#Argumentos_de_linha_de_comando) sobre argumentos de linha de comando
* use a [classe ifstream](https://wiki.sj.ifsc.edu.br/wiki/index.php/Introdu%C3%A7%C3%A3o_C%2B%2B#streams_e_arquivos) para acessar o arquivo
* a [leitura formatada](https://wiki.sj.ifsc.edu.br/wiki/index.php/Introdu%C3%A7%C3%A3o_C%2B%2B#Leitura_e_escrita_formatada) do arquivo facilita bastante a leitura de uma palavra por vez