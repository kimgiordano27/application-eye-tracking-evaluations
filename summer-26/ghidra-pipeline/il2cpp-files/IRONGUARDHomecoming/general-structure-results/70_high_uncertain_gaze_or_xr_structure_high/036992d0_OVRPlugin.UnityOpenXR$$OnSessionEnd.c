/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionEnd
ENTRY_POINT: 036992d0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionEnd(long param_1,undefined8 param_2)

{
  bool in_CY;
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (in_CY) {
    uVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  thunk_FUN_01f51358(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
  thunk_FUN_01f51358((undefined8 *)(unaff_x20 + 0x48));
  return;
}


