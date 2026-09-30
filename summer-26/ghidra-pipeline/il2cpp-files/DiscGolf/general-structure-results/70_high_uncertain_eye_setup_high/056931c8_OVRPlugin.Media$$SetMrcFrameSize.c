/*
FUNCTION_NAME: OVRPlugin.Media$$SetMrcFrameSize
ENTRY_POINT: 056931c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetMrcFrameSize(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  uint unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  while (FUN_03f35094(param_1,param_2,param_3), unaff_x19 != 0) {
    FUN_06320430();
    lVar1 = *(long *)(unaff_x20 + 0x128);
    unaff_w21 = unaff_w21 + 1;
    if (lVar1 == 0) break;
    if (*(int *)(lVar1 + 0x18) <= (int)unaff_w21) {
      return;
    }
    FUN_03fd1a8c(&stack0x00000008,lVar1,unaff_w21,*unaff_x22);
    param_1 = *(long *)(unaff_x20 + 0x130);
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    if (param_1 == 0) break;
    param_3 = *unaff_x23;
    param_2 = (ulong)unaff_w21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


