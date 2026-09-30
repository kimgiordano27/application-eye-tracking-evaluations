/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.EyeGazeState>
ENTRY_POINT: 01e383e4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: framework_eye_tracking_support_or_permission_path_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_eye_tracking_support_or_permission_path
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


undefined8
System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_EyeGazeState>(wchar_t *param_1)

{
  undefined8 uVar1;
  void *unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  char *unaff_x26;
  wchar_t *pwVar2;
  long unaff_x28;
  long unaff_x29;
  __shared_count *in_stack_00000000;
  wchar_t *in_stack_00000008;
  wchar_t *in_stack_00000010;
  
  pwVar2 = param_1;
  if (param_1 == (wchar_t *)0x0) {
    std::__throw_bad_alloc();
    param_1 = (wchar_t *)0x0;
    pwVar2 = (wchar_t *)&stack0x0000002c;
  }
  std::__ndk1::ios_base::getloc();
  std::__ndk1::__num_put<wchar_t>::__widen_and_group_float
            (unaff_x23,unaff_x26,unaff_x24,pwVar2,&stack0x00000010,&stack0x00000008,
             (locale *)&stack0x00000000);
  std::__ndk1::__shared_count::__release_shared(in_stack_00000000);
  uVar1 = FUN_01e37828();
  if (param_1 != (wchar_t *)0x0) {
    free(param_1);
  }
  if (unaff_x22 != (void *)0x0) {
    free(unaff_x22);
  }
  if (*(long *)(unaff_x28 + 0x28) == *(long *)(unaff_x29 + -0x20)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


