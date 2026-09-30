/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_GetBodyState
ENTRY_POINT: 04f9482c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_78_0__ovrp_GetBodyState(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined4 in_stack_00000078;
  
  uStack000000000000004c = (undefined4)param_2;
  uStack0000000000000050 = (undefined4)((ulong)param_2 >> 0x20);
  uStack0000000000000040 = param_1;
  uVar1 = FUN_04efb610();
  lVar2 = *(long *)(unaff_x20 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar2 = lVar2 + (long)(int)unaff_w19 * 0x1c;
    *(undefined4 *)(lVar2 + 0x38) = in_stack_00000078;
    *(undefined8 *)(lVar2 + 0x30) = in_stack_00000070;
    *(undefined8 *)(lVar2 + 0x28) = in_stack_00000068;
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000060;
    FUN_04f948ec(uVar1,unaff_w19,*(undefined8 *)(unaff_x20 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cacc();
}


