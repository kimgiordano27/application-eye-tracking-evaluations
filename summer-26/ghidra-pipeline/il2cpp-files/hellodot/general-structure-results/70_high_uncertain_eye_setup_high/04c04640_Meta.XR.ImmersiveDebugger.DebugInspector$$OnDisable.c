/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$OnDisable
ENTRY_POINT: 04c04640
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_17;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__OnDisable(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *unaff_x29;
  
  lVar1 = thunk_FUN_02cea798();
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018();
  }
  uVar2 = FUN_04c04934(lVar1,1);
  if (2 < *(uint *)(unaff_x20 + 0x18)) {
    lVar1 = *(long *)(unaff_x20 + 0x30);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar5 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar5);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,uVar5);
      }
    }
    uVar5 = FUN_04c04934(lVar3,0);
    if (*(uint *)(unaff_x20 + 0x18) < 4) goto LAB_04c04864;
    lVar1 = *(long *)(unaff_x20 + 0x38);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar6 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar6);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,uVar6);
      }
    }
    uVar6 = FUN_04c04934(lVar3,1);
    if (*(uint *)(unaff_x20 + 0x18) < 5) goto LAB_04c04864;
    lVar1 = *(long *)(unaff_x20 + 0x40);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar7 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar7);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,uVar7);
      }
    }
    uVar7 = FUN_04c04934(lVar3,1);
    if (*(uint *)(unaff_x20 + 0x18) < 6) goto LAB_04c04864;
    lVar1 = *(long *)(unaff_x20 + 0x48);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar8 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar8);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,uVar8);
      }
    }
    uVar8 = FUN_04c04934(lVar3,1);
    if (*(uint *)(unaff_x20 + 0x18) < 7) goto LAB_04c04864;
    lVar1 = *(long *)(unaff_x20 + 0x50);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar9 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar9);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar1,uVar9);
      }
    }
    uVar9 = FUN_04c04934(lVar3,1);
    if (*(uint *)(unaff_x20 + 0x18) < 8) goto LAB_04c04864;
    lVar1 = *(long *)(unaff_x20 + 0x58);
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      uVar10 = *unaff_x29;
      lVar3 = thunk_FUN_02cea798(lVar1,uVar10);
      if (lVar3 == 0) goto LAB_04c04824;
    }
    uVar4 = FUN_04c04934(lVar3,1);
    if (8 < *(uint *)(unaff_x20 + 0x18)) {
      lVar1 = *(long *)(unaff_x20 + 0x60);
      if (lVar1 == 0) {
        lVar3 = 0;
      }
      else {
        uVar10 = *unaff_x29;
        lVar3 = thunk_FUN_02cea798(lVar1,uVar10);
        if (lVar3 == 0) {
LAB_04c04824:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar1,uVar10);
        }
      }
      uVar10 = FUN_04c04934(lVar3,1);
      *unaff_x19 = uVar5;
      unaff_x19[1] = uVar2;
      unaff_x19[2] = uVar7;
      unaff_x19[3] = uVar8;
      unaff_x19[4] = uVar9;
      unaff_x19[5] = uVar4;
      unaff_x19[6] = uVar10;
      unaff_x19[7] = uVar6;
      return;
    }
  }
LAB_04c04864:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


