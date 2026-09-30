/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 05ec690c
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 99
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose(void)

{
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000000;
  
  FUN_05ec56f8();
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar1 = FUN_05ed802c(*unaff_x20,0);
  *unaff_x19 = uVar1;
  unaff_x19[1] = uVar2;
  unaff_x19[2] = uVar3;
  unaff_x19[3] = in_stack_00000000;
  return;
}


