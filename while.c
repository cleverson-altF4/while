#include <stdio.h>
int main(){
   float gastos = 0, total = 0;

   printf("\n#~~~~~~ Gastos do dia a dia ~~~~~~~#\n");
   printf("Qual o valor gasto diário: \n");
   printf("Digite 0 para terminar \n");
   

   while (1)
   {
      printf("Digite o valor gasto esse mês: ");
      scanf("%f", &gastos);

      if (gastos == 0)
      {
            break;
      }
      if (gastos < 0)
      {
        printf("Tente novamente.\n");
      } else {
        total += gastos;
      }
        
   }
   printf("\n#~~~~~~ Total ~~~~~~~~#\n");
   printf("Total do gasto foi R$ %.2f reais\n", total);
   return 0;
   
}