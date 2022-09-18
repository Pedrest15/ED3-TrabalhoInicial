<h1>Prática de Arquivos Binários</h1>

<div align = 'justify'>
<p>Considere os seguintes dados a respeito de uma pessoa:</p>
<li>FIRSTNAME (i.e., primeiro nome da pessoa).
<li>LASTNAME (i.e., sobrenome da pessoa).
<li>EMAIL (i.e., endereço com e-mail da pessoa).
<li>NATIONALITY (i.e., país onde a pessoa nasceu).
<li>AGE (i.e., idade).
<p>Considere o tipo de arquivo de dados com campos de tamanho fixo em bytes e
registros de tamanho fixo em bytes</p>

<ol>
<li>Permita a gravação dos dados de várias pessoas em formato binário. Não é
necessário armazenar todos os registros em memória para escrevê-los em uma única
operação, você pode gravar os registros no arquivo a medida em que eles são lidos do
teclado.
<li>Permita a recuperação dos dados, de todas as pessoas, armazenados no arquivo
de dados, mostrando os dados de forma organizada na saída padrão para permitir a
distinção dos campos e registros.
<li>Dado o valor de um RRN (número relativo do registro), recupere o registro
mostrando seus dados de forma organizada na saída padrão para permitir a distinção
dos campos.
</ol>

<h2>ENTRADA</h2>
<p>A entrada do programa consiste em um comando a ser executado (1, 2 ou 3), o nome de um
arquivo a ser manipulado e entradas adicionais para cada comando:</p>
<p><b>COMANDO 1</b>: Recebe o número n de registros a serem lidos da entrada padrão e escritos no arquivo de
saída. Além disso, recebe os n registros a serem gravados, cada um com seus campos
separados em linhas diferentes.</p>
<p>Exemplo:</p>
<li>1 saida.bin
<li>1
<li>NomeExemplo
<li>SobrenomeExemplo
<li>exemplo@exemplo.com
<li>Brasileiro
<li>15

<p><b>COMANDO 2</b>:Não recebe entrada adicional.</p>
<p>Exemplo:</p>
<li>2 entrada.bin

<p><b>COMANDO 3</b>:Recebe o RRN do registro a ser lido do arquivo.</p>
<p>Exemplo:</p>
<li>3 entrada.bin
<li>0

<h2>SAÍDA</h2>
<p>A saída para o comando 1 será feita utilizando a função binarioNaTela.</p>
<p>A saída para os comandos 2 e 3 devem ter o seguinte formato para cada registro printado:</p>
<li>Firstname: “primeiro nome do registro escrito aqui”\n
<li>Lastname: “último nome do registro escrito aqui”\n
<li>Email: “email do registro escrito aqui”\n
<li>Nationality: “nacionalidade do registro escrito aqui”\n
<li>Age: “idade do registro escrito aqui”\n\n

<h2>SAÍDAS DE ERRO</h2>
<p>Erros como arquivos inexistentes e RRNs inválidos devem apresentar saídas diferentes: para
RRNs inválidos, a saída deverá ser “Não foi possível ler o arquivo”, enquanto que para
arquivos inexistentes a saída deverá ser “Falha no processamento do arquivo”.</p>

<h2>DETALHES</h2>
<p>Os tamanhos dos campos do registro de pessoa são os seguintes:</p>
<li>Firstname -> 51 bytes
<li>Lastname -> 51 bytes
<li>Email -> 81 bytes
<li>Nationality -> 51 bytes
<li>Age -> 4 bytes (int)
<p>O ‘\0’ das strings deve ser armazenado no arquivo de dados.</p>
<p>É necessário preencher o espaço restante do campo do registro com um caractere de lixo,
que será o ‘$’.</p>
