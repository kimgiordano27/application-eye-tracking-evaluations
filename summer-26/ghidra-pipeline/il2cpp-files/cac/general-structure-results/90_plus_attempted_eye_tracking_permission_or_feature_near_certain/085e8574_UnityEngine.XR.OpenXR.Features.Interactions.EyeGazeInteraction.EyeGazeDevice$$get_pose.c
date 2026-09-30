/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$get_pose
ENTRY_POINT: 085e8574
PROGRAM: cac-libil2cpp.so
SCORE: 114
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8
UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__get_pose
          (undefined8 param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *unaff_x21;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  
  if (param_2 != 1) {
    FUN_03ed7d78(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
    FUN_04000f8c(param_1);
  }
  plVar1 = (long *)DA_Assets_FCU_FontRoot__get_Kind(param_1);
  lVar2 = *plVar1;
  in_stack_00000008 = lVar2;
  __cxa_end_catch();
  FUN_072070e8(in_stack_00000010,*unaff_x21);
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13624(lVar2);
}


