/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeDepth
ENTRY_POINT: 051e3b18
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


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeDepth(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long in_x9;
  long in_x10;
  undefined4 in_w12;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *unaff_x24;
  
  *(undefined4 *)(in_x10 + 0x20) = in_w12;
                    /* catch() { ... } // from try @ 051e3a4c with catch @ 051e3b1c
                       catch() { ... } // from try @ 051e3b0c with catch @ 051e3b1c */
                    /* try { // try from 051e3b20 to 052e3b23 has its CatchHandler @ 051e3b2c */
                    /* try { // try from 051e3b24 to 052e3b2f has its CatchHandler @ 051e38d0 */
  *unaff_x24 = *unaff_x24 + 1;
  uVar1 = *unaff_x20;
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    *unaff_x20 = uVar1 + 1;
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 7;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 8;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 9;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x13;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x15;
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
    *(undefined4 *)(in_x9 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
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


