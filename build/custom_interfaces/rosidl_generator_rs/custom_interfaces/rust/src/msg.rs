#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to custom_interfaces__msg__RoombaState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoombaState {
    /// Niveau de batterie (0 à 100)
    pub battery_level: f32,

    /// État du robot : "IDLE", "CLEANING" ou "DEAD"
    pub current_status: std::string::String,

    /// Mode de puissance courant : "NORMAL", "ECO" ou "TURBO"
    pub power_mode: std::string::String,

}



impl Default for RoombaState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RoombaState::default())
  }
}

impl rosidl_runtime_rs::Message for RoombaState {
  type RmwMsg = super::msg::rmw::RoombaState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        battery_level: msg.battery_level,
        current_status: msg.current_status.as_str().into(),
        power_mode: msg.power_mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      battery_level: msg.battery_level,
        current_status: msg.current_status.as_str().into(),
        power_mode: msg.power_mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      battery_level: msg.battery_level,
      current_status: msg.current_status.to_string(),
      power_mode: msg.power_mode.to_string(),
    }
  }
}


