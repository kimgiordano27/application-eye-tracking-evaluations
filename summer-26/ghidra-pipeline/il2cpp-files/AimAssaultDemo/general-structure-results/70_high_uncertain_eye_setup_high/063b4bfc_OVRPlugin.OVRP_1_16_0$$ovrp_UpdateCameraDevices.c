/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_UpdateCameraDevices
ENTRY_POINT: 063b4bfc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_UpdateCameraDevices(void)

{
  int in_w8;
  long unaff_x19;
  long unaff_x20;
  float unaff_s8;
  double in_stack_00000008;
  
  if (in_w8 == 0) {
                    /* try { // try from 063b4c04 to 064b4c0f has its CatchHandler @ 063b4cbc */
    FUN_0373b518(PTR_DAT_07d863e8);
    *(undefined1 *)(unaff_x20 + 0x8b8) = 1;
  }
                    /* try { // try from 063b4c20 to 064b4c27 has its CatchHandler @ 063b4cb8 */
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
                    /* try { // try from 063b4c28 to 064b4c37 has its CatchHandler @ 063b4cac */
    thunk_FUN_03798b70();
  }
  modf((double)unaff_s8,&stack0x00000008);
  if (unaff_x19 != 0) {
    FUN_07547994();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


