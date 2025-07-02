
Sistema de Gerenciamento de Reservas de Hotel

Equipe:
[MATHEUS FOGAÇA]
[GUILHERME BARBOSA]
[WALISON SILVA COUTINHO]
[]
[]

Descrição do Projeto
Este projeto consiste em um sistema desenvolvido na linguagem C para gerenciar as reservas de um hotel. Ele oferece funcionalidades essenciais como reserva de quartos, check-in, check-out e visualização das reservas em andamento. O objetivo é simular um sistema básico e funcional que permite a operação simples do controle de hospedagens.

Funcionalidades Implementadas
1. Reserva de Quartos
Permite que o usuário registre uma nova reserva informando o número do quarto, nome do hóspede e quantidade de dias de reserva. O sistema armazena essa informação e mantém o quarto reservado para aquele período. Se já houver reservas anteriores, a nova será registrada em fila.
2. Check-in
Responsável por registrar a entrada do hóspede no hotel. O sistema permite o check-in apenas para o primeiro hóspede que tiver reserva ativa naquele quarto (respeitando a ordem de chegada das reservas). Quando o check-in é feito, o quarto passa a estar marcado como ocupado.
3. Check-out
Permite registrar a saída do hóspede, liberando o quarto. Ao fazer o check-out, o quarto é marcado como disponível, a reserva ativa é finalizada, e a próxima reserva (se houver) poderá então fazer o check-in.
4. Visualização de Reservas Atuais
Exibe todas as reservas feitas, com os seguintes dados: número do quarto, nome do hóspede, quantidade de dias reservados e status da reserva (reservado, ocupado). Isso ajuda na organização e no controle dos quartos disponíveis e ocupados.
0. Encerramento do programa
Opção para sair do menu

Instalação
Clonando o Repositório
Via Git Bash:
git clone https://github.com/WalisonCoutinho/GERENC_RESERVAS_HOTEL.git
Ou baixe o ZIP no GitHub e extraia os arquivos.
Compilação do Código
1. Ter um compilador C instalado (ex: gcc)
2. Abrir o projeto na IDE (CLion, VSCode, etc.)
3. Compilar os arquivos e executar o programa.

Uso do Sistema
Menu Principal
Ao iniciar o programa, o usuário verá um menu com as seguintes opções:
1. Fazer Reserva
2. Realizar Check-In
3. Realizar Check-Out
4. Visualizar Reservas Atuais
0. Sair

Etapas do programa:           
1 - Fazer Reserva: O sistema solicitará o nome do hóspede, número do quarto e quantidade de dias. A reserva será registrada.
2 - Realizar Check-In: Informe o número do quarto. Se for o primeiro da fila de reservas, o sistema confirma a entrada.
3 - Realizar Check-Out: Informe o número do quarto. O sistema finaliza a reserva ativa e libera o quarto.
4 - Visualizar Reservas Atuais: Exibe um relatório com todas as reservas registradas.

Relação entre Funcionalidades
Cada etapa está diretamente ligada à anterior: uma reserva precisa ser feita antes do check-in, e o check-in precisa ocorrer antes do check-out. A visualização de reservas ajuda no acompanhamento do status de cada quarto.

Exemplo de Uso
Reservar Quarto: Digite 1, insira o número do quarto, nome do hóspede e a duração da estadia.
Check-in: Digite 2, informe o número do quarto. Será aceito apenas se houver reserva ativa para o quarto.
Check-out: Digite 3, informe o número do quarto. A reserva será finalizada.
Visualizar Reservas: Digite 4 e todas as reservas registradas serão exibidas.

