/*
FUNCTION_NAME: OVRPlugin$$GetNativeOpenXRInstance
ENTRY_POINT: 0601d49c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


float OVRPlugin__GetNativeOpenXRInstance
                (float param_1,float param_2,float param_3,undefined1 param_4 [16],float param_5)

{
  float *pfVar1;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  float fVar3;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar4;
  float unaff_s15;
  undefined8 in_stack_00000020;
  float in_stack_00000030;
  
  param_2 = param_2 / unaff_s8;
  param_3 = param_3 / unaff_s8;
  fVar2 = (unaff_s12 * param_1) / unaff_s8;
  if (0.0 <= unaff_s12 * fVar2 + param_5 * param_2 + unaff_s13 * param_3) {
    if (unaff_s8 < param_2 * param_2 + param_3 * param_3 + fVar2 * fVar2) {
      param_2 = in_stack_00000030;
      param_3 = unaff_s13;
      fVar2 = unaff_s12;
    }
  }
  else {
    if (*(char *)(unaff_x21 + 0xa82) == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      *(undefined1 *)(unaff_x21 + 0xa82) = 1;
    }
    pfVar1 = *(float **)(*unaff_x20 + 0xb8);
    param_2 = *pfVar1;
    param_3 = pfVar1[1];
    fVar2 = pfVar1[2];
  }
  if (DAT_07a3fba1 == '\0') {
    FUN_031f20f4(PTR_DAT_0759b370);
    DAT_07a3fba1 = '\x01';
  }
  fVar4 = unaff_s9 - (in_stack_00000020._4_4_ + param_2);
  fVar3 = unaff_s10 - (unaff_s15 + param_3);
  fVar2 = unaff_s11 - (unaff_s14 + fVar2);
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  return SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
}


