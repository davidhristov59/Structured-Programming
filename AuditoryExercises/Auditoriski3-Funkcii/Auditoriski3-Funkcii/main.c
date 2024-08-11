#include <stdio.h>
#include <math.h>
#define PI 3.14

/*
Да се напишат соодветни функции за пресметување на дијаметар, периметар и
плоштина на круг чиј што радиус се предава како аргумент. Потоа да се
напише и програма во која за внесен (од тастатура) радиус ќе се повикаат овие
функции за да се пресметаат дијаметарот, периметарот и плоштината на
соодветниот круг.
 */

/*
void printFloat(float number){
    
    printf("%.2f ", number);
    
}

float diameter(float radius){
    
    return 2*radius;
}

float perimeter(float radius){
    
    return diameter(radius)*PI;
}

float area(float radius){
    return pow(radius, 2)*PI;
}

int main() {
    
    float radius;
    scanf("%f", &radius);
    
    printFloat(diameter(radius));
    printFloat(perimeter(radius));
    printFloat(area(radius));
    
 
    return 0;
}
*/

/*
Да се напише програма која што ќе ги отпечати сите четирицифрени природни
броеви кои се деливи со збирот на двата броја составени од првите две цифри и
од последните две цифри на четирицифрениот број. На крајот треба да
отпечати и колку вакви броеви се пронајдени.
 
 3417 е делив со 34 + 17
 5265 е делив со 52 + 65
 6578 е делив со 65 + 78
*/

/*
int sumofHalves(int number){
    return number%100+number/100;
}

int main(){
    
    int i;
    int brojac=0;
    for(i=1000;i<=9999;i++){
        if(i%sumofHalves(i)==0){ //dokolku i e delivo so zbirot na polovinite na toj broj togas ispecati go
            printf("%d", i);
            brojac++;
    }
        }
    printf("Vkupno: %d\n", brojac);
    
    return 0;
}
*/


/*
Да се напише програма која за даден природен број ја пресметува разликата
помеѓу најблискиот поголем од него прост број и самиот тој број.
Пример: Ако се внесе 573, програмата треба да испечати 577 – 573 = 4
*/

