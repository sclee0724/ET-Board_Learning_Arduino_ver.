/******************************************************************************************
 * FileName     : 03._photoresistor_sensor_led_fade
 * Description  : 조도 센서 값에 따라 밝기 조절 해보기
 * Author       : 이인정
 * Created Date : 2021.06.02
 * Reference    : 
 * Modified     : 2021.06.02 : LIJ : 헤더 수정
 * Modified     : 2021.12.16 : LEH : 소스 크린징
******************************************************************************************/

int sensor = A1;       // 조도센서
int led_red = D2;      // 빨강 LED
int brightness = 0;
int fadeAmount = 5;


void setup() {    
  ledcAttachPin(led_red, 0);
  ledcSetup(0, 4000, 8);
  Serial.begin(115200);
}


void loop() {  
    brightness = 255 - map(analogRead(sensor),0,4095,0,255);
    Serial.println(brightness);
    ledcWrite(0, brightness);
}

//=========================================================================================
//                                                    
// (주)한국공학기술연구원 http://et.ketri.re.kr       
//                                                    
//=========================================================================================
