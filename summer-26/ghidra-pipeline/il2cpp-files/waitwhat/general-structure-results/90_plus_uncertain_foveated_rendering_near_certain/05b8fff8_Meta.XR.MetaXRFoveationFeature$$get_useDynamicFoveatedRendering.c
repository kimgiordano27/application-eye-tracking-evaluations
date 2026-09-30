/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 05b8fff8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 97
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;strong_foveation_hits_4;functionality_foveated_rendering
*/


float Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(void)

{
  undefined *puVar1;
  int in_w8;
  long unaff_x19;
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
  
  if (in_w8 == 0) {
    FUN_03188a78(PTR_DAT_070c22f8);
    *(undefined1 *)(unaff_x19 + 0x685) = 1;
  }
  puVar1 = PTR_DAT_070c22f8;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar4 = SQRT((unaff_s8 * unaff_s8 + unaff_s9 * unaff_s9 + unaff_s10 * unaff_s10) *
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
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar3 = acos((double)fVar5);
    fVar2 = (float)dVar3 * DAT_012e3848;
  }
  return fVar2;
}


