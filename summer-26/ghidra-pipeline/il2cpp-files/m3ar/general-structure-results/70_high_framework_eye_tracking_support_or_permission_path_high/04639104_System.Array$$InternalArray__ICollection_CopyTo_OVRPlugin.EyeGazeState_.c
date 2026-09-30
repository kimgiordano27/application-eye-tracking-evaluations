/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 04639104
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined4 System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(void)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x21;
  
  thunk_FUN_0408f364();
  uVar1 = FUN_04639174();
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_0408f364(*unaff_x21);
  }
  uVar2 = FUN_046226ec();
  if ((uVar2 & 1) == 0) {
    return uVar1;
  }
  thunk_FUN_04097b88(PTR_DAT_08f88688);
  FUN_03a8b7f0();
  uVar3 = FUN_04622774();
  uVar4 = thunk_FUN_04097b88(PTR_DAT_08f89538);
                    /* WARNING: Subroutine does not return */
  FUN_04031750(uVar3,uVar4);
}


