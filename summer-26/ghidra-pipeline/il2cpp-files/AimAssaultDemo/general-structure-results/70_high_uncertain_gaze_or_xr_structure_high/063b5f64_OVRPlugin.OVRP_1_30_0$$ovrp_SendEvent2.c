/*
FUNCTION_NAME: OVRPlugin.OVRP_1_30_0$$ovrp_SendEvent2
ENTRY_POINT: 063b5f64
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 85
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_30_0__ovrp_SendEvent2(ulong param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
                    /* try { // try from 063b5f64 to 064b5f7b has its CatchHandler @ 063b6004 */
  puVar1 = *(undefined8 **)(unaff_x21 + 0x308);
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7308);
    *(undefined1 *)(unaff_x20 + 0x73b) = 1;
  }
                    /* try { // try from 063b5f84 to 064b5f87 has its CatchHandler @ 063b5ff4 */
                    /* try { // try from 063b5f90 to 064b5f97 has its CatchHandler @ 063b5ff0 */
  FUN_054d71f4(param_2,*puVar1);
  return;
}


