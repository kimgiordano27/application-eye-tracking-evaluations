/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_foveatedRenderingLevel
ENTRY_POINT: 05b8fe58
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


float Meta_XR_MetaXRFoveationFeature__get_foveatedRenderingLevel
                (undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                undefined8 param_5)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = (float)FUN_05b909c0(1,param_4);
  fVar6 = param_2;
  fVar8 = param_3;
  fVar3 = (float)FUN_05b90c3c(1,param_4,param_5);
  if (DAT_0754d685 == '\0') {
    FUN_03188a78(PTR_DAT_070c22f8);
    DAT_0754d685 = '\x01';
  }
  puVar1 = PTR_DAT_070c22f8;
  if (*(int *)(*(long *)PTR_DAT_070c22f8 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar7 = SQRT((param_3 * param_3 + fVar2 * fVar2 + param_2 * param_2) *
               (fVar8 * fVar8 + fVar3 * fVar3 + fVar6 * fVar6));
  fVar4 = 0.0;
  if (DAT_012e33d4 <= fVar7) {
    fVar7 = (param_3 * fVar8 + fVar2 * fVar3 + param_2 * fVar6) / fVar7;
    fVar6 = 1.0;
    if (fVar7 <= 1.0) {
      fVar6 = fVar7;
    }
    fVar8 = -1.0;
    if (-1.0 <= fVar7) {
      fVar8 = fVar6;
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    dVar5 = acos((double)fVar8);
    fVar4 = (float)dVar5 * DAT_012e3848;
  }
  return fVar4;
}


