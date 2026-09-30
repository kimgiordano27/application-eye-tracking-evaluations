/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_foveatedRenderingLevel
ENTRY_POINT: 05b8fef0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_foveation_hits_4;functionality_foveated_rendering
*/


float Meta_XR_MetaXRFoveationFeature__set_foveatedRenderingLevel
                (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *unaff_x19;
  float fVar1;
  double dVar2;
  float fVar3;
  float unaff_s8;
  float fVar4;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  if (*(int *)(param_5 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = SQRT((param_2 + param_1) * (unaff_s13 * unaff_s13 + param_3 + param_4));
  fVar1 = 0.0;
  if (DAT_012e33d4 <= fVar3) {
    fVar3 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar3;
    fVar1 = 1.0;
    if (fVar3 <= 1.0) {
      fVar1 = fVar3;
    }
    fVar4 = -1.0;
    if (-1.0 <= fVar3) {
      fVar4 = fVar1;
    }
    if (*(int *)(*unaff_x19 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar2 = acos((double)fVar4);
    fVar1 = (float)dVar2 * DAT_012e3848;
  }
  return fVar1;
}


