/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 05b9001c
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


float Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering(float param_1,float param_2)

{
  long unaff_x19;
  long *plVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float unaff_s8;
  float fVar5;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  
  plVar1 = *(long **)(unaff_x19 + 0x2f8);
  if (*(int *)(*plVar1 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = SQRT((unaff_s8 * unaff_s8 + param_1 + param_2) *
               (unaff_s13 * unaff_s13 + unaff_s11 * unaff_s11 + unaff_s12 * unaff_s12));
  fVar2 = 0.0;
  if (DAT_012e33d4 <= fVar4) {
    fVar4 = (unaff_s8 * unaff_s13 + unaff_s9 * unaff_s11 + unaff_s10 * unaff_s12) / fVar4;
    fVar2 = 1.0;
    if (fVar4 <= 1.0) {
      fVar2 = fVar4;
    }
    fVar5 = -1.0;
    if (-1.0 <= fVar4) {
      fVar5 = fVar2;
    }
    if (*(int *)(*plVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar3 = acos((double)fVar5);
    fVar2 = (float)dVar3 * DAT_012e3848;
  }
  return fVar2;
}


