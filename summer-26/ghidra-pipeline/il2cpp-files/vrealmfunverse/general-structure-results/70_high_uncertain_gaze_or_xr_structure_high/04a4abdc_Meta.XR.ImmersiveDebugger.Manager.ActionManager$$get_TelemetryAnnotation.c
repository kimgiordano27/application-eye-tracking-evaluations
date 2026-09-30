/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.ActionManager$$get_TelemetryAnnotation
ENTRY_POINT: 04a4abdc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;telemetry
EVIDENCE: strong_eye_source_hits_1;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_ImmersiveDebugger_Manager_ActionManager__get_TelemetryAnnotation
               (undefined8 param_1,int param_2)

{
  long lVar1;
  bool in_ZR;
  bool in_CY;
  int in_w8;
  long in_x9;
  long in_x10;
  int in_w11;
  
  if (in_CY && !in_ZR) {
    lVar1 = in_x10 + (long)in_w11 * 4;
    *(int *)(in_x9 + (long)in_w8 * 0x18 + 0x24) = *(int *)(lVar1 + 0x20) + -1;
    *(int *)(lVar1 + 0x20) = param_2 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


