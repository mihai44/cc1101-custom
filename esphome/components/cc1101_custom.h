#include "esphome.h"
#include "esphome/components/rf_transceiver/rf_transceiver.h"
#include "esphome/core/log.h"

static const char *TAG = "cc1101_custom";

class CC1101Custom : public rf_transceiver::RFTransceiver {
 public:
  CC1101Custom() : rf_transceiver::RFTransceiver() {}

  void setup() override {
    ESP_LOGD(TAG, "Setting up CC1101Custom...");
    // Initialize the CC1101 module here, e.g., setting up SPI pins and configuration
  }

  void loop() override {
    // Handle reading and processing CC1101 packets
    ESP_LOGD(TAG, "Looping through CC1101...");
    // You can call some methods to read the data here.
  }

  // Override this method to handle the received packet data
  void on_receive(const uint8_t *data, size_t len) override {
    std::string raw_data = format_hex(data, len);
    ESP_LOGD(TAG, "Received raw data: %s", raw_data.c_str());
  }
};

