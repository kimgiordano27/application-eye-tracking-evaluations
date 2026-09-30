/*
FUNCTION_NAME: OVRPlugin$$SetMultimodalHandsControllersSupported
ENTRY_POINT: 051b7fb8
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__SetMultimodalHandsControllersSupported
                (float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                float param_5)

{
  float *unaff_x19;
  long *unaff_x20;
  float fVar1;
  float fVar2;
  float unaff_s10;
  float unaff_s11;
  float unaff_s15;
  float in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uStack0000000000000020;
  float fStack0000000000000024;
  
  if (param_2 + param_1 <= 0.0) {
    fVar1 = 0.0;
    in_stack_00000018._4_4_ = fStack0000000000000024;
  }
  else {
    fVar2 = unaff_s10 * unaff_s10 + unaff_s15 * unaff_s15 + unaff_s11 * unaff_s11;
    fVar1 = 1.0;
    if (fVar2 < param_5) {
      if (DAT_06a67230 == '\0') {
        AkMIDIEventCallbackInfo__get_byProgramNum
                  (0x3f800000,in_stack_00000018._4_4_,uStack0000000000000020,PTR_DAT_065c8d28);
        DAT_06a67230 = '\x01';
      }
      if ((*(int *)(*unaff_x20 + 0xe0) == 0) && (thunk_FUN_02cd038c(), DAT_06a67230 == '\0')) {
        AkMIDIEventCallbackInfo__get_byProgramNum(PTR_DAT_065c8d28);
        DAT_06a67230 = '\x01';
      }
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_02cd038c();
      }
      in_stack_00000018._4_4_ = fStack0000000000000024 + unaff_s10;
      fVar1 = SQRT(fVar2) / in_stack_00000010;
    }
  }
  *unaff_x19 = fVar1;
  return in_stack_00000018._4_4_;
}


