# Arduino hőmérséklet és páratartalom mérő rendszer

Projekt leírás:

Ez a projekt egy Arduino alapú rendszer, amely egy DHT11 szenzor segítségével méri a környezeti hőmérsékletet és páratartalmat.
A mért adatokat a soros monitoron jeleníti meg.

-------------------------------------------------

A projekt célja:

A projekt célja a mikrovezérlők működésének és a szenzoros adatgyűjtés alapjainak bemutatása.

-------------------------------------------------

Felhasznált eszközök

- Arduino UNO
- DHT11 szenzor
- jumper kábelek

-------------------------------------------------

A rendszer működése:

A mikrokontroller meghatározott időközönként kiolvassa a szenzor adatait, majd azokat kiírja a soros portra.
A program folyamatosan fut, így a mérések ismétlődnek.

-------------------------------------------------

Program:

A program a `kod` mappában található.

-------------------------------------------------

Projekt struktúra:

- `kod/` -> Arduino program
- `dokumentacio/` -> projekt dokumentáció

------------------------------------------------

Tesztelés:

A rendszer működését a soros monitor segítségével ellenőriztem, ahol a hőmérséklet és páratartalom értékek folyamatosan megjelennek.

------------------------------------------------

Készítette:

Pomázi Zsolt (K6VYOP)
