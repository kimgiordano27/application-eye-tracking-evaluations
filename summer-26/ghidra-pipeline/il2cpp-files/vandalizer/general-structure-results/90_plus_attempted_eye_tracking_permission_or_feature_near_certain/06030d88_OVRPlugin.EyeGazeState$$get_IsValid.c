/*
FUNCTION_NAME: OVRPlugin.EyeGazeState$$get_IsValid
ENTRY_POINT: 06030d88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


float OVRPlugin_EyeGazeState__get_IsValid
                (undefined1 param_1 [16],float param_2,float param_3,float param_4)

{
  long unaff_x19;
  long unaff_x20;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (float)FUN_06e461b0();
  fVar4 = *(float *)(unaff_x20 + 0x2c);
  fVar5 = *(float *)(unaff_x20 + 0x30);
  fVar3 = *(float *)(unaff_x20 + 0x28);
  fVar2 = (float)FUN_06e45c00(*(undefined4 *)(unaff_x20 + 0x24),fVar3,fVar4,fVar5,0);
  return (*(float *)(unaff_x19 + 0x2c) *
          ((param_3 * fVar2 + param_4 * fVar3 + param_2 * fVar5) - fVar1 * fVar4) +
         *(float *)(unaff_x19 + 0x24) *
         (((param_4 * fVar5 - fVar1 * fVar2) - param_2 * fVar3) - param_3 * fVar4) +
         *(float *)(unaff_x19 + 0x30) *
         ((param_2 * fVar4 + param_4 * fVar2 + fVar1 * fVar5) - param_3 * fVar3)) -
         *(float *)(unaff_x19 + 0x28) *
         ((fVar1 * fVar3 + param_4 * fVar4 + param_3 * fVar5) - param_2 * fVar2);
}


