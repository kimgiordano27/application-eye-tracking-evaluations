/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 051a8cec
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateInsightPassthrough(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x9;
  undefined4 in_w10;
  undefined8 in_x11;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  
  uStack0000000000000008 = *(undefined8 *)(param_1 + 0x108);
  uStack0000000000000000 = *(undefined8 *)(param_1 + 0x100);
  *(undefined4 *)(unaff_x19 + 0xe0) = in_w10;
  *(undefined8 *)(unaff_x19 + 200) = in_x11;
  *(undefined8 *)(unaff_x19 + 0xf4) = in_stack_00000030;
  *(undefined8 *)(unaff_x19 + 0xec) = in_stack_00000028;
  *(undefined8 *)(unaff_x19 + 0xe4) = in_stack_00000020;
  puVar1 = PTR_DAT_066086f8;
  *(undefined8 *)(unaff_x19 + 0x10c) = in_x9;
  *(undefined8 *)(unaff_x19 + 0x104) = uStack0000000000000008;
  *(undefined8 *)(unaff_x19 + 0xfc) = uStack0000000000000000;
  uVar3 = *(undefined8 *)(param_1 + 0x130);
  uVar2 = thunk_FUN_02cea894(*(undefined8 *)puVar1);
  FUN_03967d1c(uVar2,uVar3,*(undefined8 *)PTR_DAT_066086f0);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar2;
  if (in_stack_00000038 != 0) {
    FUN_03d99ffc();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


