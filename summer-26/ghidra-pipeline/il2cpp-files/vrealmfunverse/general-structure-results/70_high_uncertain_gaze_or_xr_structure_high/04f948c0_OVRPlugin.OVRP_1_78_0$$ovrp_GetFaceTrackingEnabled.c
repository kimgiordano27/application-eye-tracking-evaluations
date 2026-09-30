/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 04f948c0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


uint OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled
               (undefined8 param_1,ulong param_2,long param_3)

{
  int in_w8;
  uint in_w9;
  
  if ((uint)(in_w8 >> 6) < in_w9) {
    return (uint)(*(ulong *)(param_3 + (long)(in_w8 >> 6) * 8 + 0x20) >> (param_2 & 0x3f)) & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


