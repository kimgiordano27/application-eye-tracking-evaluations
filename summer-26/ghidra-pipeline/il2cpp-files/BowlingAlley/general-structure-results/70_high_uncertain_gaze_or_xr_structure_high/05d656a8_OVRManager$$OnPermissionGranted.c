/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 05d656a8
PROGRAM: BowlingAlley-libil2cpp.so
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
  undefined8 uVar2;
  undefined8 *unaff_x21;
  
  uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar1 = thunk_FUN_032a55a4(uVar2,*unaff_x21);
  *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
  uVar1 = thunk_FUN_032a55a4(uVar2,*unaff_x21);
  thunk_FUN_0333a630((undefined8 *)(unaff_x19 + 0x30),uVar1);
  return;
}


