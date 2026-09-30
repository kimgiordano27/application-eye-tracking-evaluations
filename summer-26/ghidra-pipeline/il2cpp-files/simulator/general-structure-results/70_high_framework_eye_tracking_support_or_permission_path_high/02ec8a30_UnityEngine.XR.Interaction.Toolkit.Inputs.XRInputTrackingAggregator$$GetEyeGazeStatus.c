/*
FUNCTION_NAME: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputTrackingAggregator$$GetEyeGazeStatus
ENTRY_POINT: 02ec8a30
PROGRAM: simulator-libil2cpp.so
SCORE: 78
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x02ec8a74) */

void UnityEngine_XR_Interaction_Toolkit_Inputs_XRInputTrackingAggregator__GetEyeGazeStatus
               (long *param_1)

{
  long unaff_x19;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_s8;
  float unaff_s9;
  float fVar7;
  
  fVar7 = **(float **)(*param_1 + 0xb8);
  fVar1 = (*(float **)(*param_1 + 0xb8))[1];
  fVar3 = *(float *)(unaff_x19 + 0x1bc);
  fVar4 = *(float *)(unaff_x19 + 0x1c0) / fVar3;
  fVar6 = fVar7 - fVar4;
  fVar2 = fVar1 - fVar4;
  fVar5 = fVar6;
  if (1.0 < fVar6) {
    fVar5 = 1.0;
  }
  if (fVar6 < 0.0) {
    fVar5 = 0.0;
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  FUN_02ec8370(unaff_s8 * fVar7 * fVar3,unaff_s9 * fVar1 * fVar3);
  FUN_02ec82f0(unaff_s8 * (fVar5 / (1.0 - fVar4)),unaff_s9 * (fVar2 / (1.0 - fVar4)));
  return;
}


