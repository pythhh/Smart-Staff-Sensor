<img src="img/logo.png">

# :sound: What is Smart-Staff-Sensor ?
  ```Smart-Staff-Sensor``` —— ไม้เท้าอัจฉริยะที่จะช่วยให้ผู้พิการทางการมองเห็นสามารถใช้ชีวิตประจำวันได้อย่างสะดวกสบาย<br>และมีความปลอดภัยมากขึ้น
 โดยภายในตัวไม้ของเรานั้นจะทำการติดเซนเซอร์ไว้โดยที่จะคอยตรวจจับวัตถุโดยรอบของตัวผู้ใช้ โดยจะส่งเสียงแจ้งเตือนเมื่อ
 * เข้าใกล้วัตถุในระยะน้อยกว่า 50 เซนติเมตร ตามแนวพื้น
 * เข้าใกล้วัตถุในระยะน้อยกว่า 150 เซนติเมตร ตามแนวขนานกับผู้ใช้

### 🔧 How to use ?
 เมื่อมีวัตถุเข้ามาใกล้กับตัวsersonตัวล่างน้อยกว่า 50 เซนติเมตรจะมีเสียงแจ้งเตือนเพื่อให้ผู้พิการทางสายตาให้ระวังข้างหน้าพื้นแต่สามารถข้ามได้ เช่น ฟุตบาทหรือบันได<br>
![](img/down.gif)<br>
 เมื่อมีวัตถุเข้ามาใกล้กับตัวsersonตัวบนน้อยกว่า 150 เซนติเมตรจะมีเสียงแจ้งเตือนเพื่อให้ผู้พิการทางสายตาให้ระวังด้านหน้าที่เป็นแนวขนานผู้ใช้ เช่น กำแพงหรือคน<br>
![](img/up.gif)

### 🔌  Board Connecting
![](img/overview.gif)<br>

| Ultrasonic TOP   |Node MCU ESP8266|
|----------|:-------------:|
| Vcc | Jump with lil BreadBoard TOP |
| Trig | D3   |
| Echo | D4 |
| Gnd | Jump with lil BreadBoard TOP |

| Ultrasonic DOWN   |Node MCU ESP8266|
|----------|:-------------:|
| Vcc | Jump with lil BreadBoard DOWN |
| Trig | D1   |
| Echo | D2 |
| Gnd | Jump with lil BreadBoard DOWN |

| lil BreadBoards|Node MCU ESP8266 |
|----------|:-------------:|
| Vcc | Vin , 3V3|
| GND | GND |


| Active Buzzer  |Node MCU |
|----------|:-------------:|
| Gnd | Jump with lil BreadBoard TOP |
| I/O | D0 |

## :video_camera: Poster & Video is Here!

#### Poster :camera: : 
![](img/posterprojectcompromalaewja-editeditedit.jpg)


### Video :movie_camera: :

![](img/vdo.png)
 * We will show you with youtube [Clip Here](https://youtu.be/hkm7TtCkdAs)
  
## Parts of Smart-Staff-Sensor
  - [x] Node MCU V2 ESP8266
  - [x] Ultrasonic Sensor Module HC-SR04P 2 pieces
  - [x] Active Buzzer
  - [x] Jumper wires


## Our Members!
|<a href="img/numbar1"><img src="img/number3.jpg" width="120" height="120"></a>|<a href=""><img src="img/number2.jpg" width="120" height="120"></a>|<a href=""><img src="img/number1.jpg" width="120" height="120"></a>|<a href=""><img src="img/number4.jpg" width="120" height="120"></a>|
|:-------------:|:-------------:|:-------------:|:-------------:|
| 61070111      | 61070155      | 61070161      | 61070175      |
| Pathipol      | Pattaranan    | Pavaree       | Mongkhon      |
| [@DrSTHANKs]() | [@pythhh]() | [@Pavaree]() | [@mongkonpc]()  

## Assistance Teachers
|<a href="img/numbar1"><img src="https://www.it.kmitl.ac.th/wp-content/uploads/2017/12/Kitsuchart.jpg" width="120" height="120"></a>|<a href=""><img src="https://www.it.kmitl.ac.th/wp-content/uploads/2017/12/Panwit.jpg" width="120" height="120"></a>|
|:---------------------:|:---------------------:|
|รศ.ดร.กิติ์สุชาต พสุภา     |รศ.ดร.ปานวิทย์ ธุวะนุติ |

>โปรเจคนี้เป็นส่วนหนึ่งของวิชา การการเขียนโค้ดและการสร้างโปรแกรมคอมพิวเตอร์พื้นฐาน COMPUTER PROGRAMMING (06016315)<br>
คณะเทคโนโลยีสารสนเทศ สาขาวิชาเทคโนโลยีสารสนเทศ<br>
ภาคเรียนที่ 2 ปีการศึกษา 2561<br>
สถาบันเทคโนโลยีพระจอมเกล้าเจ้าคุณทหารลาดกระบัง
