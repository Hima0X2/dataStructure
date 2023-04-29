#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct myArray{
     int total;
     int *ptr;
     int use;
};
void createArray(struct myArray *a,int total,int use){
a->total=total;
a->use=use;
a->ptr=(int*)malloc(total*sizeof(int));
}
void setMarks(struct myArray *a){
     int i,n;
for(i=0;i<a->use;i++){
          printf("Enter element %d : ",i);
scanf("%d",&n);
(a->ptr)[i]=n;
}
}
void show(struct myArray *a){
     int i;
for(i=0;i<a->use;i++){
printf("%d\n",(a->ptr)[i]);
}
}
int main(){
struct myArray marks;
createArray(&marks,100,5);
setMarks(&marks);
show(&marks);
}
