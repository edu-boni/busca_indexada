# Busca Sequencial Indexada
## Índice

<nav>
  <header>
    <ul>
      <li>Importância geral</li>
      <li>O que é busca sequencial indexada?</li>
      <li>Projeto implementado</li>
      <li>Conclusão</li>
    </ul>
  </header>
</nav>

# Importância geral

<div>
  <p>
    A busca, quando falamos em programação e computação, é definitivamente um dos aspectos mais importantes e mais implementados pelos desenvolvedores. Afinal, quase todo projeto exige, em algum momento, uma busca, mesmo que ela seja pequena o suficiente a nível de nos exigir uma reflexão para depois dizermos: "Ah, sim, é uma busca". Por essa razão, é essencial que aprendamos os principais métodos de busca que as linguagens nos oferecem, para que a cada ocasião, possamos escolher a que mais nos faz sentido.
</div>

## O que é busca sequencial indexada?

<div>
  <p>
    Bem, é preciso entender primeiramente que diversos tipos e métodos de busca existem, mas para o momento atual, me proponho desenvovolver um pouco mais apenas a busca sequencial indexada, entretanto, é necessário que conheçamos os outros.
  </p>
  <p>
    A busca sequencial indexada nada mais é do que aplicar de uma maneira, digamos, um tanto mais dinâmica, a técnica mais óbvia e clara que pensamos ao precisar buscar determinada coisa, que basicamente é: olhar um por um, comparando se é o que eu busco, até encontrar (ou finalizar os dados) o alvo. Por isso temos o nome de sequência, afinal, seguimos de forma <i>sequencial</i> nossa busca.
  </p>
  <p>
    É importante termos como lógica, para aprimorar nossos projetos, que ao buscarmos um item na vida real, se o encontramos numa gaveta de uma cômoda, por exemplo, não procuramos mais nas seguintes, correto? Da mesma forma nosso código deve perceber que já encontrou o alvo e então, parar de buscar nas posições restantes, afinal, já sabemos o resultado. Buscaremos em todas as posições somente se ocorrer o que chamamos de pior caso: o alvo de fato estiver na última posição ou não estiver presente no arquivo.
  </p>
  <p>
    Ao realizarmos uma busca sequencial, precisamos ter em mente que os registros podem estar desordenados, sem uma classificação precisa, e neste caso, nossas opções de otimização caem radicalmente. Por essa razão, é importante, caso for possível, que antes de buscarmos o alvo, demos um jeito de ordenar o conjunto de dados em que ele pode ou não estar presente.
  </p>

### Mas e a parte indexada?

<p>
  Bem, como foi dito no último parágrafo da parte anterior, o fato de um conjunto de dados estar desorganizado diminui nossas opções, e isso é verdade, por exemplo, para a busca sequencial indexada, pois ela só pode ser aplicada se <i>o arquivo estiver ordenado</i>.
</p>

<p>
  Para implementarmos essa busca, precisamos criar uma tabela de indíces adicional que possuirá em seus intervalos determinada chave e um indicador de registro do arquivo original.
</p>
<p>
  A principal proposta e estratégia de utilizar esta técnica é dividirmos nosso arquivo para que não precisemos literalmente olhar um por um, apesar da busca ser sequencial. Assim, conseguimos reduzir o tempo de execução, tornando o processo mais eficiente
</p>

</div>

# Projeto implementado

<div>
  <p>Para a entrega da matéria de Estrutura de Dados do curso de Tecnologia em Sistemas para Internet, realizei a implementação de um projeto que contivesse como estratégia principal de busca, a sequencial indexada.</p>
  <p>
    Neste projeto, foi implementada uma busca sequencial indexada para encontrar um número em um array ordenado de 1 milhão de elementos. A busca é feita de forma otimizada ao dividir o array em intervalos de tamanho predefinido, permitindo que a pesquisa ignore grandes porções do array e se concentre apenas na seção onde o alvo pode estar.
  </p>

## Arquivos principais

<p>
  O código foi organizado em três arquivos:
</p>
<ul>
  <li>
    main.c: Contém a função principal main, responsável por inicializar o programa, gerar o array ordenado, exibir as opções para o usuário visualizar partes do array, e realizar a busca indexada pelo número alvo.
  </li>
  <li>
    utilitario.h: Cabeçalho que define as constantes e declarações de funções. Define o tamanho do array (SIZE) e intervalos (INTERVALO_100K, INTERVALO_10K e INTERVALO_5K), utilizados para dividir o array em blocos menores.
  </li>
  <li>
    implementacao.c: Implementa as funções de geração do array, busca indexada, e impressão.
  </li>
</ul>

<p>
  O programa gera um array ordenado de 1 milhão de elementos com valores aleatórios crescentes, justamente criando a ordenação recomendada dita anteriormente. Ele permite que o usuário visualize parte do array para verificar a sequência dos dados. Na busca por um valor específico, o programa divide o array em blocos progressivamente menores: começa com blocos de 100 mil posições, passa para blocos de 10 mil e depois de 5 mil. Isso permite descartar grandes partes do array rapidamente, concentrando a busca sequencial no bloco onde o valor alvo provavelmente está, tornando a busca muito mais veloz.
</p>

# Conclusão

<p>
  Bem, analisando meu projeto e a rápida explicação, conseguimos ter uma visão geral a respeito da importância da busca e como funciona a sequencial indexada. É importante salientar, entretanto, que meu projeto possui um método dentre várias possibilidades, e que é possível realizar uma implementação de outras técnicas de busca, mas mesmo dentro da sequencial indexada, pode-se desenvolver de outras maneiras. Por isso, busque sempre o que é mais adequado para o código em questão.
</p>
<p>
  Eduardo Ferreira Bonifacio - 02/11/2024
</p>
</div>
