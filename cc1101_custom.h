#include "esphome.h"
#include "esphome/components/spi/spi.h"
#include "esphome/components/logger/logger.h"

class CC1101Custom : public Component {
 public:
  void setup() override {
    ESP_LOGI("CC1101", "Setting up CC1101...");
    // Initialize your CC1101 module here, configure it as required
  }

  void loop() override {
    // Here you can check for data received on the CC1101
  }

  void on_receive(uint8_t* data, size_t length) {
    std::string raw_data = format_hex(data, length);
    ESP_LOGD("CC1101", "Received raw data: %s", raw_data.c_str());
  }
};
