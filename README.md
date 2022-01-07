# Xmas2021-JuliaLabs-PCB-Challenge

## Descrição Geral
Esta placa foi desenvolvida para o concurso "Julialabs PCB Challenge" de 2021 com um tema natalino.
A idéia geral fi fazer um enfeite de para a árvore de natal (a estrela que normalmente é colocada no topo da árvore) que funcione de maneira automática (ao inserir a bateria) fazendo sequências "pisca-pisca" nas pontas principais da mesma.
### Funcionamento
Para funcionar ela só precisará de uma bateria 3V tipo CR1220 (facilmente encontrada - a famosa "bateria de relógio") para iniciar automaticamente a apresentação de uma sequências de acendimento de LEDs predefinidos (por software) que destacam os oito cantos principais da estrela.
As sequências (não necessarimanete nesta ordem) são:
-  Alternando os 4 cantos internos (LEDs azuis) e os 4 cantos externos (LEDs brancos)
- Fazendo uma volta completa  piscando no sentido horário e anti-horário
- Piscando todos os Leds acesos e apagados entre estas sequências.

### Software / Firmware
- O software foi desenvolvido em C++ usando PlatformIO para VSCode IDE. Nele temos macros (#define) para cada led individualmente e para grupos dos leds (por cor, ou considerandos todos os leds simultaneamente). O código principal pode ser encontrado na pasta [SRC](https://github.com/vilelalabs/Xmas2021-JuliaLabs-PCB-Challenge/tree/master/src).
Foram usados encapsulamentos SOIC e componentes SMD de solda manual fácil para uma experiência fácil também na montagem.

### Observações
- Os LEDs devem ser colocados lateralmente (virados para as mesmas direções) ou, se possível, com uma orientação para o lado interno da placa (que poderia ser possível com um "ajuste" na hora da soldagem) aproveitando melhor as partes translúcidas da placa.
- Todo o processo foi transmitido em stream no [Twitch](https://twitch.tv/vilelalabs) e parte desse desenvolvimento será destacado no [Youtube](https://youtube.com/vilelalabs) futuramente.

### Imagens
|Placa|Esquemático|Visualização 3D|Simulação|
|:----------:|:----------:|:----------:|:----------:|
| Breve  | Breve |Breve |Breve|

### Lista de Componentes
|Componente|Quantidade|Observação|
|:----------:|:----------:|:----------:|
| Breve  | Breve |Breve |

### Links
- [Carrinho de compras na Mouser](https://br.mouser.com/ProjectManager/ProjectDetail.aspx?AccessID=4d0b96b75f)
- [Projeto na PCBWay](https://www.pcbway.com/project/shareproject/Blinking_Christmas_Star_e158be5a.html)
