/*
FUNCTION_NAME: OVRPlugin$$GetVirtualKeyboardModelAnimationStates
ENTRY_POINT: 033cd6e0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetVirtualKeyboardModelAnimationStates(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  uint unaff_w21;
  long lVar8;
  uint uVar9;
  undefined4 in_stack_00000008;
  undefined8 in_stack_00000018;
  
  if (*(int *)(*(long *)StringLiteral_1157 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033ca788(unaff_w21,&stack0x00000018,&stack0x0000000c,&stack0x00000008);
  lVar3 = FUN_033cc014();
  if (lVar3 == 0) {
LAB_033cd7c8:
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(lVar3 + 0x18);
  if ((int)uVar1 < 1) {
    lVar7 = 0;
  }
  else {
    uVar9 = 0;
    lVar7 = 0;
    do {
      if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar8 = *(long *)(lVar3 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_033cd7c8;
      uVar1 = thunk_FUN_03313a48(lVar8,0);
      uVar2 = thunk_FUN_03313a48(lVar8,0);
      if (((uVar1 & (unaff_w21 ^ 2)) == uVar2) &&
         (uVar4 = FUN_03306b28(lVar7,0,0), lVar7 = lVar8, (uVar4 & 1) != 0)) {
        uVar5 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar5 = FUN_033d6e4c(uVar5,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar6 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar6,uVar5,0);
        uVar5 = thunk_FUN_01dd295c(StringLiteral_8932);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar6,uVar5);
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  return lVar7;
}


