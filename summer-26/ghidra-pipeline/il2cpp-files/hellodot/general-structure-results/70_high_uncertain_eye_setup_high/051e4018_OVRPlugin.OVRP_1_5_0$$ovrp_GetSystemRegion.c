/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 051e4018
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(void)

{
  uint uVar1;
  undefined *puVar2;
  bool in_CY;
  undefined8 uVar3;
  long in_x9;
  long in_x10;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *unaff_x24;
  
  if (in_CY) {
    FUN_03920910();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_051e4298;
  }
  else {
    *unaff_x20 = (int)in_x10 + 1;
    *(undefined4 *)(in_x9 + in_x10 * 4 + 0x20) = 0x16;
    *unaff_x24 = *unaff_x24 + 1;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_03920910();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_051e4298;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_03920910();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_051e4298;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 2;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_03920910();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) goto LAB_051e4298;
  }
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 3;
    *unaff_x24 = *unaff_x24 + 1;
  }
  else {
    FUN_03920910();
    in_x9 = *(long *)(unaff_x19 + 0x10);
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    if (in_x9 == 0) {
LAB_051e4298:
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c();
    }
  }
  puVar2 = PTR_DAT_06609388;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 4;
  }
  else {
    FUN_03920910();
  }
  *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
  uVar3 = FUN_02ce7ad4(*unaff_x21,5);
  FUN_04e5d48c(uVar3,*(undefined8 *)puVar2,0);
  *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
  return;
}


