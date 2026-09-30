/*
FUNCTION_NAME: VRReady.Scripts.OVR.OVRManagerHelper$$arrangeEyePositionForCentering
ENTRY_POINT: 01cb8334
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Type propagation algorithm not settling */

undefined4 VRReady_Scripts_OVR_OVRManagerHelper__arrangeEyePositionForCentering(uint *param_1)

{
  ulong uVar1;
  byte bVar2;
  byte *in_x9;
  byte *pbVar3;
  ulong in_x10;
  uint *puVar4;
  uint *unaff_x20;
  undefined4 uVar5;
  long unaff_x29;
  uint *in_stack_00000038;
  long in_stack_00000040;
  code *in_stack_00000058;
  byte in_stack_00000088;
  void *in_stack_00000098;
  byte in_stack_000000a0;
  void *in_stack_000000b0;
  byte in_stack_000000b8;
  void *in_stack_000000c8;
  byte in_stack_000000d0;
  void *in_stack_000000e0;
  byte in_stack_000000e8;
  ulong in_stack_000000f0;
  void *in_stack_000000f8;
  
  pbVar3 = in_x9;
  puVar4 = unaff_x20;
  uVar1 = in_x10 >> 1;
  if ((in_x10 & 1) != 0) {
    uVar1 = in_stack_000000f0;
  }
  do {
    bVar2 = *pbVar3;
    if (((bVar2 != 0) && (bVar2 != 0xff)) && (*puVar4 != (uint)bVar2)) goto LAB_01cb81e0;
    puVar4 = puVar4 + 1;
    if (1 < (long)(in_x9 + (uVar1 - (long)pbVar3))) {
      pbVar3 = pbVar3 + 1;
    }
  } while (puVar4 < param_1);
  bVar2 = *pbVar3;
  uVar5 = 1;
  if ((bVar2 != 0) && (bVar2 != 0xff)) {
    if (*param_1 - 1 < (uint)bVar2) {
      uVar5 = 1;
    }
    else {
LAB_01cb81e0:
      uVar5 = 0;
      *in_stack_00000038 = *in_stack_00000038 | 4;
    }
  }
  if ((in_stack_00000088 & 1) != 0) {
    operator_delete(in_stack_00000098);
  }
  if ((in_stack_000000a0 & 1) != 0) {
    operator_delete(in_stack_000000b0);
  }
  if ((in_stack_000000b8 & 1) != 0) {
    operator_delete(in_stack_000000c8);
  }
  if ((in_stack_000000d0 & 1) != 0) {
    operator_delete(in_stack_000000e0);
  }
  if ((in_stack_000000e8 & 1) != 0) {
    operator_delete(in_stack_000000f8);
  }
  if (unaff_x20 != (uint *)0x0) {
    (*in_stack_00000058)();
  }
  if (*(long *)(in_stack_00000040 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


