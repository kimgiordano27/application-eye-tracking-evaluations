/*
FUNCTION_NAME: OVRPlugin.OVRP_1_87_0$$ovrp_GetPassthroughPreferences
ENTRY_POINT: 090d5cd4
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_87_0__ovrp_GetPassthroughPreferences(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long in_x10;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
  if ((uint)in_x10 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = (uint)in_x10 + 1;
    *(undefined4 *)(param_1 + in_x10 * 4 + 0x20) = 0xc;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 2;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) goto LAB_090d615c;
  }
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 4;
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  }
  else {
    FUN_06b13e24();
    param_1 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (param_1 == 0) {
LAB_090d615c:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
  }
  puVar2 = PTR_DAT_0ac79908;
  uVar1 = *(uint *)(unaff_x19 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 5;
  }
  else {
    FUN_06b13e24();
  }
  *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
  thunk_FUN_049ee3d8();
  uVar3 = FUN_04947fd0(*unaff_x22,5);
  FUN_08c82ec4(uVar3,*(undefined8 *)puVar2,0);
  puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
  *puVar4 = uVar3;
  thunk_FUN_049ee3d8(puVar4,uVar3);
  return;
}


