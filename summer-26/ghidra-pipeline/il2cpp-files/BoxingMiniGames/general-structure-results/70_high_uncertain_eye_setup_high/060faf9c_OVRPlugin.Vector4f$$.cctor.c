/*
FUNCTION_NAME: OVRPlugin.Vector4f$$.cctor
ENTRY_POINT: 060faf9c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Vector4f___cctor(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(unaff_x20 + 0xd0) = param_1;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x20 + 0xd0),param_1);
  uVar4 = FUN_03642a4c(*unaff_x22,0);
  puVar3 = PTR_DAT_07a24d90;
  puVar2 = PTR_DAT_07a24d88;
  if (*(uint *)(unaff_x20 + 0x18) < 0x18) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  *(undefined8 *)(unaff_x19 + 0xd8) = uVar4;
  thunk_FUN_036b7ad0();
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
  thunk_FUN_036b7ad0();
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
  FUN_04529000(lVar5,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_07a24d78;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_07a24d78;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 6;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 7;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 8;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,8,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 9;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,9,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 10;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,10,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0xb,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0xe,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0xf,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0x10,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0x11,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,0x12,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,2,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 3;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,3,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 4;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar5,4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_060fb714;
      }
      puVar2 = PTR_DAT_07a24dc8;
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = 5;
      }
      else {
        FUN_04529890(lVar5,5,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      plVar6 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
      *plVar6 = lVar5;
      thunk_FUN_036b7ad0(plVar6,lVar5);
      uVar4 = FUN_03642a4c(*unaff_x22,5);
      FUN_05d3bc48(uVar4,*(undefined8 *)puVar2,0);
      puVar7 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
      *puVar7 = uVar4;
      thunk_FUN_036b7ad0(puVar7,uVar4);
      return;
    }
  }
LAB_060fb714:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


