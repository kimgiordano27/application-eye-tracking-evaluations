/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 0266b784
PROGRAM: vrfs-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose
               (undefined8 param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  
  lVar1 = thunk_FUN_015d056c(*unaff_x19);
  if (lVar1 != 0) {
    FUN_02d76b34(lVar1,0);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


