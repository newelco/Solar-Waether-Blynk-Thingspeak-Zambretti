/*----------------------------------------------------------------------------------------------------
  Project Name : Solar Powered WiFi Weather Station V2.31
  Features: temperature, dewpoint, dewpoint spread, heat index, humidity, absolute pressure, relative pressure, battery status and
  the famous Zambretti Forecaster (multi lingual)
  Authors: Keith Hungerford, Debasish Dutta and Marc Stähli
  Website : www.opengreenenergy.com
  
******* Transaltion tables ****************************************/

#if LANGUAGE == 'PL'
  const char TEXT_RISING_FAST[]       = "szybki wzrost";
  const char TEXT_RISING[]            = "wzrost";
  const char TEXT_RISING_SLOW[]       = "powolny wzrost";
  const char TEXT_STEADY[]            = "w miarę stabilna";
  const char TEXT_FALLING_SLOW[]      = "powolny spadek";
  const char TEXT_FALLING[]           = "spadek";
  const char TEXT_FALLING_FAST[]      = "szybki spadek";

  const char TEXT_ZAMBRETTI_A[]       = "Stabilna, dobra pogoda";
  const char TEXT_ZAMBRETTI_B[]       = "Dobra pogoda";
  const char TEXT_ZAMBRETTI_C[]       = "Poprawa pogody";
  const char TEXT_ZAMBRETTI_D[]       = "Dobra pogoda, coraz mniej stabilna";
  const char TEXT_ZAMBRETTI_E[]       = "Dobra pogoda, możliwe przelotne opady";
  const char TEXT_ZAMBRETTI_F[]       = "Dość dobra pogoda, poprawa";
  const char TEXT_ZAMBRETTI_G[]       = "Dość dobra pogoda, początkowo możliwe opady";
  const char TEXT_ZAMBRETTI_H[]       = "Dość dobra pogoda, później opady";
  const char TEXT_ZAMBRETTI_I[]       = "Początkowo opady, poprawa pogody";
  const char TEXT_ZAMBRETTI_J[]       = "Zmienna, poprawa pogody";
  const char TEXT_ZAMBRETTI_K[]       = "Dość dobra pogoda, opady o charakterze przelotnym";
  const char TEXT_ZAMBRETTI_L[]       = "Raczej niestabilna, później poprawa pogody";
  const char TEXT_ZAMBRETTI_M[]       = "Pogoda niestabilna, prawdopodobna poprawa pogody";
  const char TEXT_ZAMBRETTI_N[]       = "Deszczowo, okresowe przejasnienia";
  const char TEXT_ZAMBRETTI_O[]       = "Deszczowo, coraz mniej stabilna pogoda";
  const char TEXT_ZAMBRETTI_P[]       = "Zmienna pogoda, niewielkie opady";
  const char TEXT_ZAMBRETTI_Q[]       = "Niestabilna pogoda, okresowo krótkotrwała poprawa pogody";
  const char TEXT_ZAMBRETTI_R[]       = "Niestabilna pogoda, następnie opady";
  const char TEXT_ZAMBRETTI_S[]       = "Niestabilna pogoda, niewielkie opady";
  const char TEXT_ZAMBRETTI_T[]       = "Przeważnie bardzo niestabilna pogoda";
  const char TEXT_ZAMBRETTI_U[]       = "Przelotne opady, pogorszenie pogody";
  const char TEXT_ZAMBRETTI_V[]       = "Okresowo opady, bardzo niestabilna pogoda";
  const char TEXT_ZAMBRETTI_W[]       = "Opady w krótkich odstępach czasu";
  const char TEXT_ZAMBRETTI_X[]       = "Opady w krótkich odstępach czasu";
  const char TEXT_ZAMBRETTI_Y[]       = "Burzowo, możliwa poprawa pogody";
  const char TEXT_ZAMBRETTI_Z[]       = "Burzowo, duże opady";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "W tej chwili szklana kula odpoczywa";

#elif LANGUAGE == 'DE'
  const char TEXT_RISING_FAST[]       = "rasch steigend";
  const char TEXT_RISING[]            = "steigend";
  const char TEXT_RISING_SLOW[]       = "langsam steigend";
  const char TEXT_STEADY[]            = "beständig";
  const char TEXT_FALLING_SLOW[]      = "langsam fallend";
  const char TEXT_FALLING[]           = "fallend";
  const char TEXT_FALLING_FAST[]      = "rasch fallend";

  const char TEXT_ZAMBRETTI_A[]       = "Beständiges Schönwetter";
  const char TEXT_ZAMBRETTI_B[]       = "Schönes Wetter";
  const char TEXT_ZAMBRETTI_C[]       = "Wetter wird gut";
  const char TEXT_ZAMBRETTI_D[]       = "Schön, wird wechselhaft";
  const char TEXT_ZAMBRETTI_E[]       = "Schön, Regenschauer möglich";
  const char TEXT_ZAMBRETTI_F[]       = "Ziemlich gut, verbessert sich";
  const char TEXT_ZAMBRETTI_G[]       = "Ziemlich gut, frühe Regenschauer möglich";
  const char TEXT_ZAMBRETTI_H[]       = "Ziemlich gut, spätere Regenschauer";
  const char TEXT_ZAMBRETTI_I[]       = "Früh schauerhaft, verbessert sich";
  const char TEXT_ZAMBRETTI_J[]       = "Wechselhaft, verbessert sich";
  const char TEXT_ZAMBRETTI_K[]       = "Ziemlich gut, Regenschauer möglich";
  const char TEXT_ZAMBRETTI_L[]       = "Eher veränderlich, klart später auf";
  const char TEXT_ZAMBRETTI_M[]       = "Veränderlich, verbessert sich wahrscheinlich";
  const char TEXT_ZAMBRETTI_N[]       = "Regnerisch mit Aufhellungen";
  const char TEXT_ZAMBRETTI_O[]       = "Regnerisch, wird veränderlich";
  const char TEXT_ZAMBRETTI_P[]       = "Veränderlich mit wenig Regen";
  const char TEXT_ZAMBRETTI_Q[]       = "Veränderlich, mit kurzen schönen Intervallen";
  const char TEXT_ZAMBRETTI_R[]       = "Veränderlich, später Regen";
  const char TEXT_ZAMBRETTI_S[]       = "Veränderlich, zeitweise Regen";
  const char TEXT_ZAMBRETTI_T[]       = "Stark wechselnd, zeitweise schöner";
  const char TEXT_ZAMBRETTI_U[]       = "Zeitweise Regen, verschlechtert sich";
  const char TEXT_ZAMBRETTI_V[]       = "Zeitweise Regen, wird sehr unruhig";
  const char TEXT_ZAMBRETTI_W[]       = "Regen in regelmässigen Abständen";
  const char TEXT_ZAMBRETTI_X[]       = "Sehr veränderlich, Regen";
  const char TEXT_ZAMBRETTI_Y[]       = "Stürmisch, verbessert sich wahrscheinlich";
  const char TEXT_ZAMBRETTI_Z[]       = "Stürmisch, viel Regen";
  const char TEXT_ZAMBRETTI_DEFAULT[] = "Im Moment keine Prognose möglich";
#endif
