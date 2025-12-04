int fatorial (int numero){
int result = numero;
for(int i = 2; i < numero; i++){
  result = result * i;
}
return result;
}

