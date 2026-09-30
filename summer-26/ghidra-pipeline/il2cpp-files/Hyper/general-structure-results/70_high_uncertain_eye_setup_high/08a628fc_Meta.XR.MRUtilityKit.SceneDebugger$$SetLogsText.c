/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$SetLogsText
ENTRY_POINT: 08a628fc
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_20;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a62a3c) */

void Meta_XR_MRUtilityKit_SceneDebugger__SetLogsText(void)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  int iVar7;
  int unaff_w23;
  long lVar8;
  long unaff_x25;
  undefined8 unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar9 [16];
  long in_stack_00000040;
  
  while( true ) {
    lVar8 = *(long *)(unaff_x22 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
                    /* try { // try from 08a62910 to 08b62913 has its CatchHandler @ 08a62b1c */
    auVar9 = FUN_08a5d9ac((double)unaff_x25,unaff_x26,0);
    if (lVar8 == 0) break;
                    /* try { // try from 08a62924 to 08b6292b has its CatchHandler @ 08a62b10 */
    lVar5 = *(long *)(lVar8 + 0x10);
    lVar6 = *unaff_x29;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar5 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
                    /* try { // try from 08a62944 to 08b6294b has its CatchHandler @ 08a62b00 */
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    /* try { // try from 08a62958 to 08b62967 has its CatchHandler @ 08a62af4 */
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar5 + (long)(int)uVar1 * 0x10 + 0x20) = auVar9;
    }
    else {
                    /* try { // try from 08a6296c to 08b62973 has its CatchHandler @ 08a62b54 */
                    /* try { // try from 08a62978 to 08b6297f has its CatchHandler @ 08a62b24 */
      FUN_06c25988(lVar8,auVar9._0_8_,auVar9._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
    lVar8 = *unaff_x21;
    iVar7 = unaff_w23 + 1;
    if (lVar8 == 0) {
LAB_08a629ec:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    while( true ) {
      lVar8 = *(long *)(lVar8 + 0x18);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (iVar7 < *(int *)(lVar8 + 0x18)) break;
                    /* try { // try from 08a62990 to 08b629af has its CatchHandler @ 08a62b48 */
      if (*(long *)(unaff_x22 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      FUN_06c27310(*(long *)(unaff_x22 + 0x18),*(undefined8 *)PTR_DAT_0ac53a68);
      uVar2 = FUN_05fefd38(&stack0x00000030,*unaff_x19);
      if ((uVar2 & 1) == 0) {
        FUN_05fefd34(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac53c78);
        return;
      }
      lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53cb0);
      FUN_08dbf2f0(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x21 = (long *)(lVar8 + 0x10);
      *unaff_x21 = in_stack_00000040;
      thunk_FUN_049ee3d8(unaff_x21);
      if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar5 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x28);
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53ac0);
      FUN_0718cabc(uVar3,lVar8,*(undefined8 *)PTR_DAT_0ac53ca8,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x22 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__FindIndex
                            (lVar5,uVar3,*(undefined8 *)PTR_DAT_0ac53ab8);
      if (unaff_x22 == 0) {
        unaff_x22 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53a70);
        FUN_08a5bcbc(unaff_x22,0);
        if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(*unaff_x21 + 0x10);
        thunk_FUN_049ee3d8();
        uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cde0);
        FUN_06c250f0(uVar3,*(undefined8 *)PTR_DAT_0ac4cde8);
        *(undefined8 *)(unaff_x22 + 0x18) = uVar3;
        thunk_FUN_049ee3d8((undefined8 *)(unaff_x22 + 0x18),uVar3);
        if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar8 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x28);
        if (lVar8 == 0) {
LAB_08a62a10:
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        lVar5 = *(long *)(lVar8 + 0x10);
        lVar6 = *(long *)PTR_DAT_0ac53a60;
        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_08a62a10;
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = unaff_x22;
          thunk_FUN_049ee3d8(plVar4,unaff_x22);
        }
        else {
          FUN_06b7fe74(lVar8,unaff_x22,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      lVar8 = *unaff_x21;
      if (lVar8 == 0) goto LAB_08a629ec;
      iVar7 = 0;
    }
    unaff_x25 = FUN_06b16404(lVar8,iVar7,*unaff_x27);
    if (*unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar8 = *(long *)(*unaff_x21 + 0x18);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_w23 = iVar7 + 1;
    unaff_x26 = FUN_06b16404(lVar8,unaff_w23,*unaff_x27);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


