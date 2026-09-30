/*
FUNCTION_NAME: OVRPlugin.OVRP_1_63_0$$ovrp_ShutdownInsightPassthrough
ENTRY_POINT: 05bf2dec
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_63_0__ovrp_ShutdownInsightPassthrough(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int in_w10;
  long unaff_x19;
  undefined8 *unaff_x21;
  long *unaff_x22;
  
  *(int *)(unaff_x19 + 0x1c) = in_w10 + 1;
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_04284aa0();
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_05bf2fbc;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_04284aa0();
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_05bf2fbc;
    }
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    }
    else {
      FUN_04284aa0();
      param_1 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_05bf2fbc;
    }
    puVar2 = PTR_DAT_07116da8;
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 5;
    }
    else {
      FUN_04284aa0();
    }
    uVar3 = *unaff_x21;
    *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x20) = unaff_x19;
    uVar3 = FUN_03188b1c(uVar3,5);
    FUN_0585c08c(uVar3,*(undefined8 *)puVar2,0);
    *(undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x28) = uVar3;
    return;
  }
LAB_05bf2fbc:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


