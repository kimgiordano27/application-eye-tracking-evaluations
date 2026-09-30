/*
FUNCTION_NAME: OVRPlugin$$IsControllerDrivenHandPosesEnabled
ENTRY_POINT: 027ee234
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__IsControllerDrivenHandPosesEnabled(long param_1)

{
  byte bVar1;
  long in_x10;
  long unaff_x19;
  long in_stack_00000008;
  
  if ((*(byte *)(param_1 + 0x130) < *(byte *)(in_x10 + 0x130)) ||
     (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(in_x10 + 0x130) * 8 + -8) != in_x10)) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_03cfd4a8 + 0x130);
    if ((*(byte *)(param_1 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(param_1 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_03cfd4a8))
    goto LAB_027ee308;
    FUN_0204039c();
    FUN_02040434();
    FUN_020404d4();
    if (in_stack_00000008 == 0) goto LAB_027ee308;
    FUN_027ee30c(in_stack_00000008,in_stack_00000008);
    unaff_x19 = in_stack_00000008;
  }
  if (unaff_x19 != 0) {
    FUN_027edfa8(unaff_x19,0);
    return;
  }
LAB_027ee308:
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


