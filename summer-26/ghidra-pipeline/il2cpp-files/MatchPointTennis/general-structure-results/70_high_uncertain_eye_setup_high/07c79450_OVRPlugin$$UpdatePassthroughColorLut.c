/*
FUNCTION_NAME: OVRPlugin$$UpdatePassthroughColorLut
ENTRY_POINT: 07c79450
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__UpdatePassthroughColorLut
                (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                float param_5)

{
  float *unaff_x19;
  long *unaff_x20;
  float fVar1;
  float unaff_s8;
  float fVar2;
  float unaff_s9;
  float unaff_s10;
  float unaff_s14;
  float unaff_s15;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  
  param_2 = param_2 / param_1;
  if (unaff_s8 * param_2 + unaff_s9 * unaff_s10 + unaff_s14 * unaff_s15 <= 0.0) {
    fVar1 = 0.0;
    in_stack_00000018._4_4_ = fStack0000000000000024;
  }
  else {
    fVar2 = unaff_s10 * unaff_s10 + unaff_s15 * unaff_s15 + param_2 * param_2;
    fVar1 = 1.0;
    if (fVar2 < param_5) {
      if (DAT_0a51c009 == '\0') {
        FUN_04447ba8(0x3f800000,in_stack_00000018._4_4_,uStack0000000000000020,PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe4) == 0) && (thunk_FUN_044a54b4(), DAT_0a51c009 == '\0')) {
        FUN_04447ba8(PTR_DAT_09f1e748);
        DAT_0a51c009 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      in_stack_00000018._4_4_ = fStack0000000000000024 + unaff_s10;
      fVar1 = SQRT(fVar2) / in_stack_00000010;
    }
  }
  *unaff_x19 = fVar1;
  return in_stack_00000018._4_4_;
}


