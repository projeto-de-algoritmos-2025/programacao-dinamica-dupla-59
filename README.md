Programação Dinâmica

Número da Lista: 5
Conteúdo da Disciplina: FGA0124 - PROJETO DE ALGORITMOS

Alunos
<div align = "center"> <table> <tr> <td align="center"><a href="https://github.com/thalesgvl"><img style="border-radius: 50%;" src="https://github.com/thalesgvl.png" width="190;" alt=""/><br /><sub><b>Thales Germano Vargas Lima</b></sub></a></td> <td align="center"><a href="https://github.com/vcpVitor"><img style="border-radius: 50%;" src="https://github.com/vcpVitor.png" width="190;" alt=""/><br /><sub><b>Vitor Carvalho Pereira</b></sub></a></td> </tr> </table>
Matrícula	Aluno
20/2017147	Thales Germano Vargas Lima
21/1062615	Vitor Carvalho Pereira
</div>
Sobre

A atividade foi baseada na resolução de desafios de programação da plataforma LeetCode.
Foram selecionados 2 exercícios difíceis e um médio de Programação Dinâmica, cada um explorando uma vertente diferente da técnica: DP 2D clássico e DP otimizado com ordenação + subsequência crescente, entre outros.

Exercícios
72. Edit Distance
 – Medium

Dadas duas strings, o objetivo é calcular o mínimo número de operações (inserir, deletar ou substituir) necessárias para transformar uma string na outra.

Ideia (DP 2D)

Se os caracteres forem iguais, herdamos o custo da diagonal.

Caso contrário, escolhemos a melhor entre inserir, deletar ou substituir.

A resposta final é dp[n][m].

354. Russian Doll Envelopes
 – Hard

Cada envelope possui largura e altura, e pode conter outro envelope apenas se ambas forem menores.
A tarefa é encontrar o máximo número de envelopes encaixados em sequência.

Ideia (Ordenação + DP / LIS)

Ordenar por largura crescente e, em caso de empate, altura decrescente (evita conflitos).

Depois, o problema se reduz a encontrar a Longest Increasing Subsequence (LIS) das alturas.

A ordenação faz com que apenas a altura precise ser analisada na DP.

É possível resolver em O(n log n) com busca binária.

300. Longest Increasing Subsequence (LIS). – Hard

Dado um array de inteiros, encontrar o comprimento da maior subsequência estritamente crescente.

Ideia (DP + Busca Binária)




Apresentação

<div align="center">
  <a href="https://www.youtube.com/watch?v=Gyi0QSf7n-Y">
    <img src="./images/yt.png" width="50%">
  </a>
</div>

<font size="3"><p style="text-align: center">Autores: <a href="https://github.com/thalesgvl">Thales Germano Vargas Lima</a> & <a href="https://github.com/vcpVitor">Vitor Carvalho Pereira</a></p></font>

</div>
