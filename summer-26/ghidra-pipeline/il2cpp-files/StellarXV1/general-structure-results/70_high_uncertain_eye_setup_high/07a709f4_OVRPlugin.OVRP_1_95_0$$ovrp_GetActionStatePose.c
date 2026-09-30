/*
FUNCTION_NAME: OVRPlugin.OVRP_1_95_0$$ovrp_GetActionStatePose
ENTRY_POINT: 07a709f4
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_95_0__ovrp_GetActionStatePose(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uStack0000000000000020;
  undefined1 uStack000000000000002c;
  
  uStack000000000000002c = 0;
  uStack0000000000000020 = param_1;
  pcVar1 = (code *)thunk_FUN_040b519c();
  *(code **)(unaff_x20 + 0x960) = pcVar1;
  (*pcVar1)();
                    /* try { // try from 07a70a20 to 07b70a27 has its CatchHandler @ 07a70db4 */
  return;
}


