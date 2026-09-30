/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Vector4s>$$Dispose
ENTRY_POINT: 015e6458
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Vector4s>__Dispose(void)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = FUN_024e0ff8();
  if (lVar1 == unaff_x20) {
    return;
  }
  lVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x30))();
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x38))();
    FUN_024e104c();
    FUN_024e4eec();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01230ca0();
}


