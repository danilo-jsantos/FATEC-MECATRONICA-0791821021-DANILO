/ *
Programa para trabalhar com a comunicação serial
* /

const  int LED_LIGADO = LOW;
const  int LED_DESLIGADO = HIGH;
const  int ENTRADA_ACIONADA = LOW;
const  int ENTRADA_DESACIONADA = HIGH;
const  int LED1 = D5;
const  int LED2 = D6;
const  int ENTRADA_01 = D1;
const  int ENTRADA_02 = D2;

// Variáveis ​​globais
char msg [ 10 ];

void  inicializa_hardware () {
  pinMode (LED1, OUTPUT);
  pinMode (LED2, OUTPUT);
  digitalWrite (LED1, LED_DESLIGADO);
  digitalWrite (LED2, LED_DESLIGADO);
  pinMode (ENTRADA_01, INPUT_PULLUP);
  pinMode (ENTRADA_02, INPUT_PULLUP);
  // Inicializar a comunicação
  // Serial.begin (115200); // 9600, 19200, 38400, 115200
}

void  setup () {
  inicializa_hardware ();
  // Inicializa as variáveis ​​globais
  msg [ 0 ] = ' \ 0 ' ;
}

void  processa_msg () {
  char led = msg [ 0 ];
  char estado = msg [ 1 ];
  // Processa info para o LED1
  if (led == ' 1 ' ) {
    if (estado == ' 1 ' )
      digitalWrite (LED1, LED_LIGADO);
    else  if (estado == ' 0 ' )
      digitalWrite (LED1, LED_DESLIGADO);
  } else  if (led == ' 2 ' ) { // Processa informações para o LED2
    if (estado == ' 1 ' )
      digitalWrite (LED2, LED_LIGADO);
    else  if (estado == ' 0 ' )
      digitalWrite (LED2, LED_DESLIGADO);
  } else  if (led == ' D ' ) {
    atraso ( 500 );
  }
  // Devolver uma mensagem recebida
  char resposta [ 20 ];
  sprintf (resposta, " RECEBI:% s; " , msg);
  Serial. println (resposta);
  // Reseta uma string de msg
  msg [ 0 ] = ' \ 0 ' ;
}

void  loop () {
  digitalWrite (LED1, LED_LIGADO);
  atraso ( 1000 );
  digitalWrite (LED1, LED_DESLIGADO);
  atraso ( 1000 );
  
  // ATENÇÃO
  if ( digitalRead (ENTRADA_01) == ENTRADA_ACIONADA) {
    digitalWrite (LED2,! digitalRead (LED2));
  }
}
