  printf(" \n");
  scanf("%d %d %d %d",num1,den1,num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den){
  int gcd;
  *res_num = num1 * den2 + num2 *den1;
  *res_den = den1 * den2;
  for(int i = 1;i < *res_num && i < *res_den ; i++){
    if(*res_num % i == 0 && *res_den % i == 0){
      gcd = i;
    }
  }
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den){
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}