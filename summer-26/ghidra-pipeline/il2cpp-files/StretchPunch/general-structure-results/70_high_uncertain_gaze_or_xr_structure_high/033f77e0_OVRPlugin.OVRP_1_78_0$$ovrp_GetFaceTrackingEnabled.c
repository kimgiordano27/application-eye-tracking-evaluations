/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetFaceTrackingEnabled
ENTRY_POINT: 033f77e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x033f7828) */
/* WARNING: Removing unreachable block (ram,0x033f7864) */
/* WARNING: Removing unreachable block (ram,0x033f7928) */
/* WARNING: Removing unreachable block (ram,0x033f7830) */

bool OVRPlugin_OVRP_1_78_0__ovrp_GetFaceTrackingEnabled(void)

{
  int iVar1;
  bool in_ZR;
  long unaff_x19;
  undefined8 in_stack_00000038;
  
  if (in_stack_00000038._4_1_ != '\0') {
    iVar1 = *(int *)(unaff_x19 + 0x18);
    thunk_FUN_01da0934();
    thunk_FUN_01da0934();
    *(int *)(unaff_x19 + 0x18) = iVar1 + -1;
    FUN_01dccd6c(*(undefined8 *)(unaff_x19 + 0x20));
  }
  FUN_033f597c(&stack0x00000020);
  return !in_ZR;
}


