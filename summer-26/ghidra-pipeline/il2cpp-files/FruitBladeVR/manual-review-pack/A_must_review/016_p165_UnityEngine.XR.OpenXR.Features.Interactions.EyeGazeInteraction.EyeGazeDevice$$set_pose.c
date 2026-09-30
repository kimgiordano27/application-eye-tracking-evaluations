/*
FUNCTION_NAME: UnityEngine.XR.OpenXR.Features.Interactions.EyeGazeInteraction.EyeGazeDevice$$set_pose
ENTRY_POINT: 035e808c
PROGRAM: FruitBladeVR-libil2cpp.so
SCORE: 121
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void UnityEngine_XR_OpenXR_Features_Interactions_EyeGazeInteraction_EyeGazeDevice__set_pose(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 *unaff_x21;
  long *plVar4;
  long lVar5;
  
  *unaff_x21 = 0;
  thunk_FUN_01cc8040();
  puVar1 = PTR_DAT_03ce0cd0;
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01c5cbd4();
  }
  plVar4 = (long *)(*unaff_x20 + 0xb8);
  lVar5 = *plVar4;
  uVar2 = thunk_FUN_01c8fc48(*(undefined8 *)PTR_DAT_03ce0cd0);
  FUN_021cf464();
  lVar5 = FUN_030b3264(lVar5,uVar2,0);
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)puVar1;
    lVar3 = thunk_FUN_01c8fb4c(lVar5,uVar2);
    if (lVar3 != 0) {
      uVar2 = *(undefined8 *)puVar1;
      *plVar4 = lVar3;
      lVar3 = thunk_FUN_01c8fb4c(lVar5,uVar2);
      if (lVar3 != 0) goto LAB_035e8128;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c5cf54(lVar5,uVar2);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_035e8128:
  thunk_FUN_01cc8040(plVar4,lVar3);
  *unaff_x20 = 0;
  thunk_FUN_01cc8040();
  FUN_035e7eb8();
  FUN_035e7eb8();
  return;
}


