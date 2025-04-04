# 🕹️ Projeto "Passa ou Repassa" com Arduino

Este projeto simula um sistema de quiz baseado no jogo **Passa ou Repassa**, onde dois jogadores disputam para ver quem aperta o botão primeiro. O primeiro a pressionar acende seu respectivo LED e bloqueia o sistema por 5 segundos, impedindo que o outro jogador responda. Após esse tempo, o jogo reinicia automaticamente.

---

## 📸 Imagem do Circuito
![Construção do Circuito](/image/projeto_arduino_passa_ou_repassa.png)

---

## 🚀 Como Funciona?
- Cada jogador tem um **botão** e um **LED** correspondente.
- O **primeiro a apertar o botão** acende o LED e impede que o outro jogue.
- O sistema **trava por 5 segundos** e depois reinicia automaticamente.
- Utiliza um **Arduino Uno**, dois **botões push button** e dois **LEDs**.

---

## 🛠️ Componentes Utilizados
- 1x **Arduino Uno**
- 2x **Botões (Push Button)**
- 2x **LEDs** (Vermelho e Amarelo)
- 4x **Resistores de 220Ω** (para os LEDs e Botões)
- Fios de conexão

---

## 🔧 Código Fonte
O código do projeto está disponível no arquivo [`passa_ou_repassa.ino`](/passa_ou_repassa.ino).

Para utilizá-lo:
1. Baixe o arquivo `.ino` ou clone o repositório.
2. Abra o código na **IDE do Arduino**.
3. Carregue o código para o **Arduino Uno**.

---

## 🎮 Simulação Online
Você pode testar o circuito diretamente no **Tinkercad** clicando no link abaixo:

🔗 **[Acesse o Projeto no Tinkercad](https://www.tinkercad.com/things/0eQ9w45YCyc-passa-ou-repassa)**