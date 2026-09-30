/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaValidator$$SetDtdSchemaInfo
ENTRY_POINT: 053e1c70
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_2;telemetry_or_network_hits_1;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_1
*/


bool System_Xml_Schema_XmlSchemaValidator__SetDtdSchemaInfo(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long *unaff_x19;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = FUN_04d938a0(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x22 + 0x250);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04d8a7b0(lVar2 + 0x20,0);
    uVar1 = FUN_04d938a0();
    if ((uVar1 & 1) != 0) goto LAB_053e1cb0;
    lVar2 = *(long *)(unaff_x22 + 0xa0);
    if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04d8a7b0(lVar2 + 0x20,0);
    uVar1 = FUN_04d938a0();
    if ((uVar1 & 1) == 0) {
      uVar3 = *(undefined8 *)UnityEngine_InputSystem_LowLevel_GamepadButton_var;
      if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
      }
      FUN_04d8a7b0(uVar3,0);
      uVar1 = FUN_04d938a0();
      if ((uVar1 & 1) == 0) {
        uVar3 = *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo;
        if (*(int *)(*(long *)(unaff_x22 + 0xe0) + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_04d8a7b0(uVar3,0);
        uVar1 = FUN_04d938a0();
        if ((uVar1 & 1) == 0) goto LAB_053e1d10;
      }
      lVar2 = thunk_FUN_02b79644(*(undefined8 *)OVRVirtualKeyboard_KeyboardPosition_TypeInfo);
      FUN_053fac18();
    }
    else {
      lVar2 = thunk_FUN_02b79644(*(undefined8 *)OVRPassthroughLayer_ColorLutHandler_TypeInfo);
      FUN_053d1970();
    }
  }
  else {
LAB_053e1cb0:
    if (*(int *)(*(long *)OVRMicrogesturesSample_<ShowGestureLabel>d__26_TypeInfo + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar2 = thunk_FUN_02b79644(*(undefined8 *)
                                UnityEngine_XR_OpenXR_OpenXRAnalytics_InitializeEvent_TypeInfo);
    FUN_053f9afc();
  }
  *unaff_x19 = lVar2;
  thunk_FUN_02bb0e9c();
LAB_053e1d10:
  return *unaff_x19 != 0;
}


