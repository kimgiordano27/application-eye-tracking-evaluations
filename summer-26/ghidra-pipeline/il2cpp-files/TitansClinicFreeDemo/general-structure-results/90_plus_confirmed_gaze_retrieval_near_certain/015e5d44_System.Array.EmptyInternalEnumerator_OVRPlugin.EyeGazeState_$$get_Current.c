/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.EyeGazeState>$$get_Current
ENTRY_POINT: 015e5d44
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 146
LABEL: confirmed_gaze_retrieval_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use;active_gaze_retrieval
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;attempted_eye_tracking_permission_or_feature_enable;active_gaze_state_retrieval_with_validity_and_pose;functionality_gaze_retrieval_or_extraction
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_EyeGazeState>__get_Current
               (undefined8 param_1,void *param_2,size_t param_3)

{
  long *plVar1;
  int in_w8;
  void *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x29;
  
  if (-1 < in_w8) {
    param_2 = (void *)(unaff_x29 + -0x10);
  }
  memcpy(unaff_x19,param_2,param_3);
  plVar1 = (long *)thunk_FUN_0124b7d8(**(undefined8 **)(unaff_x21 + 0xc0));
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*plVar1 + 0x160));
    if (*(long *)(unaff_x20 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


