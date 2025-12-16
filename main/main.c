/*
 * Zigrid - Zigbee-based illuminated button grid array
 * Main application entry point
 */

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"

static const char *TAG = "zigrid";

void app_main(void)
{
  ESP_LOGI(TAG, "Zigrid firmware starting...");
  ESP_LOGI(TAG, "ESP32-C6 Zigbee-based button grid");

  // Main application loop will be implemented here
  while (1) {
    ESP_LOGI(TAG, "Zigrid running");
    vTaskDelay(pdMS_TO_TICKS(5000));
  }
}
