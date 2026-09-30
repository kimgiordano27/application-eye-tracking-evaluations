/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 05d68c64
PROGRAM: hellodot-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  long *unaff_x23;
  
  uVar1 = FUN_057c4df0();
  lVar2 = *unaff_x23;
  **(undefined8 **)(lVar2 + 0xb8) = uVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c(lVar2);
    lVar2 = *unaff_x23;
  }
  *unaff_x19 = **(undefined8 **)(lVar2 + 0xb8);
  return;
}


