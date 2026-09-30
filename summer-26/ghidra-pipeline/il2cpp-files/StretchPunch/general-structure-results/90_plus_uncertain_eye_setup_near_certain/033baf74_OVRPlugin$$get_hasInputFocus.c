/*
FUNCTION_NAME: OVRPlugin$$get_hasInputFocus
ENTRY_POINT: 033baf74
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033bb104) */

undefined8 OVRPlugin__get_hasInputFocus(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x19;
  uint uVar7;
  uint uVar8;
  long unaff_x20;
  long *plVar9;
  char cStack000000000000000c;
  
  FUN_01d7d918(StringLiteral_8748);
  FUN_01d7d918(StringLiteral_8749);
  *(undefined1 *)(unaff_x20 + 0x97b) = 1;
  cStack000000000000000c = '\0';
  FUN_032ff418(0);
  FUN_033f4894();
  plVar9 = (long *)(unaff_x19 + 0x10);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  uVar3 = *(uint *)(lVar6 + 0x18);
  uVar7 = *(uint *)(unaff_x19 + 0x18);
  uVar8 = uVar7;
  if ((int)uVar7 < (int)uVar3) {
    uVar1 = uVar7;
    if (uVar7 <= uVar3) {
      uVar1 = uVar3;
    }
    do {
      if (uVar1 == uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      uVar8 = uVar7;
      if (*(char *)(lVar6 + (int)uVar7 + 0x20) == '\0') goto LAB_033bb044;
      uVar7 = uVar7 + 1;
      uVar8 = uVar3;
    } while (uVar3 != uVar7);
  }
  iVar2 = uVar3 + 0x80;
  if ((int)uVar3 < 0x200) {
    iVar2 = uVar3 << 1;
  }
  lVar6 = FUN_01d7d9bc(*(undefined8 *)StringLiteral_4521,iVar2);
  FUN_033b5ecc(*plVar9,lVar6,uVar3,0);
  *plVar9 = lVar6;
  thunk_FUN_01e10808(plVar9,lVar6);
  lVar6 = *plVar9;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
LAB_033bb044:
  if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db78();
  }
  *(undefined1 *)(lVar6 + (int)uVar8 + 0x20) = 1;
  puVar4 = StringLiteral_8749;
  lVar6 = *(long *)(unaff_x19 + 0x30);
  if ((lVar6 != 0x7fffffffffffffff) && ((-1 < lVar6 || (-0x8000000000000000 - lVar6 < 2)))) {
    *(long *)(unaff_x19 + 0x30) = lVar6 + 1;
    uVar5 = thunk_FUN_01de27b8(*(undefined8 *)puVar4);
    FUN_033ba784();
    *(uint *)(unaff_x19 + 0x18) = uVar8 + 1;
    if (cStack000000000000000c != '\0') {
      thunk_FUN_01dccd6c();
    }
    return uVar5;
  }
  uVar5 = FUN_01d7db80();
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar5,*(undefined8 *)StringLiteral_8748);
}


