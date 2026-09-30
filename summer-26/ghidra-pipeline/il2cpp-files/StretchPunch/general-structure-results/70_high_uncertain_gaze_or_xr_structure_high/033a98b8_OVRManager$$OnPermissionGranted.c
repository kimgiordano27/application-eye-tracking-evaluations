/*
FUNCTION_NAME: OVRManager$$OnPermissionGranted
ENTRY_POINT: 033a98b8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_permission_setup
*/


long OVRManager__OnPermissionGranted(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  puVar1 = StringLiteral_513;
  if ((*(byte *)(unaff_x21 + 0x8a0) & 1) == 0) {
    FUN_01d7d918(StringLiteral_513);
    *(undefined1 *)(unaff_x21 + 0x8a0) = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
    lVar2 = *(long *)puVar1;
  }
  if (*param_1 != *(long *)(*(long *)(lVar2 + 0xb8) + 0x10)) {
    return -*param_1;
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar3 = thunk_FUN_01de27b8();
  uVar4 = thunk_FUN_01dd295c(StringLiteral_8316);
  FUN_03390704(uVar3,uVar4,0);
  uVar4 = thunk_FUN_01dd295c(StringLiteral_8469);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


