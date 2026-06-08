#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetPowerMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__SetPowerMode_Request__init(msg: *mut SetPowerMode_Request) -> bool;
    fn custom_interfaces__srv__SetPowerMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Request>, size: usize) -> bool;
    fn custom_interfaces__srv__SetPowerMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Request>);
    fn custom_interfaces__srv__SetPowerMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Request>) -> bool;
}

// Corresponds to custom_interfaces__srv__SetPowerMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerMode_Request {
    /// Mode demandé : "NORMAL", "ECO" ou "TURBO"
    pub power_mode: rosidl_runtime_rs::String,

}



impl Default for SetPowerMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__SetPowerMode_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__SetPowerMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/SetPowerMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetPowerMode_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetPowerMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__SetPowerMode_Response__init(msg: *mut SetPowerMode_Response) -> bool;
    fn custom_interfaces__srv__SetPowerMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Response>, size: usize) -> bool;
    fn custom_interfaces__srv__SetPowerMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Response>);
    fn custom_interfaces__srv__SetPowerMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetPowerMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetPowerMode_Response>) -> bool;
}

// Corresponds to custom_interfaces__srv__SetPowerMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerMode_Response {
    /// True si le mode a été accepté
    pub success: bool,

    /// Détail lisible (mode appliqué, erreur, etc.)
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetPowerMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__SetPowerMode_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__SetPowerMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetPowerMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__SetPowerMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetPowerMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetPowerMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/SetPowerMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__SetPowerMode_Response() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__ToggleCleaning_Request() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__ToggleCleaning_Request__init(msg: *mut ToggleCleaning_Request) -> bool;
    fn custom_interfaces__srv__ToggleCleaning_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Request>, size: usize) -> bool;
    fn custom_interfaces__srv__ToggleCleaning_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Request>);
    fn custom_interfaces__srv__ToggleCleaning_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToggleCleaning_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Request>) -> bool;
}

// Corresponds to custom_interfaces__srv__ToggleCleaning_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToggleCleaning_Request {
    /// True = démarrer, False = arrêter
    pub start_cleaning: bool,

}



impl Default for ToggleCleaning_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__ToggleCleaning_Request__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__ToggleCleaning_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToggleCleaning_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToggleCleaning_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToggleCleaning_Request where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/ToggleCleaning_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__ToggleCleaning_Request() }
  }
}


#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__ToggleCleaning_Response() -> *const std::ffi::c_void;
}

#[link(name = "custom_interfaces__rosidl_generator_c")]
extern "C" {
    fn custom_interfaces__srv__ToggleCleaning_Response__init(msg: *mut ToggleCleaning_Response) -> bool;
    fn custom_interfaces__srv__ToggleCleaning_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Response>, size: usize) -> bool;
    fn custom_interfaces__srv__ToggleCleaning_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Response>);
    fn custom_interfaces__srv__ToggleCleaning_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ToggleCleaning_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ToggleCleaning_Response>) -> bool;
}

// Corresponds to custom_interfaces__srv__ToggleCleaning_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToggleCleaning_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for ToggleCleaning_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !custom_interfaces__srv__ToggleCleaning_Response__init(&mut msg as *mut _) {
        panic!("Call to custom_interfaces__srv__ToggleCleaning_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ToggleCleaning_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { custom_interfaces__srv__ToggleCleaning_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ToggleCleaning_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ToggleCleaning_Response where Self: Sized {
  const TYPE_NAME: &'static str = "custom_interfaces/srv/ToggleCleaning_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__custom_interfaces__srv__ToggleCleaning_Response() }
  }
}






#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__SetPowerMode() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__srv__SetPowerMode
#[allow(missing_docs, non_camel_case_types)]
pub struct SetPowerMode;

impl rosidl_runtime_rs::Service for SetPowerMode {
    type Request = SetPowerMode_Request;
    type Response = SetPowerMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__SetPowerMode() }
    }
}




#[link(name = "custom_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__ToggleCleaning() -> *const std::ffi::c_void;
}

// Corresponds to custom_interfaces__srv__ToggleCleaning
#[allow(missing_docs, non_camel_case_types)]
pub struct ToggleCleaning;

impl rosidl_runtime_rs::Service for ToggleCleaning {
    type Request = ToggleCleaning_Request;
    type Response = ToggleCleaning_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__custom_interfaces__srv__ToggleCleaning() }
    }
}


