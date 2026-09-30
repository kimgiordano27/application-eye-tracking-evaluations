/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_OnSessionBegin
ENTRY_POINT: 03169388
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03169398) */

float OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_OnSessionBegin
                (long param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  uint in_w9;
  long in_x10;
  long in_x11;
  float fVar1;
  
  if (0.0 <= param_5 / param_3) {
    param_2 = param_5 / param_3;
  }
  if (in_w9 < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48180();
  }
  fVar1 = *(float *)(param_1 + 0x20 + in_x11 * 4 + 4);
                    /* try { // try from 031693cc to 03269407 has its CatchHandler @ 03169b30 */
  return fVar1 + param_2 * (*(float *)(param_1 + 0x20 + in_x10 * 4 + 4) - fVar1);
}


