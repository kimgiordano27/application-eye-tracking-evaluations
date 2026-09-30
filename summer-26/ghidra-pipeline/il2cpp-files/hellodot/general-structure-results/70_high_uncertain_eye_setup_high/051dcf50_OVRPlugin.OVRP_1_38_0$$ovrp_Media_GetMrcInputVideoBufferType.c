/*
FUNCTION_NAME: OVRPlugin.OVRP_1_38_0$$ovrp_Media_GetMrcInputVideoBufferType
ENTRY_POINT: 051dcf50
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_38_0__ovrp_Media_GetMrcInputVideoBufferType(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  uint *puVar5;
  undefined8 *unaff_x21;
  long *unaff_x22;
  int *unaff_x24;
  
  lVar4 = *(long *)(unaff_x24 + -3);
  puVar5 = (uint *)(unaff_x20 + -4);
  uVar1 = *puVar5;
  if (lVar4 != 0) {
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 6;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 7;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 8;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 9;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 10;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_03920910();
      lVar4 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar4 == 0) goto LAB_051dd630;
    }
    puVar2 = PTR_DAT_06609168;
    uVar1 = *puVar5;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *puVar5 = uVar1 + 1;
      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 5;
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
LAB_051dd630:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


