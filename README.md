# EiTprojekt
mój projekt

Do zbudowania układu który będzie mierzył wilgotność oraz temperaturę potrzebne jest parę 
elementów, oczywiście potrzebujemy podstawowego kitu arduino w moim przypadku będzie to [1]. 
Następnym niezbędnym elementem jest oczywiście sam czujnik temperatury / wilgotności 
zdecydowałem się na czujnik DHT11 [2]. Dodatkowo by wyświetlić mierzone parametry musimy mieć 
wyświetlacz LCD 16x2 [3]. Czwarty element to potencjometr [4] którego wartości jeszcze nie 
dobrałem (ale coś pewnie koło 10/20k). Ostatnim elementem jest płytka prototypowa gdzie cały 
układ zostanie połączony [5]. 

![1 i 5 płytka arduino uno R3 + płytka prototypowa](jpg1.png)
JPG przedstawia moją płytkę podstawową oraz prototypową

Arduino uno R3 datasheet:
http://www.linhkientot.vn/ebook/arduino-uno-r3-datasheet.pdf

[2] wyświetlacz LCD 16x2

![2 wyświetlacz LCD16x2](wyswietlacz.png)

Wyświetlacz datasheet: jest na tej stronie 
https://www.winstar.com.tw/products/character-lcd-display-module/16x2-datasheet.html
[3] DHT11 czyli czujnik do pomiaru temperatury i wilgotności:

![czujnik DHT11](dht11.jpg)
Czujnik datasheet:
https://www.mouser.com/datasheet/2/758/DHT11-Technical-Data-Sheet-Translated-Version-1143054.pdf

Schemat układu: niezbędne połączenia 