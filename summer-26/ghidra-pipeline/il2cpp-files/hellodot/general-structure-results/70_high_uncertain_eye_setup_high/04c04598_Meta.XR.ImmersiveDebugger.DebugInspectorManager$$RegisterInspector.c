/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspectorManager$$RegisterInspector
ENTRY_POINT: 04c04598
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


void Meta_XR_ImmersiveDebugger_DebugInspectorManager__RegisterInspector(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
                    /* try { // try from 04c045a4 to 04d045a7 has its CatchHandler @ 04c0467c */
    thunk_FUN_02cd038c(param_1);
  }
                    /* try { // try from 04c045a8 to 04d045ab has its CatchHandler @ 04c0466c */
                    /* try { // try from 04c045ac to 04d045b7 has its CatchHandler @ 04c0402c */
  FUN_04eb0530();
  lVar2 = FUN_04c048d4();
  puVar1 = PTR_DAT_065c8a10;
                    /* try { // try from 04c045b8 to 04d045bb has its CatchHandler @ 04c045c0 */
  if (lVar2 == 0) {
LAB_04c04868:
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
                    /* try { // try from 04c045bc to 04d045e3 has its CatchHandler @ 04c0402c */
                    /* catch() { ... } // from try @ 04c045b8 with catch @ 04c045c0 */
                    /* catch() { ... } // from try @ 04c04228 with catch @ 04c045c4
                       catch() { ... } // from try @ 04c044f0 with catch @ 04c045c4 */
                    /* catch() { ... } // from try @ 04c04450 with catch @ 04c045c8 */
  uVar6 = *(undefined8 *)PTR_DAT_065c8a10;
                    /* catch() { ... } // from try @ 04c041e8 with catch @ 04c045cc */
  lVar3 = thunk_FUN_02cea798(lVar2,uVar6);
  if (lVar3 == 0) {
LAB_04c048c8:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar2,uVar6);
  }
  uVar6 = *(undefined8 *)puVar1;
                    /* try { // try from 04c045e4 to 04d045e7 has its CatchHandler @ 04c045f4 */
  lVar3 = thunk_FUN_02cea798(lVar2,uVar6);
  if (lVar3 == 0) goto LAB_04c048c8;
                    /* catch() { ... } // from try @ 04c045e4 with catch @ 04c045f4 */
  if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_04c04864;
  lVar2 = *(long *)(lVar3 + 0x30);
  if (lVar2 == 0) goto LAB_04c04868;
  uVar6 = *(undefined8 *)puVar1;
  lVar3 = thunk_FUN_02cea798(lVar2,uVar6);
  puVar1 = PTR_DAT_065c8b30;
  if (lVar3 == 0) {
LAB_04c04648:
                    /* WARNING: Subroutine does not return */
    FUN_02ce8018(lVar2,uVar6);
  }
  if (1 < *(uint *)(lVar3 + 0x18)) {
    lVar2 = *(long *)(lVar3 + 0x28);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 04c04634 to 04d04667 has its CatchHandler @ 04c04734 */
      uVar6 = *(undefined8 *)PTR_DAT_065c8b30;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar6);
      if (lVar4 == 0) goto LAB_04c04648;
    }
    uVar6 = FUN_04c04934(lVar4,1);
    if (*(uint *)(lVar3 + 0x18) < 3) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x30);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar7 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar7);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar2,uVar7);
      }
    }
    uVar7 = FUN_04c04934(lVar4,0);
    if (*(uint *)(lVar3 + 0x18) < 4) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x38);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar8 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar8);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar2,uVar8);
      }
    }
    uVar8 = FUN_04c04934(lVar4,1);
    if (*(uint *)(lVar3 + 0x18) < 5) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x40);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar9 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar9);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar2,uVar9);
      }
    }
    uVar9 = FUN_04c04934(lVar4,1);
    if (*(uint *)(lVar3 + 0x18) < 6) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x48);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar10 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar10);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar2,uVar10);
      }
    }
    uVar10 = FUN_04c04934(lVar4,1);
    if (*(uint *)(lVar3 + 0x18) < 7) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x50);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar11 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar11);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar2,uVar11);
      }
    }
    uVar11 = FUN_04c04934(lVar4,1);
    if (*(uint *)(lVar3 + 0x18) < 8) goto LAB_04c04864;
    lVar2 = *(long *)(lVar3 + 0x58);
    if (lVar2 == 0) {
      lVar4 = 0;
    }
    else {
      uVar12 = *(undefined8 *)puVar1;
      lVar4 = thunk_FUN_02cea798(lVar2,uVar12);
      if (lVar4 == 0) goto LAB_04c04824;
    }
    uVar5 = FUN_04c04934(lVar4,1);
    if (8 < *(uint *)(lVar3 + 0x18)) {
      lVar2 = *(long *)(lVar3 + 0x60);
      if (lVar2 == 0) {
        lVar3 = 0;
      }
      else {
        uVar12 = *(undefined8 *)puVar1;
        lVar3 = thunk_FUN_02cea798(lVar2,uVar12);
        if (lVar3 == 0) {
LAB_04c04824:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar2,uVar12);
        }
      }
      uVar12 = FUN_04c04934(lVar3,1);
      *unaff_x19 = uVar7;
      unaff_x19[1] = uVar6;
      unaff_x19[2] = uVar9;
      unaff_x19[3] = uVar10;
      unaff_x19[4] = uVar11;
      unaff_x19[5] = uVar5;
      unaff_x19[6] = uVar12;
      unaff_x19[7] = uVar8;
      return;
    }
  }
LAB_04c04864:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


