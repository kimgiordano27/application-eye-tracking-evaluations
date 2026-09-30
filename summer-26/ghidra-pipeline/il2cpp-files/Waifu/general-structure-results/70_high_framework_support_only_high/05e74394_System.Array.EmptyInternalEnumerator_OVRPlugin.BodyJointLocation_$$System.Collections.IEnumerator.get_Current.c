/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 05e74394
PROGRAM: Waifu-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__System_Collections_IEnumerator_get_Current
          (long param_1)

{
  long *plVar1;
  long *plVar2;
  long in_x9;
  long *in_x10;
  
  while( true ) {
    in_x9 = in_x9 + -1;
    param_1 = param_1 + -1;
    plVar2 = in_x10 + 3;
    if (param_1 == 0) {
      return 0;
    }
    if (in_x9 == 0) break;
    plVar1 = in_x10 + 1;
    in_x10 = plVar2;
    if ((-1 < (int)*plVar1) && (*plVar2 == 0)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d44();
}


