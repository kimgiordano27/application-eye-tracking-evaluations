/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnSessionStateChange
ENTRY_POINT: 090c67c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 100
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_UnityOpenXR__OnSessionStateChange(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x9;
  long in_x10;
  uint in_w11;
  undefined8 unaff_x19;
  long unaff_x20;
  
  if (in_w11 < (uint)in_x9) {
    uVar1 = 0;
  }
  else {
    uVar1 = unaff_x19;
    if (*(long *)(*(long *)(in_x10 + 200) + in_x9 * 8 + -8) != param_1) {
      uVar1 = 0;
    }
  }
  thunk_FUN_049ee3d8(param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x48) = unaff_x19;
  thunk_FUN_049ee3d8((undefined8 *)(unaff_x20 + 0x48));
  return;
}


