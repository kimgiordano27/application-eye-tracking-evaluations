/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 07a2259c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted(long param_1)

{
  long unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x26;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 unaff_s10;
  undefined4 unaff_s11;
  undefined4 unaff_s12;
  undefined4 unaff_s13;
  
  *(undefined8 *)(param_1 + 0x40) = unaff_x22;
  thunk_FUN_040ec700();
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x21;
  thunk_FUN_040ec700();
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
  thunk_FUN_040ec700();
  *(undefined8 *)(unaff_x19 + 0x58) = unaff_x26;
  thunk_FUN_040ec700((undefined8 *)(unaff_x19 + 0x58));
  *(undefined4 *)(unaff_x19 + 0x60) = unaff_s13;
  *(undefined4 *)(unaff_x19 + 100) = unaff_s12;
  *(undefined4 *)(unaff_x19 + 0x68) = unaff_s11;
  *(undefined4 *)(unaff_x19 + 0x6c) = unaff_s10;
  *(undefined4 *)(unaff_x19 + 0x70) = unaff_s9;
  *(undefined4 *)(unaff_x19 + 0x74) = unaff_s8;
  return;
}


