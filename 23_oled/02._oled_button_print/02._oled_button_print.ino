/******************************************************************************************
 * FileName     : 02._oled_button_print
 * Description  : OLED 모듈에 누른 버튼 색상을 출력 해보기
 * Author       : 이인정
 * Created Date : 2021.06.08
 * Reference    : 
 * Modified     : 2021.06.08 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

#include "oled_u8g2.h"

int button_red    = D6;                 // 빨강 버튼
int button_blue   = D7;                 // 파랑 버튼
int button_green  = D8;                 // 초록 버튼
int button_yellow = D9;                 // 노랑 버튼

OLED_U8G2 oled;


void setup(){
  Serial.begin(115200);                 // 통신속도설정
  oled.setup();                         // OLED 통신핀 기능 설정
  pinMode(button_red, INPUT);           // 핀 모드 설정
  pinMode(button_blue, INPUT);          // 핀 모드 설정
  pinMode(button_green, INPUT);         // 핀 모드 설정
  pinMode(button_yellow, INPUT);        // 핀 모드 설정
}


void loop(){  
  oled.setLine(2, "PushButton!");       // PushButton! 출력

  if(digitalRead(button_red) == LOW){   // 빨강 버튼 누르면 red 출력
    oled.setLine(2, "red");
  }
  
  if(digitalRead(button_blue) == LOW){  // 파랑 버튼 누르면 blue 출력
    oled.setLine(2, "blue");
  }
  
  if(digitalRead(button_green) == LOW){ // 초록 버튼 누르면 green 출력
    oled.setLine(2, "green");
  }
  
  if(digitalRead(button_yellow) == LOW){// 노랑 버튼 누르면 yellow 출력
    oled.setLine(2, "yellow");
  }
  
  oled.display();                       // OLED 에 표시
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
