# include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("Enter the value of c\n");
    scanf("%d",&c);
    if (a>b) {
        if (c>a){
            printf("the maxzimim value of c is %d\n",c);
        }
        else {
                        printf("the maxzimim value of a is %d\n",a);

        }
    }else {
                    printf("the maxzimim value of b is %d\n",b);

    }
    return 0;
}