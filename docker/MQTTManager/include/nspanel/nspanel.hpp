#ifndef MQTT_MANAGER_NSPANEL
#define MQTT_MANAGER_NSPANEL
#include <cstdint>
#include <mqtt_manager/mqtt_manager.hpp>
#include <nlohmann/json.hpp>
#include <string>

enum MQTT_MANAGER_NSPANEL_STATE {
  UNKNOWN,
  WAITING,
  ONLINE,
  OFFLINE,
  UPDATING_FIRMWARE,
  UPDATING_DATA,
  UPDATING_TFT,
  AWAITING_ACCEPT
};

class NSPanelLogMessage {
public:
  std::string time;
  std::string level;
  std::string message;
};

class NSPanel : public MQTT_Observer {
public:
  NSPanel(nlohmann::json &init_data);
  ~NSPanel();

  /**
   * Get the ID of this NSPanel.
   */
  uint get_id();
  std::string get_mac();
  std::string get_name();
  MQTT_MANAGER_NSPANEL_STATE get_state();
  bool mqtt_callback(const std::string &topic, const std::string &payload);

  /**
   * Dump JSON as string and send to NSPanel command topic.
   */
  void send_command(nlohmann::json &command);

  /**
   * Get the JSON message that will be sent over the websocket when a client requests the state of the NSPanel.
   */
  nlohmann::json get_websocket_json_representation();

  /**
   * Get the JSON message that will be sent over the websocket when a client requests the logs from the given NSPanel.
   */
  nlohmann::json get_websocket_json_logs();

  /**
   * Sends a reboot command to the panel over MQTT.
   */
  void reboot();

  /**
   * Sends a command to start firmware update.
   */
  void firmware_update();

  /**
   * Sends a command to start TFT screen update.
   */
  void tft_update();

  /**
   * Request warnings from maanager (Django) and update internal state.
   */
  void update_warnings_from_manager();

  /**
   * Accept register request from this panel.
   */
  void accept_register_request();

  /**
   * Deny register request from this panel and add to "ignore"-list.
   */
  void deny_register_request();

  /**
   * Returns true if the NSPanel is register in manager, otherwise false.
   */
  bool has_registered_to_manager();

  /**
   * Send current state to the websocket.
   */
  void send_websocket_update();

  /**
   * Register NSPanel to manager.
   */
  bool register_to_manager(const nlohmann::json &register_request_payload);

  /**
   * Register NSPanel to manager.
   */
  void register_to_home_assistant();

private:
  uint _id;
  std::string _mac;
  std::string _name;
  bool _is_us_panel;
  bool _is_register_accepted;
  bool _has_registered_to_manager;
  std::string _ip_address;
  int16_t _rssi;
  int16_t _temperature;
  uint8_t _heap_used_pct;
  uint8_t _update_progress;
  MQTT_MANAGER_NSPANEL_STATE _state;
  std::string _nspanel_warnings;
  std::string _nspanel_warnings_from_manager;
  std::string _mqtt_register_mac;

  // MQTT Stuff:
  // Wether or not relay1 should be registered to Home Assistant as a switch or light (true = register as light).
  bool _relay1_is_mqtt_light;
  // Wether or not relay2 should be registered to Home Assistant as a switch or light (true = register as light).
  bool _relay2_is_mqtt_light;
  // The topic to capture logs from MQTT
  std::string _mqtt_log_topic;
  // The topic to capture status (online/offline) from MQTT
  std::string _mqtt_status_topic;
  // The topic to capture status reports from MQTT
  std::string _mqtt_status_report_topic;
  // The topic to send commands to panel to via MQTT
  std::string _mqtt_command_topic;
  // Home Assistant MQTT registration topics:
  std::string _mqtt_sensor_temperature_topic;
  std::string _mqtt_switch_relay1_topic;
  std::string _mqtt_light_relay1_topic;
  std::string _mqtt_switch_relay2_topic;
  std::string _mqtt_light_relay2_topic;
  std::string _mqtt_switch_screen_topic;
  std::string _mqtt_number_screen_brightness_topic;
  std::string _mqtt_number_screensaver_brightness_topic;

  std::list<NSPanelLogMessage> _log_messages;
};
#endif // !MQTT_MANAGER_NSPANEL
