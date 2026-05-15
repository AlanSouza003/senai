Algoritmo "ContadorDeNotasParaSe"
Var
   valor, qtdNotas, i, notaAtual : inteiro
Inicio
   Escreva("Digite o valor: ")
   Leia(valor)

   notaAtual <- 50 // Começamos pela maior nota

   Para i de 1 ate 6 faca
      // Calcula a quantidade de notas e o que sobra
      qtdNotas <- valor \ notaAtual
      valor <- valor % notaAtual
      
      Se qtdNotas > 0 Entao
         Escreval(qtdNotas, " nota(s) de R$ ", notaAtual)
      FimSe

      // Lógica para decidir qual será a próxima nota na próxima volta
      Se notaAtual = 50 Entao
         notaAtual <- 20
      Senao
         Se notaAtual = 20 Entao
            notaAtual <- 10
         Senao
            Se notaAtual = 10 Entao
               notaAtual <- 5
            Senao
               Se notaAtual = 5 Entao
                  notaAtual <- 2
               Senao
                  notaAtual <- 1
               FimSe
            FimSe
         FimSe
      FimSe
   FimPara
Fimalgoritmo
