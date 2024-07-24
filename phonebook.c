#include <stdio.h>

int main()
{
    char n[10];
    int p;
    int a;
    char add[10];
    char na[10];
    int ph;
    int ag;
    char addr[10];
    int x;
    printf("welcome to phone book!!\n");
    printf("enter 1 to add the contact....\n");
    printf("enter:");
    scanf("%d",&x);
    if(x==1){
        int y;
        printf("how many cotact you want to add?");
        scanf("%d",&y);
        if(y==1){
    
    printf("!-------------!\n");
    printf("enter name: ");
    scanf("%s",n);
    printf(" enter phonenumber: ");
    scanf("%d",&p);
    printf("enter age: ");
    scanf("%d",&a);
    printf("enter addres: ");
    scanf("%s",add);
    printf("!------------!\n");
    }
    else if(y==2){
    printf("!-------------!\n");
    printf("enter name: ");
    scanf("%s",n);
    printf(" enter phonenumber: ");
    scanf("%d",&p);
    printf("enter age: ");
    scanf("%d",&a);
    printf("enter addres: ");
    scanf("%s",add);
    printf("!------------!\n");
    
    printf("!-------------!\n");
    printf("enter name: ");
    scanf("%s",na);
    printf(" enter phonenumber: ");
    scanf("%d",&ph);
    printf("enter age: ");
    scanf("%d",&ag);
    printf("enter addres: ");
    scanf("%s",addr);
    printf("!------------!\n");
        
    }
    printf("enter 2 see the contact\n");
    printf("enter 3 to exit the phone book\n");
    int z;
    printf("enter:");
    scanf("%d",&z);
    if(z==2){
        int num;
        printf("number of contact you want to see\n");
        printf("enter:");
        scanf("%d",&num);
        if(num==1){
            printf("!-----!\n");
           printf("name:%s \n",n);
           printf("phone no:%d \n",p);
           printf("age:%d \n",a);
           printf("address:%s \n",add);
           printf("!------------!\n");
        }
        else if(num==2){
           printf("!-----!\n");
           printf("name:%s \n",n);
           printf("phone no:%d \n",p);
           printf("age:%d \n",a);
           printf("address:%s \n",add);
           printf("!------------!\n");
           printf("!-----!\n");
           printf("name:%s \n",na);
           printf("phone no:%d \n",ph);
           printf("age:%d \n",ag);
           printf("address:%s \n",addr);
           printf("!------------!\n");
            
        }
    }
    else if(z==3){
        printf("Are you sure ? you want to close the book\n");
        printf("enter 1 to close & 2 to continue\n");
        int ans;
        printf("enter:");
        scanf("%d",&ans);
        if(ans==1){
            printf("thanks for visiting this\n");
            printf("the book is closed\n");
            
        }
        else if(ans==2){
            printf("you continues this");
        }
    }
    }
    else{
        printf("invalid");
    }
    return 0;
}