/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$ShowRoomDetailsDebugger
ENTRY_POINT: 08a62658
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x08a62a3c) */

void Meta_XR_MRUtilityKit_SceneDebugger__ShowRoomDetailsDebugger
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int in_w11;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long *plVar11;
  long unaff_x22;
  int iVar12;
  long unaff_x23;
  uint unaff_w25;
  long *unaff_x28;
  long *unaff_x29;
  undefined1 auVar13 [16];
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  long in_stack_00000040;
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = param_1;
  while( true ) {
    lVar8 = *(long *)(unaff_x23 + 0x10);
    lVar10 = *unaff_x29;
    *(int *)(unaff_x23 + 0x1c) = in_w11 + 1;
    if (lVar8 == 0) break;
    uVar1 = *(uint *)(unaff_x23 + 0x18);
    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
      *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar8 + (long)(int)uVar1 * 0x10 + 0x20) = auVar13;
    }
    else {
      FUN_06c25988(unaff_x23,auVar13._0_8_,auVar13._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
    }
    uVar1 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 08a626b4 to 08b626c3 has its CatchHandler @ 08a62b84 */
    if ((int)uVar1 <= (int)(unaff_w25 + 1)) {
      if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar8 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x20);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
                    /* try { // try from 08a626d4 to 08b626d7 has its CatchHandler @ 08a62b80 */
      FUN_06c27310(lVar8,*(undefined8 *)PTR_DAT_0ac53a68);
                    /* try { // try from 08a626e4 to 08b626e7 has its CatchHandler @ 08a62b64 */
      if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
                    /* try { // try from 08a626fc to 08b6270b has its CatchHandler @ 08a62b74 */
      FUN_06b8097c(&stack0x00000008);
      puVar3 = PTR_DAT_0ac53ca0;
      puVar2 = PTR_DAT_0ac53c80;
                    /* try { // try from 08a62710 to 08b62717 has its CatchHandler @ 08a62b7c */
      in_stack_00000040 = in_stack_00000018;
                    /* try { // try from 08a6271c to 08b62733 has its CatchHandler @ 08a62b78 */
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000030;
      goto LAB_08a62728;
    }
    if (uVar1 <= unaff_w19 + 1U) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    unaff_w25 = unaff_w19 + 2;
    if (uVar1 <= unaff_w25) {
                    /* WARNING: Subroutine does not return */
      FUN_04948194();
    }
    if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_x23 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x20);
    lVar8 = *(long *)(unaff_x22 + (long)(int)(unaff_w19 + 1U) * 8 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x22 + (long)(unaff_w19 + 2) * 8 + 0x20);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    auVar13 = FUN_08a5d9ac((double)lVar8,uVar5,0);
    if (unaff_x23 == 0) break;
    in_w11 = *(int *)(unaff_x23 + 0x1c);
    unaff_w19 = unaff_w19 + 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
LAB_08a62728:
  uVar4 = FUN_05fefd38(&stack0x00000030,*(undefined8 *)puVar2);
  if ((uVar4 & 1) == 0) {
    FUN_05fefd34(&stack0x00000030,*(undefined8 *)PTR_DAT_0ac53c78);
    return;
  }
  lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53cb0);
                    /* try { // try from 08a6274c to 08b62753 has its CatchHandler @ 08a62b5c */
  FUN_08dbf2f0(lVar8,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
                    /* try { // try from 08a62758 to 08b6275f has its CatchHandler @ 08a62b2c */
  plVar11 = (long *)(lVar8 + 0x10);
  *plVar11 = in_stack_00000040;
  thunk_FUN_049ee3d8(plVar11);
                    /* try { // try from 08a62770 to 08b6278f has its CatchHandler @ 08a62b50 */
  if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar10 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x28);
  uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53ac0);
                    /* try { // try from 08a6279c to 08b627bb has its CatchHandler @ 08a62b44 */
  FUN_0718cabc(uVar5,lVar8,*(undefined8 *)PTR_DAT_0ac53ca8,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar8 = System_Collections_Generic_List<ControllerButtonsMapper_ButtonClickAction>__FindIndex
                    (lVar10,uVar5,*(undefined8 *)PTR_DAT_0ac53ab8);
                    /* try { // try from 08a627c0 to 08b627d3 has its CatchHandler @ 08a62b34 */
  if (lVar8 == 0) {
    lVar8 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac53a70);
    FUN_08a5bcbc(lVar8,0);
                    /* try { // try from 08a627e4 to 08b627e7 has its CatchHandler @ 08a62b20 */
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 08a627f8 to 08b627ff has its CatchHandler @ 08a62b14 */
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(*plVar11 + 0x10);
    thunk_FUN_049ee3d8();
    uVar5 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac4cde0);
                    /* try { // try from 08a62818 to 08b6281f has its CatchHandler @ 08a62b04 */
    FUN_06c250f0(uVar5,*(undefined8 *)PTR_DAT_0ac4cde8);
    *(undefined8 *)(lVar8 + 0x18) = uVar5;
                    /* try { // try from 08a6282c to 08b6283b has its CatchHandler @ 08a62af8 */
    thunk_FUN_049ee3d8((undefined8 *)(lVar8 + 0x18),uVar5);
    if (*(long *)(unaff_x20 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 08a6283c to 08b62877 has its CatchHandler @ 08a62488 */
    lVar10 = *(long *)(*(long *)(unaff_x20 + 0x60) + 0x28);
    if (lVar10 == 0) {
LAB_08a62a10:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *(long *)(lVar10 + 0x10);
    lVar9 = *(long *)PTR_DAT_0ac53a60;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    if (lVar6 == 0) goto LAB_08a62a10;
    uVar1 = *(uint *)(lVar10 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 08a62878 to 08b6287f has its CatchHandler @ 08a62b58 */
      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = lVar8;
                    /* try { // try from 08a62884 to 08b6288b has its CatchHandler @ 08a62b28 */
      thunk_FUN_049ee3d8(plVar7,lVar8);
    }
    else {
                    /* try { // try from 08a6289c to 08b628bb has its CatchHandler @ 08a62b4c */
      FUN_06b7fe74(lVar10,lVar8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
  }
  lVar10 = *plVar11;
  if (lVar10 == 0) {
LAB_08a629ec:
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  iVar12 = 0;
  while( true ) {
    lVar10 = *(long *)(lVar10 + 0x18);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    if (*(int *)(lVar10 + 0x18) <= iVar12) break;
                    /* try { // try from 08a628c8 to 08b628e7 has its CatchHandler @ 08a62b40 */
    lVar10 = FUN_06b16404(lVar10,iVar12,*(undefined8 *)puVar3);
    if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar6 = *(long *)(*plVar11 + 0x18);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
                    /* try { // try from 08a628ec to 08b628ff has its CatchHandler @ 08a62b38 */
    uVar5 = FUN_06b16404(lVar6,iVar12 + 1,*(undefined8 *)puVar3);
    lVar6 = *(long *)(lVar8 + 0x18);
    if (*(int *)(*unaff_x28 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    auVar13 = FUN_08a5d9ac((double)lVar10,uVar5,0);
    if (lVar6 == 0) {
LAB_08a629e8:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    lVar10 = *(long *)(lVar6 + 0x10);
    lVar9 = *unaff_x29;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (lVar10 == 0) goto LAB_08a629e8;
    uVar1 = *(uint *)(lVar6 + 0x18);
    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
      *(undefined1 (*) [16])(lVar10 + (long)(int)uVar1 * 0x10 + 0x20) = auVar13;
    }
    else {
      FUN_06c25988(lVar6,auVar13._0_8_,auVar13._8_8_,
                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    lVar10 = *plVar11;
    iVar12 = iVar12 + 2;
    if (lVar10 == 0) goto LAB_08a629ec;
  }
  if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  FUN_06c27310(*(long *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_0ac53a68);
  goto LAB_08a62728;
}


