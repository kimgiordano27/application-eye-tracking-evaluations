/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 036dd630
PROGRAM: waitwhat-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>
               (long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x23;
  long unaff_x26;
  long unaff_x29;
  
  FUN_03188aa0(param_2,*(undefined8 *)(param_1 + 0x80));
  lVar3 = *(long *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x23 + 0x28);
  lVar1 = *(long *)(lVar3 + 0x28);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_031c09d4();
    lVar3 = *(long *)(unaff_x20 + 0x38);
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  *(undefined8 *)(unaff_x29 + -0x10) = uVar4;
  FUN_031896ac(lVar1,uVar2);
  if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


