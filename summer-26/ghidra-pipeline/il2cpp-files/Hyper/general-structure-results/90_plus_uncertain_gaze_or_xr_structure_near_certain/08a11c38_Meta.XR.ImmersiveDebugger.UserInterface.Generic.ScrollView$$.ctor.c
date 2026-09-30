/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.ScrollView$$.ctor
ENTRY_POINT: 08a11c38
PROGRAM: Hyper-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_ScrollView___ctor
               (long param_1,undefined8 param_2)

{
  int in_w8;
  
  if (in_w8 != 0) {
    FUN_088ef30c(param_2,8,0);
    FUN_088ee62c(param_2,*(undefined4 *)(param_1 + 0x18),0);
  }
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
    FUN_088ef30c(param_2,0x12,0);
    FUN_088ee8d4(param_2,*(undefined8 *)(param_1 + 0x20),0);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    HdyRpc_RequestHspSetup__set_StreamId(*(long *)(param_1 + 0x10),param_2,0);
    return;
  }
  return;
}


