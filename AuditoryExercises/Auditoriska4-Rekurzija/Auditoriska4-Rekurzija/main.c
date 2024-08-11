#include <stdio.h>

/*
 long factorialRecursive(int n){
 if(n==1){
 return 1;
 }
 else {
 return n*factorialRecursive(n-1);
 }
 }
 
 int main() {
 
 int n;
 scanf("%d", &n);
 printf("%ld", factorialRecursive(n));
 
 
 return 0;
 }
 */


/*
Да се пресмета збирот: \[ 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)! \] притоа:
• користете рекурзивна функција за пресметување на збирот на првите k
природни броеви.
• користете рекурзивна функција за пресметување на факториел на еден
природен број.
 */

/*
long factorial(int n){
    if(n==1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int sumOfFirstN(int n){
    if(n==1){
        return 1;
    }
    else {
        return n+sumOfFirstN(n-1);
    }
}

long sum(int n){
    
    if(n==1){
        return 1;
    }
    else {
        return factorial(sumOfFirstN(n))+sum(n-1);
    }
    
}

int main(){
    
    int n;
    scanf("%d", &n);
    printf("%ld", sum(n));
    
    return 0;
}
*/


//zad2
/*
Да се напише програма која за даден природен број ја пресметува разликата
помеѓу најблискиот поголем од него прост број и самиот тој број.
Програмата треба да користи рекурзивна функција за наоѓање на соодветниот
прост број, која пак треба да користи рекурзивна функција за проверка дали
даден број е прост број.
 */


