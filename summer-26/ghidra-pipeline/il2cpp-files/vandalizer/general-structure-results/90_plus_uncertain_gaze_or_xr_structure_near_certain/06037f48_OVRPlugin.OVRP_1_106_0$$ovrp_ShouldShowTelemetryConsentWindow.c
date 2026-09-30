/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_ShouldShowTelemetryConsentWindow
ENTRY_POINT: 06037f48
PROGRAM: vandalizer-libil2cpp.so
SCORE: 107
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_ShouldShowTelemetryConsentWindow(void)

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
  puVar6 = (uint *)(unaff_x24 + 0x18);
  uVar1 = *puVar6;
  if (lVar5 != 0) {
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 6;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 10;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *piVar7 = *piVar7 + 1;
    }
    else {
      FUN_04752754();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_06038648;
    }
    puVar2 = PTR_DAT_075f7b40;
    uVar1 = *puVar6;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *puVar6 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
    }
    else {
      FUN_04752754();
    }
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_0329bf60();
    uVar3 = FUN_031f21dc(*unaff_x22,5);
    FUN_05d2c79c(uVar3,*(undefined8 *)puVar2,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
    *puVar4 = uVar3;
    thunk_FUN_0329bf60(puVar4,uVar3);
    return;
  }
LAB_06038648:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


