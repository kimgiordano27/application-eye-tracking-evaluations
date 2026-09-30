/*
FUNCTION_NAME: OVRPlugin$$GetNodeOrientationTracked
ENTRY_POINT: 033bd454
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetNodeOrientationTracked(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x20;
  
  FUN_033a87c8();
  uVar3 = FUN_033ab18c();
  if ((uVar3 & 1) != 0) {
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8781);
    uVar4 = FUN_033d6e4c(uVar4,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar5 = thunk_FUN_01de27b8();
    FUN_0328dba4(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01dd295c(StringLiteral_8783);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar5,uVar4);
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  iVar2 = (**(code **)(*unaff_x20 + 0x198))();
  if (iVar2 == 2) {
    bVar1 = *(byte *)(*(long *)StringLiteral_6058 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)StringLiteral_6058)) {
      FUN_033bcd94();
      return;
    }
  }
  else {
    if (iVar2 != 0x10) {
                    /* WARNING: Could not recover jumptable at 0x033bd55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x20 + 0x1e8))();
      return;
    }
    bVar1 = *(byte *)(*(long *)StringLiteral_1681 + 0x130);
    if ((bVar1 <= *(byte *)(*unaff_x20 + 0x130)) &&
       (*(long *)(*(long *)(*unaff_x20 + 200) + (ulong)bVar1 * 8 + -8) ==
        *(long *)StringLiteral_1681)) {
      FUN_033bcd24();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7df0c();
}


