/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_CopyTo<OVRPlugin.EyeGazeState>
ENTRY_POINT: 02f9f660
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined1  [16]
System_Array__InternalArray__ICollection_CopyTo<OVRPlugin_EyeGazeState>(undefined1 param_1 [16])

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x21;
  undefined1 auVar4 [16];
  
  uVar2 = param_1._8_8_;
  auVar4._0_8_ = param_1._0_8_;
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  uVar1 = FUN_02fa0af4();
  if ((uVar1 & 1) == 0) {
    auVar4._8_8_ = uVar2;
    return auVar4;
  }
  thunk_FUN_02dc61f4(PTR_DAT_06763d50);
  FUN_028f4b80();
  uVar2 = FUN_02fa0b7c();
  uVar3 = thunk_FUN_02dc61f4(PTR_DAT_06763ea8);
                    /* WARNING: Subroutine does not return */
  FUN_02d609b4(uVar2,uVar3);
}


