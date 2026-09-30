/*
FUNCTION_NAME: System.Array$$InternalArray__set_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02f93578
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 95
LABEL: framework_eye_tracking_support_or_permission_path_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


int System_Array__InternalArray__set_Item<OVRPlugin_EyeGazeState>(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x19;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if ((bool)in_ZR) {
      iVar1 = thunk_FUN_02b4b9cc();
      return iVar1 + -1;
    }
    memcpy(&stack0x00000018,(void *)(unaff_x23 + unaff_x22 * (ulong)*(uint *)(*unaff_x20 + 0x104)),
           (ulong)*(uint *)(*unaff_x20 + 0x104));
    in_stack_00000008 = unaff_x21;
    uVar2 = DG_Tweening_DOTweenModuleUtils_Physics__HasRigidbody
                      (*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 8),&stack0x00000008);
    uVar3 = FUN_057c3fc8(&stack0x00000018,uVar2,*(undefined8 *)(*(long *)(unaff_x19 + 0x38) + 0x10))
    ;
    if ((uVar3 & 1) != 0) break;
    unaff_x22 = unaff_x22 + 1;
    in_ZR = unaff_x24 == unaff_x22;
  }
  iVar1 = thunk_FUN_02b4b9cc();
  return iVar1 + (int)unaff_x22;
}


