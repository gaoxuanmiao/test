//\\2.�ֱ�����2��������ʵ�����鲿���ú���ʵ�ּ���2������֮����֮������������ʵ�ֽ�������
//Ҫ�󣺸���������ͨ��ָ�����ʵ�ִ��ݣ�����ʹ���ⲿ��������ʾ����ο���8-4��ʵ�ַ�������

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

