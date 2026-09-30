/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 06c739b8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 112
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose
               (long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  
  plVar1 = (long *)(param_1 + 0x80);
  if (*plVar1 == unaff_x21) {
    *plVar1 = 0;
    thunk_FUN_0329bf60(plVar1,0);
  }
  lVar2 = *(long *)(unaff_x20 + 0x58);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x06c739fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
    return;
  }
  return;
}


