## notes to myself as I go about getting re-setup to develop and run Arduino 
---
## current laptop h/w
MacBook Pro
Apple M1 Max

macOS Monterey 
12.6.1

---
## using VS Code and arduino-cli instead of the Arduino GUI/desktop application

Updated arduino-cli
arduino-cli 0.28.0 -> 0.29.0

--- 
Pyhton requirement
pip3 install pyserial

---
## board list

- [Adafruit Huzzah ESP32](https://learn.adafruit.com/adafruit-huzzah32-esp32-feather)
- [Unnofficial list of all 3rd party boards - very handy](https://github.com/arduino/Arduino/wiki/Unofficial-list-of-3rd-party-boards-support-urls)

Need to get various boards added to board manager

Remember to update arduino-cli.yaml with necessary url's \
file: /Users/chris/Library/Arduino15/arduino-cli.yaml

```
board_manager:
  additional_urls:
    - https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
    - https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
```

---
add board definitions to core via cli

    arduino-cli core update-index --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json

---
### Handy cli commands
- [arduino-cli getting started - quite useful](https://arduino.github.io/arduino-cli/0.24/getting-started/)
- arduino-cli board listall
- arduino-cli board list
- arduino-cli core update-index
- arduino-cli board details -b esp32:esp32:featheresp32
- arduino-cli board search esp
- arduino-cli core install adafruit:avr --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
- arduino-cli core install adafruit:nrf52 --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
- arduino-cli core install adafruit:samd adafruit:wiced TeeOnArdu:avr --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
-arduino-cli core install adafruit:avrarduino-cli core update-index --additional-urls https://adafruit.github.io/arduino-board-index/package_adafruit_index.json
- arduino-cli core install esp32:esp32:featheresp32
- arduino-cli core install esp32:esp32
- arduino-cli core install arduino:avr
- arduino-cli core install adafruit:avr
- [Monitor - instead of screen?](https://arduino.github.io/arduino-cli/0.24/commands/arduino-cli_monitor/)

---
### compile commands
- [arduino-cli compile docs](https://arduino.github.io/arduino-cli/0.24/commands/arduino-cli_compile/)
- compile, do not upload
  - arduino-cli compile --fqbn esp32:esp32:featheresp32 bme680station.ino
- compile and upload
  - arduino-cli compile -u -p /dev/cu.usbserial-0160E91C --fqbn esp32:esp32:featheresp32 MyFirstSketch.ino
- compile clean and upload (clean can add quite some time)
  - arduino-cli compile --clean -u -p /dev/cu.usbserial-0160E91C --fqbn esp32:esp32:featheresp32 testsketch.ino



