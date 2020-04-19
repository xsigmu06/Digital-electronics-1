# Lab 9-13: Ultrazvukový měřič vzdálenosti HC-SR04

#### Obsah

1. [Úvod](#Úvod)
2. [Princip](#Princip)

3. [Code description](#Code-description)
4. [Video](#Video)
5. [References](#References)


## Úvod

Tento modul umožňuje spolehlivou detekci v rozmezí 2 centimetrů až 4 metrů. Používá se u robotů a obecně pro zkoumání prostoru před senzorem. Nejlépe měří cca první 2 metry od modulu, až na 3 mm přesně. Pracovní úhel detekce je okolo 15 stupňů. Dalším důležitým parametrem je také konstanta pro převod naměřené odezvy na vzdálenost. Na desce se nachází ultrazvukový vysílač, přijímač a integrované obvody pro zajištění správné funkce.

TBD


## Princip

Po sepnutí vstupu modulu Trig (High) po dobu aspoň 10 mikrosekund vyšle vysokofrekvenční pulz (40 kHz). Signál se odrazí a přijímač jej zachytí. Přečteme délku impulzu z výstupu Echo a převedeme pomocí konstanty na vzdálenost v centimetrech. Vyjdeme ze vzorce *s = t*v*. Za rychlost dosadí

Tato konstanta se počítá tak, že vezmeme rychlost zvuku při 20° C (343 m/s -> 0,0343 cm/us), a podělíme 2 (vzdálenost k překážce a zpět). Z obrácené hodnoty výsledku dostaneme po zaokrouhlení číslo 58,31, kterým vždy vydělíme získaný čas.

4 propojovací piny - VCC na +5V, GND na zem, Trig a Echo


TBD


## Code description

TBD


## Video

TBD


## References

TBD
