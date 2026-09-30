/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 01f5fd48
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


bool OVRManager__OnPermissionGranted(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x19;
  ulong unaff_x21;
  ulong unaff_x25;
  
  puVar1 = PTR_DAT_027c0ad8;
  *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)puVar1;
  *(undefined4 *)(unaff_x19 + 0x40) = 4;
  *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  return unaff_x21 < unaff_x25;
}


