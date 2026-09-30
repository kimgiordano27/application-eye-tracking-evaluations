/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$MoveNext
ENTRY_POINT: 03ce1a70
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__MoveNext
               (long param_1,long param_2)

{
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  
  lVar1 = unaff_x21;
  if (param_1 != param_2) {
    lVar1 = 0;
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  if (lVar1 != 0) {
    FUN_03ce5d34();
    return;
  }
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    FUN_02eea768(lVar1);
  }
  if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_02ef170c(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  FUN_03ce5cc4();
  return;
}


