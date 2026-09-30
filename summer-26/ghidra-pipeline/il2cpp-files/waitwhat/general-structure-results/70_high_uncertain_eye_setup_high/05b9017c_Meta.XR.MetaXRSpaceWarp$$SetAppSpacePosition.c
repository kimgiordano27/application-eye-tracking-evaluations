/*
FUNCTION_NAME: Meta.XR.MetaXRSpaceWarp$$SetAppSpacePosition
ENTRY_POINT: 05b9017c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


float Meta_XR_MetaXRSpaceWarp__SetAppSpacePosition
                (float param_1,float param_2,float param_3,long param_4)

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
  
  if (*(int *)(param_4 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  fVar3 = SQRT((param_2 + param_1) * (unaff_s13 * unaff_s13 + param_3));
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


