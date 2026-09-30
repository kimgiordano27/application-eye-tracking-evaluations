/*
FUNCTION_NAME: OVRPlugin$$GetSpaceDynamicObjectData
ENTRY_POINT: 05bd4ebc
PROGRAM: waitwhat-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16] OVRPlugin__GetSpaceDynamicObjectData(void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  float extraout_s0;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000010;
  
  uVar1 = FUN_069d69b8();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_069d3a80();
    if (lVar2 == 0) goto LAB_05bd4f24;
    FUN_069e7708(lVar2,0);
    in_stack_00000010._4_4_ = extraout_s0;
    uVar4 = extraout_var;
    uVar5 = extraout_var_00;
  }
  else {
    if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_05bd4f24:
                    /* WARNING: Subroutine does not return */
      FUN_03188cd8();
    }
    FUN_0699febc(&stack0x00000008,*(long *)(unaff_x19 + 0x20),0);
    in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + in_stack_00000010._4_4_;
    uVar4 = 0;
    uVar5 = 0;
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = in_stack_00000010._4_4_;
  auVar3._8_8_ = uVar5;
  return auVar3;
}


