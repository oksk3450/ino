/** 
구현내용 : 키보드로부터 한 문자를 입력 받아서 입력 문자에 해당하는 아스키코드 값을 출력하는 프로그램
작성자 : 정도영
작성일 : 2021. 02. 16
---------------------
출력 : 문자입력 : A
      아스키값 : 65
---------------------
**/
#include <stdio.h>
void main() {
   printf("키보드로 입력받을 문자를 아스키코드로 변환해서 출력하기");
   printf("프로그램을 종료 하려면 0을 입력해주세요\n");
   char human;
   while(1){//무한루프 1=true
      printf("문자입력 : ");
      scanf("%c", &human);
      getchar();//위 스캔f로 입력받은 엔터를 공백으로 처리
      printf("사람이 인식하는 문자값:%c - 컴퓨터가 인식하는 아스키코드값:%d\n",human,human);
      if(human == 48) {
         printf("프로그램을 종료 합니다. 중지코드는 %d\n",human);
         break;
      }
   }
}