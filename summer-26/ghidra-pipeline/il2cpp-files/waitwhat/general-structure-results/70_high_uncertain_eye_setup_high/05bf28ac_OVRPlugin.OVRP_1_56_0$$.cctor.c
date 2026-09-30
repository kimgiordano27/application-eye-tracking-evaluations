/*
FUNCTION_NAME: OVRPlugin.OVRP_1_56_0$$.cctor
ENTRY_POINT: 05bf28ac
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_56_0___cctor(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(undefined8 *)(param_1 + 0x18) = unaff_x19;
  lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
  FUN_0428426c(lVar3,*unaff_x20);
  puVar2 = PTR_DAT_07116d88;
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    lVar6 = *(long *)PTR_DAT_07116d88;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 6;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,6,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 7;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,7,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 8;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,8,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 9;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,9,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 10;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,10,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xb;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0xb,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0xc,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0xd,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0xe,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0xf,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0x10,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0x11,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,0x12,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      }
      else {
        FUN_04284aa0(lVar3,4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar6 = *(long *)puVar2;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_05bf2fbc;
      }
      puVar2 = PTR_DAT_07116da8;
      uVar1 = *(uint *)(lVar3 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
      }
      else {
        FUN_04284aa0(lVar3,5,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = *unaff_x21;
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = lVar3;
      uVar4 = FUN_03188b1c(uVar4,5);
      FUN_0585c08c(uVar4,*(undefined8 *)puVar2,0);
      *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar4;
      return;
    }
  }
LAB_05bf2fbc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


