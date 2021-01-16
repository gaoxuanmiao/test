//\\2.分别输入2个复数的实部与虚部，用函数实现计算2个复数之和与之积并用主函数实现结果输出。
//要求：复数计算结果通过指针变量实现传递，不得使用外部变量（提示：请参考例8-4的实现方法）。

void a(int *i,int *j,int p,int q,int c,int d){

*i=p+c;
*j=q+d;

}
void b(int *i,int *j,int p,int q,int c,int d){

*i=p*c-q*d;
*j=q*c+p*d;

}
main(){
int p,q,c,d,e,f;
scanf("%d%d%d%d",&p,&q,&c,&d);
a(&e,&f,p,q,c,d);

printf("%d+%d i\n",e,f);
b(&e,&f,p,q,c,d);

printf("%d+%d i",e,f);





}//int *i=&p,*j=&q;i,j&&

