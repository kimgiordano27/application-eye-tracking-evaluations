/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 027d743c
PROGRAM: vrlegs-libil2cpp.so
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
  long unaff_x20;
  long unaff_x21;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x21 + 0xb68);
  if ((*(byte *)(unaff_x20 + 0x26) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfcb68);
    *(undefined1 *)(unaff_x20 + 0x26) = 1;
  }
  FUN_0277b8e0(param_1,*puVar1,0);
  *(undefined4 *)(param_1 + 0x60) = 0x80131520;
  return;
}


