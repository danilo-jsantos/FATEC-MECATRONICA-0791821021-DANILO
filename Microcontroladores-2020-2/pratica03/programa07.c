# inclui  < stdio.h >

int  main ( void ) {
  float temperaturas [ 3 ];
  // Ler as 3 temperaturas
  int i;
  para (i = 0 ; i < 3 ; i ++) {
    printf ( " Informe a temperatura % i : " , i);
    scanf ( " % f " , & Temperatura [i]);
  }

  float soma;
  soma = 0 ;
  para (i = 0 ; i < 3 ; i ++) {
    soma = soma + temperatura [i];
  }

  float media = soma / i;

  printf ( " Mídia dos valores: % f \ n " , mídia);

  return  0 ;
}
