/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_IsConsentSettingsChangeEnabled
ENTRY_POINT: 06038088
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_IsConsentSettingsChangeEnabled(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x9;
  undefined4 in_w10;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  *(undefined4 *)(unaff_x19 + 0x1c) = in_w10;
  if (in_x9 != 0) {
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 9;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 10;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04752754();
      in_x9 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (in_x9 == 0) goto LAB_06038648;
    }
    puVar2 = PTR_DAT_075f7b40;
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(in_x9 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 5;
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


