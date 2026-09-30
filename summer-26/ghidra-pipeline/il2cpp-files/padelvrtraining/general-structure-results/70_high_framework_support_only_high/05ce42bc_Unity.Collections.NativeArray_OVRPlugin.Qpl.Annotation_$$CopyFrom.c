/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$CopyFrom
ENTRY_POINT: 05ce42bc
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__CopyFrom(void)

{
  long *plVar1;
  long lVar2;
  undefined8 in_stack_00000008;
  
  plVar1 = (long *)__cxa_begin_catch();
  lVar2 = *plVar1;
  __cxa_end_catch();
  if (in_stack_00000008._4_1_ != '\0') {
    thunk_FUN_03d180a8();
  }
  if (lVar2 == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d540(lVar2);
}


