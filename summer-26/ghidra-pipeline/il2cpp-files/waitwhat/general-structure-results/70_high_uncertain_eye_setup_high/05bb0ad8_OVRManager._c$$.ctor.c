/*
FUNCTION_NAME: OVRManager.<>c$$.ctor
ENTRY_POINT: 05bb0ad8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_<>c___ctor(void)

{
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x23;
  float fVar3;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  FUN_03188a78();
  *(undefined1 *)(unaff_x23 + 0x7d6) = 1;
  pfVar1 = *(float **)(*unaff_x21 + 0xb8);
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar3 = *(float *)(unaff_x19 + 0x28);
    FUN_05bac85c(*pfVar1 * fVar3,pfVar1[1] * fVar3,pfVar1[2] * fVar3);
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 != 0) {
      in_stack_00000050 = in_stack_00000020;
      in_stack_00000038 = in_stack_00000008;
      in_stack_00000030 = in_stack_00000000;
      in_stack_00000048 = in_stack_00000018;
      in_stack_00000040 = in_stack_00000010;
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000030,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


