#include

#include

testBS()

{

int a[] = {2,343,342,1,123,43,4343,433,687,654,3};

int *a_p = a;

//�������鳤��

int size = sizeof(a)/sizeof(int);

//��������

bucketSort3( a_p , size );

//��ӡ�������

int i ;

for(i = 0 ; i < size ; i++ ) {

printf("%d\n ",a[i]);

}

int t;

scanf("%d",t);

}

//��������

void bucketSort3(int *p , int n)

{

//��ȡ�����е������

int maxNum = findMaxNum( p , n );

//��ȡ�������λ��������Ҳ���ٷ���Ĵ�����

int loopTimes = getLoopTimes(maxNum);

int i ;

//��ÿһλ����Ͱ����

for( i = 1 ; i <= loopTimes ; i++) {

sort2(p , n , i );

}

}

//��ȡ���ֵ�λ��

int getLoopTimes(int num)

{

int count = 1 ;

int temp = num/10;

while( temp != 0 ) {

count++;

temp = temp / 10;

}

return count;

}

//��ѯ�����е������

int findMaxNum( int *p , int n)

{

int i ;

int max = 0;

for( i = 0 ; i < n ; i++) {

if(*(p+i) > max) {

max = *(p+i);

}

}

return max;

}

//�����ַ��䵽���Ե�Ͱ�У�Ȼ����Ͱ��˳�����������

void sort2(int *p , int n , int loop)

{

//����һ��Ͱ �˴���20��Ԥ��� ����ʵ��������޸�

int buckets = {} ;

//��Ͱ��index�ĳ���

//��798 ��λͰindex = ( 798 / 1 ) % 10 = 8

// ʮλͰindex = ( 798 / 10 ) % 10 = 9

// ��λͰindex = ( 798 / 100 ) % 10 = 7

// tempNum Ϊ��ʽ�е�1��10��100

int tempNum = (int) pow(10 , loop-1);

int i , j ;

for( i = 0 ; i < n ; i++ ) {

int row_index = (*(p+i) / tempNum) % 10;

for(j = 0 ; j < 20 ; j++) {

if(buckets[row_index][j] ==NULL) {

buckets[row_index ][j] = *(p+i) ;

break;

}

}

}

//��Ͱ�е��������ص�ԭ��������

int k = 0 ;

for(i = 0 ; i < 10 ; i++) {

for(j = 0 ; j < 20 ; j++) {

if(buckets[i][j] != NULL) {

*(p + k ) = buckets[i][j] ;

buckets[i][j]=NULL;

k++;

}

}

}

}
