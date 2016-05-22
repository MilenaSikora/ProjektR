# ProjektR
do raporcików

projektr.exe [-M|--mode MODE] [-f|--format FORMAT] [-y|--year yyyy] [-m|--month m] [-d|--day d] [-v|--verbose] [--help]

Jeżeli nie określono parametru "v" (verbose) program druku tylko i wyłącznie obliczoną datę na standardowym wyjściu i kończy pracę bez oczekiwania na reakcję użytkownika. 

Jeżeli został użyty parametr "v" (verbose) wtedy program wyświetla informacje o diagnostyczne (kroki obliczania, ustawione pola czasu, etc.), drukuje obliczoną datę, a następnie czeka na naciśnięcie klawisza.

Jeżeli nie zostaną określone parametry roku, miesiąca lub dnia - wtedy do obliczeń pobierana jest aktualna data systemowa. Jeżeli zmieniony zostanie tylko jeden parametr, wtedy podstawiany jest on w odpowiednie miejsce aktualnej daty. 

Jeżeli przekazana zostanie wartość poza właściwym (kalendarzowym) zakresem, taka jak 30 luty, wtedy system traktuje to jako 28 luty + 2 dni, czyli przekształca datę w 2 marca (w latach nieprzestępnych)

parametry : 

* M|mode : tryb wyznaczania daty
* f|format : format wyjścia daty
* y|year : ustawia rok daty odwołania
* m|month : ustawia miesiąc daty odwołania
* d|day : ustawia dzień daty odwołania
* v|verbose : tryb głośny
* help : pomoc (lista parametrów, zasada działania)

tryby pracy (MODE) : 

* CD : Current Date (dla 2016-05-16 => 2016-05-16) - domyślnie, jeżeli nie określono inaczej
* EL : End of Last month (dla 2016-05-16 => 2016-04-30)
* BL : Beginning of Last month (dla 2015-05-16 => 2016-04-01)
* DB : Day Before (dla 2016-05-16 => 2016-05-15)

format : 

* FI : a'la ISO8601 (RRRR-MM-DD) - domyślnie, jeżeli nie określono innych
* FU : a'la USA (MM/DD/RRRR)
* FF : a'la FRA (DD/MM/RRRR)
