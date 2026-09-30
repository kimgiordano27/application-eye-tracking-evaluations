/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 072a48cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_EnvironmentDepthRaycaster___ctor(long param_1)

{
  uint uVar1;
  long in_x9;
  int in_w10;
  int in_w11;
  int in_w12;
  float fVar2;
  float unaff_s8;
  float unaff_s9;
  
  fVar2 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x20)) *
          (float)(in_w10 + in_w12 * in_w11);
  uVar1 = 0x80000000;
  if (fVar2 != INFINITY) {
    uVar1 = (int)fVar2;
  }
  if (uVar1 < *(uint *)(in_x9 + 0x18)) {
    return unaff_s9 * unaff_s8 * *(float *)(in_x9 + (long)(int)uVar1 * 4 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


