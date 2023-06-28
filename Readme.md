# Sistema de Registro de Nomes - Cartório da EBAC

Este é um programa simples em linguagem C que implementa um sistema de registro, consulta e exclusão de nomes em um "Cartório da EBAC". O programa permite ao usuário realizar as seguintes operações:

1. Registrar nomes: O usuário pode cadastrar novos nomes fornecendo informações como CPF, nome, sobrenome e cargo.
2. Consultar nomes: O usuário pode pesquisar as informações de um nome registrado fornecendo o CPF correspondente.
3. Deletar nomes: O usuário pode excluir um nome registrado fornecendo o CPF correspondente.

## Requisitos

Para compilar e executar o programa, é necessário ter um compilador C instalado, como o GCC (GNU Compiler Collection) ou o Clang. O programa foi desenvolvido e testado em um ambiente Windows, mas deve funcionar em outros sistemas operacionais compatíveis com a linguagem C.

## Como executar o programa

1. Clone ou faça o download dos arquivos do projeto em um diretório local.

2. Abra um terminal ou prompt de comando e navegue até o diretório onde os arquivos do projeto estão localizados.

3. Compile o programa usando o comando de compilação adequado. Por exemplo, se estiver usando o GCC, execute o seguinte comando:

   ```shell
   gcc nome_do_arquivo.c -o programa
   ```

   Substitua "nome_do_arquivo.c" pelo nome do arquivo que contém o código fonte.

4. Após a compilação bem-sucedida, execute o programa digitando o seguinte comando:

   ```shell
   ./programa
   ```

5. O programa exibirá um menu com opções numeradas. Digite o número correspondente à operação desejada e pressione Enter.

6. Siga as instruções fornecidas pelo programa para cada operação específica.

## Observações

- O programa utiliza a biblioteca `stdio.h` para comunicação com o usuário, `stdlib.h` para alocação de memória, `locale.h` para alocação de texto por região e `string.h` para manipulação de strings.
- O programa armazena as informações dos nomes em arquivos individuais, utilizando o CPF como nome do arquivo.
- Os nomes são armazenados em formato de texto dentro dos arquivos, separados por vírgulas.
- O programa exibe mensagens informativas para o usuário em português.
- O programa possui um loop infinito que permite ao usuário realizar várias operações consecutivamente. Para sair do programa, pode ser necessário interromper a execução manualmente, dependendo do ambiente de desenvolvimento ou do sistema operacional utilizado.

**Observação:** O código fornecido parece ter alguns problemas e pode não funcionar corretamente. É recomendado revisar e corrigir o código antes de usá-lo em produção.