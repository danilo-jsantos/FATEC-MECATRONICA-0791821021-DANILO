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

  para (i = 0 ; i < 3 ; i ++) {
    if (temperaturas [i] <media)
      printf ( " % f eh menor que a media \ n " , Temperatura [i]);
    else  if (temperaturas [i]> media) {
      printf ( " % f eh maior que a media \ n " , instalação [i]);
    } else
      printf ( " % f eh igual a media \ n " , Temperatura [i]);
  }

  return  0 ;
}
