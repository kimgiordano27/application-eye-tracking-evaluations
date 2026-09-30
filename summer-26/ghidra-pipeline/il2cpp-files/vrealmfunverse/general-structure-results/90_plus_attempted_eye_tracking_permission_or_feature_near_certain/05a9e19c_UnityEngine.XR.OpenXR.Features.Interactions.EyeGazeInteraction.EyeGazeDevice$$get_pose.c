/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 05a9e19c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 117
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose
               (long param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined4 uVar2;
  
  uVar1 = FUN_031ee1f8(param_6,**(undefined8 **)(param_1 + 0xd8));
  *(uint *)(unaff_x19 + 0x18) = uVar1;
  if ((unaff_x21 != 0) && ((uVar1 & 1) != 0)) {
    uVar2 = FUN_031ee568();
    *(undefined4 *)(unaff_x19 + 0x20) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x24) = param_3;
    *(undefined4 *)(unaff_x19 + 0x28) = param_4;
  }
  if ((unaff_x20 != 0) && ((*(byte *)(unaff_x19 + 0x18) >> 1 & 1) != 0)) {
    uVar2 = FUN_031ee2d4();
    *(undefined4 *)(unaff_x19 + 0x2c) = uVar2;
    *(undefined4 *)(unaff_x19 + 0x30) = param_3;
    *(undefined4 *)(unaff_x19 + 0x34) = param_4;
    *(undefined4 *)(unaff_x19 + 0x38) = param_5;
  }
  return;
}


