/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 04e7b244
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector2f>__Dispose(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_04a0e704(&stack0x00000020,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x1d0));
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03d91ca0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb28();
}


