#include <stdio.h>

int main(){
    char arr[1024];
    int index =0;
    int isMingan(char x){
        int count = 0;
        for(int i=0; i<index;i++){
            if(x == arr[i]){
                count++;
            }
            }
             if(count == 0){
                return 0;
            }else{
                return 1;
        }
    }

    printf("jinrumingganzifuguanlixitong\n");
    while(1){
        printf("1---tianjiamingganzifu\n");
        printf("2---chanchumingganzifu\n");
        printf("3---suoyoumingganzifu\n");
        printf("4---tihuanmingganzifu\n");
        printf("5---tuichu\n");

        printf("qingshuruxiangyinggongnengbianhao\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
              printf("qingshuruyaotianjiademingganzifu\n");
              char m;
              scanf("%c",&m);
              scanf("%c",&m);
             arr[ index ]=m;
             index++;
              printf("tianjiachenggong\n");
              char x;
              scanf("%c",&x);
              scanf("%c",&x);
        }
         if(code == 2){
            printf("qingshuruyaoshanchudemingganzifu\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
             index--;
            printf("shanchuchenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
         if(code == 3){
            printf("suoyoumingganzifu\n");
            for(int i=0;i<index;i++){
                printf("%c\n",arr[i]);
            }
            char m;
            scanf("%c",&m);
            scanf("%c",&m);
            printf("dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 4){
            char x;
            int i=0;
            char neirong[1024];
            printf("qingshuruyiduanweizi:\n");
            scanf("%s",neirong);
            for(; neirong[i]='\0';i++){
                char a=neirong[i];
                int j=0;
                int flag=0;
                for(;j<index;j++){
                    if(a == arr[j]){
                        flag=1;
                    }
                }
                if(flag !=0){
                    neirong [i] ='*';
                }
            }
           printf("%s\n",neirong);
            printf("tihuangchenggong\n");
            scanf("%c",&x);
            scanf("%c",&x);
        
        }
         
         if(code == 5){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}