# BuildPad
BuildPad is customizable macro pad with OLED display, layers, media controls and more.

## Why BuildPad?
BuildPad is customizable open-source macropad for makers, coders, designers, and electronics builders and why I made this because building something yourself is way more fun than buying it and I love hardware.

## Features
- 6 programmable mechanical keys
- Rotary encoder
- OLED display
- RGB lighting
- Custom firmware
- Open-source hardware
- Bongo Cat animation

## CAD Render
<img width="807" height="414" alt="Opera Snapshot_2026-07-03_222907_cad onshape com" src="https://github.com/user-attachments/assets/362d20aa-5a3d-4742-9e9f-a83dae572393" />
<img width="636" height="480" alt="Opera Snapshot_2026-07-03_222953_cad onshape com" src="https://github.com/user-attachments/assets/7bcae890-fcce-4e9d-a9f8-81b9c20f87a9" />


## PCB Screenshots
![image](https://cdn.hackclub.com/019ef59a-6f5c-710c-83ca-89a48ec1d11d/image.png)
![image](https://cdn.hackclub.com/019ef59a-bcc8-749e-8118-97423e1eb3ba/image.png)

## Hardware
- XIAO RP2040
- SSD1306 128×32 OLED
- MX Cherry Switches
- SK6812 MINI E Leds
- EC11 Rotary Encoder

## Build Your Own BuildPad

### 1. Order the PCB
Export the Gerber files from the PCB folder and order the board from your preferred PCB manufacturer.

### 2. Print the Case
Print the top and bottom case parts using the files in the case directory.

[CAD Source](https://cad.onshape.com/documents/56e50c354be83b1f527c4f36/w/ea902eb5d511072ea0b73db3/e/02ae305e326d8373da2c26ce?renderMode=0&uiState=6a47eb012f119bc675f6dd9a)

### 3. Gather Components
Use the BOM to source all required components.

### 4. Assemble the PCB
Solder:
1. Diodes
2. RGB LEDs
3. XIAO RP2040
4. OLED Display
5. Rotary Encoder
6. Mechanical Switches

### 5. Install Heat Set Inserts
Install M2 heat-set inserts into the top case.

### 6. Flash Firmware
Install QMK and compile:
```bash
qmk compile -kb buildpad -km default
```
Flash the generated firmware onto the XIAO RP2040.

### 7. Assemble the Case
Mount the PCB inside the case and secure everything using M2 screws.


## BOM
# Bill of Materials

| Item | Qty | Component | Specification | Price | Link |
|------|-----|------------|---------------|--------|------|
| 1 | 1 | Microcontroller | Seeed Studio XIAO RP2040 | ~$6-7 | https://robu.in/product/seeed-studio-xiao-rp2040-v1-0/ |
| 2 | 1 | OLED Display | 0.91in SSD1306 I2C OLED (128x32) | ~$2.5 | https://robu.in/product/0-91-inch-128x32-i2c-iic-serial-blue-oled-lcd-display-module/ |
| 3 | 1 | Rotary Encoder | EC11 Encoder with Push Switch | ~$0.6 | https://robu.in/product/hongyan-ec11h-7ce20p1zy20-rotary-encoder-with-push-button-switch-vertical-plug-in-5-pin/ |
| 4 | 1 | Mechanical Switches | Cherry MX Compatible Switches (Pack of 10) | ~$4 | https://meckeys.com/shop/accessories/keyboard-accessories/key-switches/cherry-mx-rgb-switch/ |
| 5 | 2 | Keycaps | MX Compatible Keycaps (Pack of 5) | ~$2 | https://meckeys.com/shop/accessories/keyboard-accessories/keycaps/blank/blank-dsa-keycaps-1u/ |
| 6 | 8 | RGB LEDs | SK6812MINI-E Reverse Mount RGB LEDs | ~$3 | https://www.lcsc.com/product-detail/C5149201.html |
| 7 | 6 | Diodes | 1N4148W SOD-123 | ~$0.5 | https://www.lcsc.com/product-detail/C81598.html |
| 8 | 1 | PCB | BuildPad v1 PCB | $4 + $8 shipping | JLCPCB |
| 9 | 1 | Case | BuildPad v1 3D Printed Case | - | - |
| 10 | 8 | Heat Set Inserts | M2 Brass Heat Set Inserts | ~$1.5 | https://robu.in/product/m2-x-4-mm-brass-insert/ |
| 11 | 4 | Screws | M2 Machine Screws 12mm Long | ~$0.5 | https://robu.in/product/easymech-m2-x-12mm-hex-allen-csk-high-tensile109-black-oxide-screw-dia-2mm-length-12mm/ |
| 12 | 4 | Screws | M2 Machine Screws 4mm Long | ~$0.5 | TBD |
| 13 | 1 | Encoder Knob | 6mm Shaft Encoder Knob | ~$1 | TBD |

## License
This project is licensed under the MIT License.

## Author
Pranay Kamle

BuildPad v1 • 2026
