/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 076ae788
PROGRAM: m3ar-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


void OVRManager__OnPermissionGranted
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  long *unaff_x19;
  undefined4 uVar2;
  
  uVar2 = FUN_08575a80(0);
  puVar1 = *(undefined4 **)(*unaff_x19 + 0xb8);
  *puVar1 = uVar2;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}


