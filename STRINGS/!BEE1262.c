#include <stdio.h>
// se tiver P 'R' em sequencia, conta como 1 ciclo 
int main() {
 
    char x[51] = {0};
    int i, P, ciclo, seq;
    
    
    while(1){
        if (scanf("%50s", x) != 1 || scanf("%d", &P) != 1) break;   // Ler o valor de P
            
        i = 0;
        ciclo = 0;
        seq = 0;
        
        while (x[i] != '\0') {
                
            if(x[i] == 'W'){
                ciclo++;
                
                if(x[i-1] == 'R'){
                    ciclo += seq/P;
                    
                    if(seq % P > 0){
                        ciclo++;
                        seq = 0;
                    }
                }
            }
            
            else if(x[i] == 'R' && x[i+1] == '\0') {
                    seq++;
                    ciclo += seq/P;
                    
                    if(seq % P > 0){
                        ciclo++;
                        seq = 0;
                    }
            }
            else
                seq++;
                
            i++;
            
            if(i>50)
                break;
        }
        
        printf("%d\n", ciclo);
    }
    
 
    return 0;
    
}