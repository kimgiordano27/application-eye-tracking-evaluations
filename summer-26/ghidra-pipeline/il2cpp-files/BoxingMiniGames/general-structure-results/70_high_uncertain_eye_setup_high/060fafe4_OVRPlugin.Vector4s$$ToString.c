/*
FUNCTION_NAME: OVRPlugin.Vector4s$$ToString
ENTRY_POINT: 060fafe4
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


void OVRPlugin_Vector4s__ToString(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x18) = unaff_x19;
  thunk_FUN_036b7ad0();
  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
  FUN_04529000(lVar3,*unaff_x21);
  puVar2 = PTR_DAT_07a24d78;
  if (lVar3 != 0) {
    lVar7 = *(long *)(lVar3 + 0x10);
    lVar8 = *(long *)PTR_DAT_07a24d78;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 6;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,6,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 7;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,7,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 8;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,8,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 9;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,9,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 10;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,10,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0xb,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0xe,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0xf,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0x10,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0x11,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,0x12,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 3;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,3,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 4;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04529890(lVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        lVar7 = *(long *)(lVar3 + 0x10);
        lVar8 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_060fb714;
      }
      puVar2 = PTR_DAT_07a24dc8;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = 5;
      }
      else {
        FUN_04529890(lVar3,5,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
      }
      plVar4 = (long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20);
      *plVar4 = lVar3;
      thunk_FUN_036b7ad0(plVar4,lVar3);
      uVar5 = FUN_03642a4c(*unaff_x22,5);
      FUN_05d3bc48(uVar5,*(undefined8 *)puVar2,0);
      puVar6 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
      *puVar6 = uVar5;
      thunk_FUN_036b7ad0(puVar6,uVar5);
      return;
    }
  }
LAB_060fb714:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


