/******************************************************************************************
 * FileName     : 02._led_two_blink
 * Description  : LED 두개를 켰다 껐다 해보기
 * Author       : 이인정
 * Created Date : 2021.05.28
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.06.02 : WDW : 필요없는 코드 삭제
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int led_red    = D2;              // 빨강 LED
int led_yellow = D5;              // 노랑 LED


void setup() {
  pinMode(led_red, OUTPUT);       // 핀모드 설정
  pinMode(led_yellow, OUTPUT);    // 핀모드 설정
}


void loop() {
  digitalWrite(led_red, HIGH);    // 빨강 LED 켜기
  digitalWrite(led_yellow, HIGH); // 노랑 LED 켜기
  delay(2000);                    // 2초 기다리기

  digitalWrite(led_red, LOW);     // 빨강 LED 끄기
  digitalWrite(led_yellow, LOW);  // 노랑 LED 끄기
  delay(2000);                    // 2초 기다리기
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
