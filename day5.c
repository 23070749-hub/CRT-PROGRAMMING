Day 5
Pointers:
#include <stdio.h>

int main() {
    int age=30;
    float sal=1500.50;
    printf("Address of age=%u\n",&age);
    printf("address of salary=%u\n",&sal);

    return 0;
}



#include <stdio.h>

int main() {
    char a='x',*p1=&a;
    int b=12,*p2=&b;
    float c=2.5,*p3=&c;
    double d=18.33, *p4=&d;
    printf("sizeof(p1) = %u,sizeof(*p1)=%u\n",sizeof(p1), sizeof(*p1));
    printf("sizeof(p2) = %u,sizeof(*p2)=%u\n",sizeof(p2), sizeof(*p2));
    printf("sizeof(p3) = %u,sizeof(*p3)=%u\n",sizeof(p3), sizeof(*p3));
    printf("sizeof(p4) = %u,sizeof(*p4)=%u\n",sizeof(p4), sizeof(*p4));
    
    return 0;
}





#include <stdio.h>

int main() {
    int a=5,*pi=&a;
    char b='x',*pc=&b;
    
    float c=5.5,*pf=&c;
  
    printf("value of pi=address of a=%u\n",pi);
     printf("value of pc=address of b=%u\n",pc);
      printf("value of pf=address of c=%u\n",pf);
      pi++;  pc++;  pf++;
      printf("now value of pi=%u\n",pi);
      printf("now value of pc=%u\n",pc);
      printf("now value of pf=%u\n",pf);
    
    
    return 0;
}




#include <stdio.h>

int main() {
    int arr[5]={5,10,20,25,30},i=0;
    for(i=0;i<5;i++)
    {
        
  
    printf("value of a[%d]\n",i);
    printf("%d\n",arr[i]);
    printf("%d\n",i[arr]);
    printf("%d\n",*(arr+i));
printf("%d\n",*(i+arr));
    }
    return 0;
}





#include <stdio.h>

int main() {
    int a=66;
    char *c;
    c=(char*)&a;
    printf("%d\n",*c);
    printf("%c\n",*c);
    return 0;
}





#include <stdio.h>

void fun(int *);

int main() {
    int arr[] = {3, 6, 9, 12, 15, 18};
    fun(arr);     
    return 0;
}

void fun(int *p) {
    int i;
    for(i = 0; i < 6; i++) {
        printf("%d\n", *p);
        p++;
    }
}





