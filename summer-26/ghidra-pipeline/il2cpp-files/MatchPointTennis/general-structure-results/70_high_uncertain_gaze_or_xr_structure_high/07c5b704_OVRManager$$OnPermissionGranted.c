/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 07c5b704
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long *unaff_x20;
  
  *(undefined1 *)(unaff_x19 + 0x634) = 1;
  uVar1 = thunk_FUN_0448520c(*unaff_x20);
  FUN_07a80df4(uVar1,0);
  **(undefined8 **)(*unaff_x20 + 0xb8) = uVar1;
  thunk_FUN_044bb4b4(*(undefined8 *)(*unaff_x20 + 0xb8),uVar1);
  return;
}


