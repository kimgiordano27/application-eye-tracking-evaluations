/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_SaveUnifiedConsent
ENTRY_POINT: 07408c7c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_SaveUnifiedConsent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  uint *puVar6;
  undefined8 *unaff_x22;
  long *unaff_x23;
  long unaff_x24;
  int *piVar7;
  
  piVar7 = (int *)(unaff_x24 + 0x1c);
  *piVar7 = *piVar7 + 1;
  lVar5 = *(long *)(unaff_x24 + 0x10);
                    /* try { // try from 07408c90 to 07508cbb has its CatchHandler @ 07408dfc */
  puVar6 = (uint *)(unaff_x24 + 0x18);
  uVar1 = *puVar6;
  if (lVar5 != 0) {
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 6;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 07408cf0 to 07508d1b has its CatchHandler @ 07408e00 */
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07409440;
    }
    puVar2 = PTR_DAT_08eb6430;
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
    }
    else {
      FUN_051c31f4();
    }
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_03d233cc();
    uVar3 = FUN_03c8f97c(*unaff_x22,5);
    FUN_0701f51c(uVar3,*(undefined8 *)puVar2,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
    *puVar4 = uVar3;
    thunk_FUN_03d233cc(puVar4,uVar3);
    return;
  }
LAB_07409440:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


