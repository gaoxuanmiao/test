//\\3.计算并输出两个整数整除的商和余数。要求：主函数输入两个整数，并
//输出整除的商和余数。被调函数完成整除的商和余数的计算。说明：不能使用外部变量。
void a(int *i,int *j,int p,int q){

*i=p/q;
*j=p%q;

}
main(){
int p,q,e,f;
scanf("%d%d",&p,&q);
a(&e,&f,p,q);

printf("%d    %d",e,f);





}