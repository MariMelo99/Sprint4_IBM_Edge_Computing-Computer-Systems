# Sprint4_IBM_Edge_Computing-Computer-Systems
Help Robotic Pharmacy
## Nome: Irana Pereira RM: 98593
## Nome: Lucas Vinicius Candido da Silva RM: 98480
## Nome: Mariana A Melo RM: 98121


### Este README fornece informações detalhadas sobre o projeto de IoT, incluindo uma descrição geral, a arquitetura proposta, recursos necessários, instruções de uso e outras informações relevantes.

## Descrição do Projeto
### O projeto de IoT proposto visa criar uma solução que permita monitorar e controlar dispositivos IoT usando uma combinação de Simulide, Node-RED, Tago Cloud e formato JSON para comunicação de dados. A solução é flexível e pode ser adaptada para várias aplicações, como monitoramento ambiental, automação residencial ou industrial, entre outros.

## Arquitetura Proposta
### A arquitetura da solução IoT é composta por três principais componentes: IoT devices, back-end e front-end.

## IoT Devices
### Os dispositivos IoT são sensores, atuadores ou dispositivos inteligentes que coletam informações do ambiente ou executam ações com base em comandos recebidos. Eles se comunicam com o back-end por meio de protocolos como MQTT ou HTTP, enviando e recebendo dados em formato JSON.

## Back-end
### O back-end é responsável por receber os dados dos dispositivos IoT, processá-los, armazená-los e disponibilizá-los para o front-end. O Node-RED é utilizado como a plataforma de automação e integração para facilitar a comunicação entre os dispositivos IoT e a Tago Cloud. O Node-RED também pode ser configurado para executar lógica personalizada, como alertas ou automações específicas do projeto.

## Front-end
### O front-end é a interface de usuário que permite aos utilizadores interagir com os dispositivos IoT e visualizar os dados coletados. Pode ser uma aplicação web ou móvel que acessa a Tago Cloud para exibir gráficos, tabelas e controles para monitorar e controlar os dispositivos.

## Recursos Necessários
### Para implementar esta solução IoT, são necessários os seguintes recursos:
## Dispositivos IoT
### Sensores, atuadores ou dispositivos inteligentes compatíveis com a comunicação via MQTT ou HTTP.
## Acesso à internet para enviar dados para o back-end.
### Back-end
### Servidor ou máquina onde o Node-RED será instalado.
### Instalação do Node-RED (https://nodered.org/docs/getting-started/installation).
### Conta na Tago Cloud (https://tago.io/).
### Configuração de dispositivos na Tago Cloud e obtenção de chaves de API para autenticação.
## Front-end
### Navegador da web moderno para acessar a interface do usuário.
## Instruções de Uso
### Aqui estão as etapas gerais para configurar e usar o projeto:
### Configure os dispositivos IoT para se comunicarem com o back-end usando os protocolos MQTT ou HTTP. Use as chaves de API da Tago Cloud para autenticação.
### Instale o Node-RED no servidor ou máquina escolhida.
### Crie um fluxo no Node-RED para receber dados dos dispositivos IoT, processá-los e enviar para a Tago Cloud. Use os nodes MQTT ou HTTP para comunicação com os dispositivos e o node Tago para enviar dados para a plataforma Tago Cloud.
### Na Tago Cloud, configure dispositivos, variáveis e dashboards para visualizar os dados coletados. Tais como temperatura, umidade (sensor DHT11) de distância(Ultrassônico).
### Implemente a interface de usuário do front-end para acessar os dados na Tago Cloud, usando as APIs disponíveis.
### Teste a solução, monitorando os dispositivos IoT, enviando comandos e visualizando os dados em tempo real.
### Documente seu projeto, incluindo informações de configuração, scripts e lógica do Node-RED, e a estrutura do banco de dados na Tago Cloud.


### Requisitos e Dependências
### Node-RED
### Tago Cloud
### Dispositivos IoT compatíveis com MQTT ou HTT

SUMÁRIO:
A Help Robotic Pharmacy oferece um serviço conveniente de entrega de medicamentos diretamente na casa ou local de escolha do cliente. Através da nossa plataforma, o cliente pode solicitar medicamentos e tê-los entregues em minutos por uma minivan autônoma, totalmente controlada por inteligência artificial.
Nosso projeto tem como objetivo estabelecer parcerias com diversas farmácias e drogarias, expandindo nosso portfólio de produtos para atender às necessidades e demandas dos clientes. Nossa proposta é proporcionar descontos significativos aos usuários finais, evitando a pressão por vendas casadas que frequentemente resultam em consumos inadequados de medicamentos e podem sobrecarregar o sistema de saúde no futuro.
Nossa minivan pode se locomover em um raio de 25 km e possui recursos avançados, como integração com inteligência artificial, controle de estoque, câmeras integradas, portas automáticas, ar-condicionado e um assistente de voz.
É importante ressaltar que, neste projeto, não oferecemos medicamentos que não são de venda livre, como antibióticos, antidepressivos, analgésicos opioides, anfetaminas, antipsicóticos, benzodiazepínicos e hormônios.
Nossa empresa foi fundada com o propósito de atender diversas necessidades da população, fornecendo não apenas medicamentos, mas também produtos de saúde, suplementos alimentares, produtos de higiene pessoal e cosméticos por meio de uma farmácia itinerante.
A minivan é um veículo elétrico com refrigeração interna e cinco câmeras integradas, todas controladas por inteligência artificial e alimentadas por um banco de dados constantemente atualizado. Nosso aplicativo e plataforma web estão disponíveis 24 horas por dia, 7 dias por semana, para atender às suas necessidades a qualquer momento.
A operação da minivan ocorre das 6h à meia-noite, todos os dias da semana, com intervalos para recarregamento de energia e reposição de estoque. 

PÚBLICO ALVO

A Help Robotic Pharmacy tem o compromisso de atender a um público amplo e diversificado, promovendo inclusividade e cuidado diferenciado para todos os usuários. Nosso projeto é desenvolvido com uma abordagem inclusiva, reconhecendo as necessidades específicas de diferentes grupos, como pessoas com mobilidade reduzida, idosos e aqueles que requerem acessibilidade devido a deficiências.
Para garantir a inclusão de todas as pessoas, implementamos medidas específicas em nossa minivan e plataforma, assegurando que cada aspecto do serviço seja acessível e amigável a todos os usuários. Aqui estão alguns dos pontos em que nos destacamos em termos de inclusividade:
•	Acessibilidade Física: A minivan foi projetada levando em consideração a acessibilidade física, facilitando a entrega do produto através de uma braço robótico com distanciamento proporcional de até um metro ao cliente que garantem um conforto para aquele que tem algum problema na aproximação total ao veículo.
•	Assistência Personalizada: Oferecemos assistência personalizada para idosos e pessoas com deficiência, garantindo que todas as etapas do processo, desde a realização do pedido até a entrega, sejam adaptadas às suas necessidades individuais. 
•	Comunicação Inclusiva: Implementamos recursos de comunicação em diversos formatos, incluindo mensagens de texto, notificações visuais e assistência de voz para garantir que todos os usuários possam receber informações importantes de maneira compreensível.
•	Interface Amigável: A plataforma web e o aplicativo foram desenvolvidos com uma interface amigável, pensando na diversidade de usuários. Adotamos práticas de design inclusivo para garantir uma experiência positiva para todos, como exemplo, detectar um deficiente físico visual ou auditivo com comunicação em libras.
•	Atendimento Prioritário: Estabelecemos procedimentos para priorizar o atendimento a pessoas com necessidades especiais, garantindo que os pedidos sejam processados de maneira eficiente e que a entrega seja feita levando em consideração suas condições específicas.

Funcionalidade proposta:
Sensor de distância(ultrassônico)
Sensor de temperatura(DHT11)
Sensor e umidade (DHT11)

Conexão com Arduino, Node Red, MQTT e Tago.
Nesta oportunidade houve mais algumas aplicações, sendo um leitor de LCD na proposta do cliente fornecer um token para recebimento do produto, foi utilizado arduino para apoio no protótipo do braço robótico e um placas de ESP32 para apoio no protótipo do carro e luva, vide documentação Word.
