#include <stdio.h>
#include <stdlib.h>
int main(){
    int *dizi,i,j,temp, diziBoyut;
    
    printf("Eleman sayisi gir: ");
    scanf("%d", &diziBoyut); 
    
    dizi=(int *)malloc(sizeof(int)*diziBoyut); // dinamik olarak dizi tanımlıyoruz.

    for(i=0; i<diziBoyut; i++){  
        printf("Eleman gir: ", i+1);
        scanf("%d", &dizi[i]);
    }
    for(i = 0; i < diziBoyut-1; i++){ 
        for(j= i+1; j < diziBoyut; j++){
            if(dizi[i] > dizi[j]){
                temp = dizi[i];  
                dizi[i] = dizi[j]; 
                dizi[j] = temp; 
            }
        }
    }
    
    printf("Sirali dizi: \n");
    
        for(i=0; i<diziBoyut; i++)
            printf(" %d ", dizi[i]);
    printf("\n");
    
    system("pause");
    
    return 0;
}
