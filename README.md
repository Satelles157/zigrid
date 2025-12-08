# zigrid

A Zigbee-based illuminated button grid array.

## Overview

This project implements a grid of illuminated buttons controlled wirelessly via Zigbee, enabling flexible input and visual feedback applications.

## Development Setup

### Hardware Target

- **ESP32-C6**: RISC-V based SoC with Zigbee 3.0, Thread, and Matter support
- Supports 2.4 GHz Wi-Fi 6, Bluetooth 5 (LE), and 802.15.4 protocol

### Build System

This project uses [ESP-IDF](https://docs.espressif.com/projects/esp-idf/en/stable/esp32c6/get-started/index.html) (Espressif IoT Development Framework) as the build system and development framework.

**Prerequisites:**
- ESP-IDF v5.3.2 or later (required for ESP32-C6 support)
- CMake 3.16+
- Python 3.8+

**Installation:** Follow the [ESP-IDF Getting Started Guide](https://docs.espressif.com/projects/esp-idf/en/stable/esp32c6/get-started/index.html) to set up the toolchain.

### Dependency Management

Dependencies are managed using the [IDF Component Manager](https://docs.espressif.com/projects/esp-idf/en/stable/esp32c6/api-guides/tools/idf-component-manager.html). Components are defined in `main/idf_component.yml` and automatically downloaded during build.

**Browse components:** https://components.espressif.com/

**Add dependencies:**
```bash
idf.py add-dependency "namespace/name==version"
```

### Building and Flashing

```bash
# Configure project for ESP32-C6 target
idf.py set-target esp32c6

# Build the project
idf.py build

# Flash to device and monitor output
idf.py -p PORT flash monitor
```

Replace `PORT` with your serial port (e.g., `/dev/ttyACM0` on Linux, `COM3` on Windows).

### Project Structure

```
zigrid/
├── CMakeLists.txt              # Top-level build configuration
├── sdkconfig.defaults          # ESP32-C6 default configuration
└── main/
    ├── CMakeLists.txt          # Main component build rules
    ├── idf_component.yml       # Component dependencies
    └── main.c                  # Application entry point
```

## Documentation

- [ESP-IDF Programming Guide](https://docs.espressif.com/projects/esp-idf/en/stable/esp32c6/index.html)
- [ESP32-C6 Technical Reference](https://www.espressif.com/sites/default/files/documentation/esp32-c6_technical_reference_manual_en.pdf)
- [IDF Component Manager](https://docs.espressif.com/projects/esp-idf/en/stable/esp32c6/api-guides/tools/idf-component-manager.html)
