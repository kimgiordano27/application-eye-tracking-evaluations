/*
FUNCTION_NAME: OVRPlugin.OVRP_1_15_0$$ovrp_EnqueueSetupLayer
ENTRY_POINT: 04f8d924
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_15_0__ovrp_EnqueueSetupLayer(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  
  if ((param_1 & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_063185a8);
    *(undefined1 *)(unaff_x23 + 0xd8f) = 1;
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000038 = 0;
  in_stack_00000030 = 0;
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  FUN_05c9a2f0(&stack0x00000000 + 4,0);
  unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
  *unaff_x19 = in_stack_00000000._4_8_;
  *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
  *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  uVar1 = FUN_04f8d9ec();
  if ((((uVar1 & 1) == 0) || (*(long *)(unaff_x21 + 0x70) == 0)) ||
     (uVar1 = FUN_04f8da4c(), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality();
    if (*(long *)(unaff_x21 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4();
    }
    FUN_04f94748(&stack0x00000000 + 4,*(long *)(unaff_x21 + 0x70),unaff_w20,0);
    uVar2 = 1;
    unaff_x19[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *unaff_x19 = in_stack_00000000._4_8_;
    *(undefined8 *)((long)unaff_x19 + 0x14) = in_stack_00000018;
    *(ulong *)((long)unaff_x19 + 0xc) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
  }
  return uVar2;
}


