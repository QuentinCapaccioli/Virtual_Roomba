#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to custom_interfaces__srv__SetPowerMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerMode_Request {
    /// Mode demandé : "NORMAL", "ECO" ou "TURBO"
    pub power_mode: std::string::String,

}



impl Default for SetPowerMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerMode_Request {
  type RmwMsg = super::srv::rmw::SetPowerMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        power_mode: msg.power_mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        power_mode: msg.power_mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      power_mode: msg.power_mode.to_string(),
    }
  }
}


// Corresponds to custom_interfaces__srv__SetPowerMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetPowerMode_Response {
    /// True si le mode a été accepté
    pub success: bool,

    /// Détail lisible (mode appliqué, erreur, etc.)
    pub message: std::string::String,

}



impl Default for SetPowerMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetPowerMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetPowerMode_Response {
  type RmwMsg = super::srv::rmw::SetPowerMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to custom_interfaces__srv__ToggleCleaning_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToggleCleaning_Request {
    /// True = démarrer, False = arrêter
    pub start_cleaning: bool,

}



impl Default for ToggleCleaning_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ToggleCleaning_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ToggleCleaning_Request {
  type RmwMsg = super::srv::rmw::ToggleCleaning_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_cleaning: msg.start_cleaning,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      start_cleaning: msg.start_cleaning,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start_cleaning: msg.start_cleaning,
    }
  }
}


// Corresponds to custom_interfaces__srv__ToggleCleaning_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ToggleCleaning_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: std::string::String,

}



impl Default for ToggleCleaning_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ToggleCleaning_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ToggleCleaning_Response {
  type RmwMsg = super::srv::rmw::ToggleCleaning_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
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


