//\\4.�Ĵ��⣺���ʵ��8��һ������ʾ����
 
int main()
{

int m,x,y,*pm,*px,*py;
scanf("%d%d",&x,&y);
px=&x;
py=&y;
pm=&m;
*pm=*px;
if(*pm<*py)*pm=*py;
printf("max=%d\n",m);


}