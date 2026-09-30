/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionExiting
ENTRY_POINT: 03395c10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 101
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ui_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionExiting(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  
  while (uVar1 = FUN_02a5e6dc(&stack0x00000030,param_2), (uVar1 & 1) != 0) {
    FUN_0339f5a0();
    param_2 = *unaff_x23;
  }
  FUN_02a5e7f4(&stack0x00000030,
               *(undefined8 *)Method_UnityEngine_UIElements_FocusEventBase<FocusInEvent>__ctor__);
  FUN_0339cf34();
  return;
}


