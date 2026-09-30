/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector$$OnEnable
ENTRY_POINT: 04c044b0
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector__OnEnable(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4e48);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4e50);
  AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065e4e58);
  *(undefined1 *)(unaff_x22 + 0x550) = 1;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
                    /* try { // try from 04c044f0 to 04d044f7 has its CatchHandler @ 04c045c4 */
    thunk_FUN_02cd038c();
  }
                    /* try { // try from 04c044f8 to 04d045a3 has its CatchHandler @ 04c0402c */
  FUN_04c1a188();
  if ((unaff_x20 == 0) || (lVar5 = FUN_04dbd58c(), puVar2 = PTR_DAT_065e4e50, lVar5 == 0)) {
LAB_04c04868:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  uVar6 = FUN_04db8e94(lVar5,*(undefined8 *)PTR_DAT_065e4e50,4,0);
  puVar4 = PTR_DAT_065e4e48;
  if (((uVar6 & 1) == 0) ||
     (uVar6 = FUN_04db844c(lVar5,*(undefined8 *)PTR_DAT_065e4e48,4,0), puVar3 = PTR_DAT_065cd840,
     (uVar6 & 1) == 0)) {
    thunk_FUN_02c7737c(PTR_DAT_065c96d8);
    uVar7 = thunk_FUN_02cea894();
    uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e4e60);
    uVar12 = thunk_FUN_02c7737c(PTR_DAT_065e4e58);
    FUN_04e97fd8(uVar7,uVar11,uVar12,0);
    uVar11 = thunk_FUN_02c7737c(PTR_DAT_065e4e68);
                    /* WARNING: Subroutine does not return */
    FUN_02ce7b54(uVar7,uVar11);
  }
  if ((*(long *)puVar2 == 0) || (*(long *)puVar4 == 0)) goto LAB_04c04868;
  iVar1 = *(int *)(*(long *)puVar2 + 0x10);
  uVar7 = FUN_04dbaed4(lVar5,iVar1,
                       (*(int *)(lVar5 + 0x10) - iVar1) - *(int *)(*(long *)puVar4 + 0x10),0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_02cd038c(*(long *)puVar3);
  }
  FUN_04eb0530(uVar7,0);
  lVar5 = FUN_04c048d4();
  puVar2 = PTR_DAT_065c8a10;
  if (lVar5 == 0) goto LAB_04c04868;
  uVar7 = *(undefined8 *)PTR_DAT_065c8a10;
  lVar8 = thunk_FUN_02cea798(lVar5,uVar7);
  if (lVar8 == 0) {
LAB_04c048c8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar5,uVar7);
  }
  uVar7 = *(undefined8 *)puVar2;
  lVar8 = thunk_FUN_02cea798(lVar5,uVar7);
  if (lVar8 == 0) goto LAB_04c048c8;
  if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_04c04864;
  lVar5 = *(long *)(lVar8 + 0x30);
  if (lVar5 == 0) goto LAB_04c04868;
  uVar7 = *(undefined8 *)puVar2;
  lVar8 = thunk_FUN_02cea798(lVar5,uVar7);
  puVar2 = PTR_DAT_065c8b30;
  if (lVar8 == 0) {
LAB_04c04648:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar5,uVar7);
  }
  if (1 < *(uint *)(lVar8 + 0x18)) {
    lVar5 = *(long *)(lVar8 + 0x28);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar7 = *(undefined8 *)PTR_DAT_065c8b30;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar7);
      if (lVar9 == 0) goto LAB_04c04648;
    }
    uVar7 = FUN_04c04934(lVar9,1);
    if (*(uint *)(lVar8 + 0x18) < 3) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x30);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar11 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar11);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar11);
      }
    }
    uVar11 = FUN_04c04934(lVar9,0);
    if (*(uint *)(lVar8 + 0x18) < 4) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x38);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar12 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar12);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar12);
      }
    }
    uVar12 = FUN_04c04934(lVar9,1);
    if (*(uint *)(lVar8 + 0x18) < 5) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x40);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar13 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar13);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar13);
      }
    }
    uVar13 = FUN_04c04934(lVar9,1);
    if (*(uint *)(lVar8 + 0x18) < 6) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x48);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar14 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar14);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar14);
      }
    }
    uVar14 = FUN_04c04934(lVar9,1);
    if (*(uint *)(lVar8 + 0x18) < 7) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x50);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar15 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar15);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar5,uVar15);
      }
    }
    uVar15 = FUN_04c04934(lVar9,1);
    if (*(uint *)(lVar8 + 0x18) < 8) goto LAB_04c04864;
    lVar5 = *(long *)(lVar8 + 0x58);
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      uVar16 = *(undefined8 *)puVar2;
      lVar9 = thunk_FUN_02cea798(lVar5,uVar16);
      if (lVar9 == 0) goto LAB_04c04824;
    }
    uVar10 = FUN_04c04934(lVar9,1);
    if (8 < *(uint *)(lVar8 + 0x18)) {
      lVar5 = *(long *)(lVar8 + 0x60);
      if (lVar5 == 0) {
        lVar8 = 0;
      }
      else {
        uVar16 = *(undefined8 *)puVar2;
        lVar8 = thunk_FUN_02cea798(lVar5,uVar16);
        if (lVar8 == 0) {
LAB_04c04824:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar5,uVar16);
        }
      }
      uVar16 = FUN_04c04934(lVar8,1);
      *unaff_x19 = uVar11;
      unaff_x19[1] = uVar7;
      unaff_x19[2] = uVar13;
      unaff_x19[3] = uVar14;
      unaff_x19[4] = uVar15;
      unaff_x19[5] = uVar10;
      unaff_x19[6] = uVar16;
      unaff_x19[7] = uVar12;
      return;
    }
  }
LAB_04c04864:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


