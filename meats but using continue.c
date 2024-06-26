#include<stdio.h>

int main(){
    char *meats[4]={"pork","beef","fish","chicken"};
    
    for (int i =0; i< 4; i++){
        if (meats[i]=="fish"){
            printf("I hate fish\n");
            continue;
        }else{
    printf("I eat %s\n",meats[i]);
        }
        }
    


return 0;
}