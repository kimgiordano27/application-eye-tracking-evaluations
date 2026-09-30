/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 090c1644
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_RectiPair__get_Item(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x22;
  long *unaff_x23;
  
                    /* try { // try from 090c1648 to 091c166f has its CatchHandler @ 090c1758 */
  *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
                    /* try { // try from 090c1694 to 091c169b has its CatchHandler @ 090c1750 */
      FUN_06b13e24();
      param_1 = *(long *)(unaff_x19 + 0x10);
                    /* try { // try from 090c16a8 to 091c16af has its CatchHandler @ 090c1724 */
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_090c18ec;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
                    /* try { // try from 090c16d4 to 091c1703 has its CatchHandler @ 090c1734 */
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x17;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_06b13e24();
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_090c18ec;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x18;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_06b13e24();
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_090c18ec;
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
      if (param_1 == 0) goto LAB_090c18ec;
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
      if (param_1 == 0) goto LAB_090c18ec;
    }
    puVar2 = PTR_DAT_0ac794a0;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 4;
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
LAB_090c18ec:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


