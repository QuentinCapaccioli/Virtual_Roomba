#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__msg__RoombaState() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__msg__RoombaState__init(msg: *mut RoombaState) -> bool;
    fn custom_interfaces__msg__RoombaState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RoombaState>, size: usize) -> bool;
    fn custom_interfaces__msg__RoombaState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RoombaState>);
    fn custom_interfaces__msg__RoombaState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RoombaState>, out_seq: *mut rosidl_runtime_rs::Sequence<RoombaState>) -> bool;
}

// Corresponds to custom_interfaces__msg__RoombaState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RoombaState {
    /// Niveau de batterie (0 à 100)
    pub battery_level: f32,

    /// État du robot : "IDLE", "CLEANING" ou "DEAD"
    pub current_status: rosidl_runtime_rs::String,

    /// Mode de puissance courant : "NORMAL", "ECO" ou "TURBO"
    pub power_mode: rosidl_runtime_rs::String,

}



impl Default for RoombaState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__msg__RoombaState__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__msg__RoombaState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RoombaState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__RoombaState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__RoombaState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__msg__RoombaState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RoombaState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RoombaState where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/msg/RoombaState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__msg__RoombaState() }
  }
}


