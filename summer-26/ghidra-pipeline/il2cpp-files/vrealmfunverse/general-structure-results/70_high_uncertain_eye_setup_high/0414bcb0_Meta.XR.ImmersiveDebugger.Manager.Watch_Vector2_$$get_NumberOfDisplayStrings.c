/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch<Vector2>$$get_NumberOfDisplayStrings
ENTRY_POINT: 0414bcb0
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch<Vector2>__get_NumberOfDisplayStrings
               (long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_04628664(*(long *)(param_1 + 0x10),param_2,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


