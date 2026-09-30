/*
FUNCTION_NAME: OVRManager.PassthroughCapabilities$$get_SupportsColorPassthrough
ENTRY_POINT: 05bb0a6c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_PassthroughCapabilities__get_SupportsColorPassthrough
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3)

{
  int in_w8;
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s14;
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
  
  if (in_w8 == 0) {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x22 + 0xbbf) = 1;
  }
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar5 = SQRT(param_3 * param_3 + unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9);
  if (fVar5 <= unaff_s14) {
    if (*(char *)(unaff_x23 + 0x7d6) == '\0') {
      FUN_03188a78(PTR_DAT_070c1a80);
      *(undefined1 *)(unaff_x23 + 0x7d6) = 1;
    }
    pfVar1 = *(float **)(*unaff_x21 + 0xb8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar3 = unaff_s8 / fVar5;
    fVar4 = unaff_s9 / fVar5;
    param_3 = param_3 / fVar5;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    fVar5 = *(float *)(unaff_x19 + 0x28);
    FUN_05bac85c(fVar3 * fVar5,fVar4 * fVar5,param_3 * fVar5);
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


