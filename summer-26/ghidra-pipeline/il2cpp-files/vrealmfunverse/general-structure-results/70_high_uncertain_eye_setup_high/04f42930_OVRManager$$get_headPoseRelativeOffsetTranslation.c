/*
FUNCTION_NAME: OVRManager$$get_headPoseRelativeOffsetTranslation
ENTRY_POINT: 04f42930
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


void OVRManager__get_headPoseRelativeOffsetTranslation(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined8 uStack0000000000000064;
  
  while (!(bool)in_ZR && in_NG == in_OV) {
    FUN_03c7bcb4(&stack0x00000028,param_1,*unaff_x20);
    FUN_04f43b0c();
    param_1 = *(long *)(unaff_x19 + 0xd8);
    if (param_1 == 0) goto LAB_04f42968;
    in_NG = *(int *)(param_1 + 0x20) < 0;
    in_OV = '\0';
    in_ZR = *(int *)(param_1 + 0x20) == 0;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = FUN_04f3eaf4(&stack0x00000028,*(long *)(unaff_x19 + 0x20),0);
    uStack0000000000000064 = CONCAT44(in_stack_00000040,uStack000000000000003c);
    in_stack_00000058 = in_stack_00000030;
    in_stack_00000050 = in_stack_00000028;
    in_stack_00000060 = uStack0000000000000038;
    FUN_04f42750(uVar1,unaff_x19 + 0x98,&stack0x00000070,&stack0x00000050);
    return;
  }
LAB_04f42968:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


