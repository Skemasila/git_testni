# Projekt C++ Testni Repozitorij

Preprost C++ projekt za ucenje in demonstracijo naprednega upravljanja razlicic z orodjem Git ter GitHub (vkljucno s CI/CD in GPG podpisovanjem).

## Vsebina projekta
- **Kalkulator (`calculator.cpp`, `calculator.h`)**: Osnovne racunske operacije z obdelavo deljenja z niclo.
- **Upravitelj nalog (`tasks.cpp`, `tasks.h`)**: Enostavno upravljanje s seznamom nalog.
- **Glavni program (`main.cpp`)**: Povezuje in poganja module.

## Kompajliranje in zagon (MSVC)
```bash
cl /EHsc main.cpp calculator.cpp tasks.cpp /Fe:app.exe
./app.exe