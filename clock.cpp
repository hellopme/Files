#include<bits/stdc++.h>  

using namespace std; 

int main(void) 

{ 

for(;;) {

//��ȡϵͳʱ�� 

time_t now_time=time(NULL); 

//��ȡ����ʱ�� 

tm* t_tm = localtime(&now_time); 

//ת��Ϊ����������ʱ����������ͼ�� 

printf("��ǰʱ��:%s\n", asctime(t_tm)); 

//��ʱ��ת��Ϊ�� 

time_t mk_time = mktime(t_tm); 

//Ҳ�����Լ�����һ��ʱ�� 

//�����ֹʱ�� 

struct tm deadline_tm; 

deadline_tm.tm_sec=0;//[0~59] 

deadline_tm.tm_min=10;//[0~59] 

deadline_tm.tm_hour=13;//[0~23] 

deadline_tm.tm_isdst=0;//default 

deadline_tm.tm_mday=31;//[1~31] 

deadline_tm.tm_mon=2;//[0~11]

system("cls");
 
}

}
