/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$get_Instance
ENTRY_POINT: 04c04530
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__get_Instance(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x19;
  long *unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar3 = FUN_04db8e94();
  puVar1 = PTR_DAT_065e4e48;
  if (((uVar3 & 1) == 0) || (uVar3 = FUN_04db844c(), puVar2 = PTR_DAT_065cd840, (uVar3 & 1) == 0)) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar4 = thunk_FUN_02cea894();
    uVar9 = thunk_FUN_02c7737c(PTR_DAT_065e4e60);
    uVar10 = thunk_FUN_02c7737c(PTR_DAT_065e4e58);
    FUN_04e97fd8(uVar4,uVar9,uVar10,0);
    uVar9 = thunk_FUN_02c7737c(PTR_DAT_065e4e68);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar4,uVar9);
  }
  if ((*unaff_x21 == 0) || (*(long *)puVar1 == 0)) {
LAB_04c04868:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar4 = FUN_04dbaed4();
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar2);
  }
  FUN_04eb0530(uVar4,0);
  lVar5 = FUN_04c048d4();
  puVar1 = PTR_DAT_065c8a10;
  if (lVar5 == 0) goto LAB_04c04868;
  uVar4 = *(undefined8 *)PTR_DAT_065c8a10;
  lVar6 = thunk_FUN_02cea798(lVar5,uVar4);
  if (lVar6 == 0) {
LAB_04c048c8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar5,uVar4);
  }
  uVar4 = *(undefined8 *)puVar1;
  lVar6 = thunk_FUN_02cea798(lVar5,uVar4);
  if (lVar6 == 0) goto LAB_04c048c8;
  if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_04c04864;
  lVar5 = *(long *)(lVar6 + 0x30);
  if (lVar5 == 0) goto LAB_04c04868;
  uVar4 = *(undefined8 *)puVar1;
  lVar6 = thunk_FUN_02cea798(lVar5,uVar4);
  puVar1 = PTR_DAT_065c8b30;
  if (lVar6 == 0) {
LAB_04c04648:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar5,uVar4);
  }
  if (1 < *(uint *)(lVar6 + 0x18)) {
    lVar5 = *(long *)(lVar6 + 0x28);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar4 = *(undefined8 *)PTR_DAT_065c8b30;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar4);
      if (lVar7 == 0) goto LAB_04c04648;
    }
    uVar4 = FUN_04c04934(lVar7,1);
    if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x30);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar9);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar9);
      }
    }
    uVar9 = FUN_04c04934(lVar7,0);
    if (*(uint *)(lVar6 + 0x18) < 4) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x38);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar10);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar10);
      }
    }
    uVar10 = FUN_04c04934(lVar7,1);
    if (*(uint *)(lVar6 + 0x18) < 5) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x40);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar11 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar11);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar11);
      }
    }
    uVar11 = FUN_04c04934(lVar7,1);
    if (*(uint *)(lVar6 + 0x18) < 6) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x48);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar12 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar12);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar12);
      }
    }
    uVar12 = FUN_04c04934(lVar7,1);
    if (*(uint *)(lVar6 + 0x18) < 7) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x50);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar13 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar13);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar13);
      }
    }
    uVar13 = FUN_04c04934(lVar7,1);
    if (*(uint *)(lVar6 + 0x18) < 8) goto LAB_04c04864;
    lVar5 = *(long *)(lVar6 + 0x58);
    if (lVar5 == 0) {
      lVar7 = 0;
    }
    else {
      uVar14 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_02cea798(lVar5,uVar14);
      if (lVar7 == 0) goto LAB_04c04824;
    }
    uVar8 = FUN_04c04934(lVar7,1);
    if (8 < *(uint *)(lVar6 + 0x18)) {
      lVar5 = *(long *)(lVar6 + 0x60);
      if (lVar5 == 0) {
        lVar6 = 0;
      }
      else {
        uVar14 = *(undefined8 *)puVar1;
        lVar6 = thunk_FUN_02cea798(lVar5,uVar14);
        if (lVar6 == 0) {
LAB_04c04824:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar5,uVar14);
        }
      }
      uVar14 = FUN_04c04934(lVar6,1);
      *unaff_x19 = uVar9;
      unaff_x19[1] = uVar4;
      unaff_x19[2] = uVar11;
      unaff_x19[3] = uVar12;
      unaff_x19[4] = uVar13;
      unaff_x19[5] = uVar8;
      unaff_x19[6] = uVar14;
      unaff_x19[7] = uVar10;
      return;
    }
  }
LAB_04c04864:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


