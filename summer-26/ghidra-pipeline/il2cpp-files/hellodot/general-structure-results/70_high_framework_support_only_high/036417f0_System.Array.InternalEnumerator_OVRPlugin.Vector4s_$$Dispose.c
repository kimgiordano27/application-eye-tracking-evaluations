/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 036417f0
PROGRAM: hellodot-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector4s>__Dispose(long param_1,long param_2)

{
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04382eb8(*(long *)(param_1 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                 *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x28));
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_04383218(*(long *)(unaff_x20 + 0x10),
                   *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0x30));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


