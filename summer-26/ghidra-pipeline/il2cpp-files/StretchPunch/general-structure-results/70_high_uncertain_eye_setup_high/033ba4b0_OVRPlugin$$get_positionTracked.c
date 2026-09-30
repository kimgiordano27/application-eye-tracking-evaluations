/*
FUNCTION_NAME: OVRPlugin$$get_positionTracked
ENTRY_POINT: 033ba4b0
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033ba620) */

undefined8 OVRPlugin__get_positionTracked(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x21;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  char cStack000000000000000c;
  
  if ((*(byte *)(unaff_x21 + 0x975) & 1) == 0) {
    FUN_01d7d918(StringLiteral_8733);
    FUN_01d7d918(StringLiteral_8737);
    *(undefined1 *)(unaff_x21 + 0x975) = 1;
  }
  cStack000000000000000c = '\0';
  FUN_032ff418(0);
  FUN_033f4894(*(undefined8 *)(param_1 + 0x18),&stack0x0000000c,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  if ((int)uVar1 < 0) {
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8734);
    uVar8 = FUN_033d6e4c(uVar8,0);
    thunk_FUN_01dd295c(StringLiteral_1244);
    uVar4 = thunk_FUN_01de27b8();
    FUN_03393770(uVar4,uVar8,0);
    uVar8 = thunk_FUN_01dd295c(StringLiteral_8738);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar4,uVar8);
  }
  plVar5 = (long *)(param_1 + 0x10);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    if (*(int *)(lVar7 + 0x18) <= (int)uVar1) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      uVar2 = FUN_033bb6e0(*(long *)(param_1 + 0x18),0);
      lVar7 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_8733,uVar2);
      lVar3 = *plVar5;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      FUN_033b5ecc(lVar3,lVar7,*(undefined4 *)(lVar3 + 0x18));
      *plVar5 = lVar7;
      thunk_FUN_01e10808(plVar5,lVar7);
      lVar7 = *plVar5;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar6 = (long *)(lVar7 + (ulong)uVar1 * 8 + 0x20);
    if (*plVar6 == 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      lVar3 = thunk_FUN_01de27b8(*(undefined8 *)StringLiteral_8737);
      FUN_033d8040(lVar3,0);
      *(undefined8 *)(lVar3 + 0x18) = uVar8;
      if (*(uint *)(lVar7 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      *plVar6 = lVar3;
      thunk_FUN_01e10808(plVar6,lVar3);
      lVar7 = *plVar5;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
    }
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      uVar8 = *(undefined8 *)(lVar7 + (ulong)uVar1 * 8 + 0x20);
      if (cStack000000000000000c != '\0') {
        thunk_FUN_01dccd6c(*(undefined8 *)(param_1 + 0x18),0);
      }
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


