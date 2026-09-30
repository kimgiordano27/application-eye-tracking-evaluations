/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetUserEyeDepth
ENTRY_POINT: 051e3ab4
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_GetUserEyeDepth(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *piVar8;
  
  puVar2 = PTR_DAT_06609360;
  lVar3 = thunk_FUN_02cea894();
  FUN_03920118(lVar3,*(undefined8 *)puVar2);
  puVar2 = PTR_DAT_06609358;
  if (lVar3 != 0) {
    lVar5 = *(long *)PTR_DAT_06609358;
    piVar8 = (int *)(lVar3 + 0x1c);
    *piVar8 = *piVar8 + 1;
    lVar6 = *(long *)(lVar3 + 0x10);
    puVar7 = (uint *)(lVar3 + 0x18);
    uVar1 = *puVar7;
    if (lVar6 != 0) {
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                    /* try { // try from 051e3b0c to 052e3b1b has its CatchHandler @ 051e3b1c */
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 6;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,6,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 7;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 8;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,8,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 9;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,9,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0xb,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0xe,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x10,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x11,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x12,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x13,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x15,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x16,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x17,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,0x18,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 2;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,2,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 3;
        *piVar8 = *piVar8 + 1;
      }
      else {
        FUN_03920910(lVar3,3,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        lVar6 = *(long *)(lVar3 + 0x10);
        lVar5 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_051e4298;
      }
      puVar2 = PTR_DAT_06609388;
      uVar1 = *puVar7;
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *puVar7 = uVar1 + 1;
        *(undefined4 *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) = 4;
      }
      else {
        FUN_03920910(lVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar3;
      uVar4 = FUN_02ce7ad4(*unaff_x21,5);
      FUN_04e5d48c(uVar4,*(undefined8 *)puVar2,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar4;
      return;
    }
  }
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


