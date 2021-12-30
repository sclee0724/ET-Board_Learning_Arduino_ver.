/******************************************************************************************
 * FileName     : 02._force_sensitive_resister_led
 * Description  : 압력센서의 값에 따라 LED를 순차적으로 켜보기
 * Author       : 이인정
 * Created Date : 2021.06.17
 * Reference    : 
 * Modified     : 2021.06.17 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int sensor = A3;                             // 압력센서
int led_red    = D2;                         // 빨강 LED
int led_blue   = D3;                         // 파랑 LED 
int led_green  = D4;                         // 초록 LED
int led_yellow = D5;                         // 노랑 LED


void setup() {
  Serial.begin(115200);                      // 통신속도
  pinMode(led_red,OUTPUT);                   // 핀 모드 설정
  pinMode(led_blue,OUTPUT);                  // 핀 모드 설정
  pinMode(led_green,OUTPUT);                 // 핀 모드 설정
  pinMode(led_yellow,OUTPUT);                // 핀 모드 설정
}


void loop() {
 int sensor_result = analogRead(sensor);     // 압력센서의 값 읽어오기
 
 digitalWrite(led_red, LOW);                  
 digitalWrite(led_blue, LOW);                
 digitalWrite(led_green, LOW);               
 digitalWrite(led_yellow, LOW);              
 
 if(sensor_result > 1000)                    // 압력센서의 값이 1000초과라면 빨강 LED 켜기
 {
  digitalWrite(led_red, HIGH);
 }
 
 if(sensor_result > 1100)                    // 압력센서의 값이 1100초과라면 파랑 LED 켜기
 {
  digitalWrite(led_blue, HIGH);
 }
 
 if(sensor_result > 1200)                    // 압력센서의 값이 1200초과라면 초록 LED 켜기
 {
  digitalWrite(led_green, HIGH);
 }
 
 if(sensor_result > 1300)                    // 압력센서의 값이 1300초과라면 노랑 LED 켜기
 {
  digitalWrite(led_yellow, HIGH);
 }
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
