/*
FUNCTION_NAME: OVRPlugin.LayerDesc$$ToString
ENTRY_POINT: 07402270
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


void OVRPlugin_LayerDesc__ToString(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  FUN_051c31f4(param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70));
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xc;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xd;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xe;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0xf;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x10;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x11;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 0x12;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_051c31f4();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_07402720;
    }
    puVar2 = PTR_DAT_08eb6228;
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
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
LAB_07402720:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


