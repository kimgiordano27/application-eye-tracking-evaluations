/*
FUNCTION_NAME: System.Span<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 03e00514
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Span<OVRPlugin_Vector4f>__ToArray(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_02b9ad44(param_1);
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  if ((*(ushort *)(*(long *)(lVar1 + 0x38) + 0x135) & 1) == 0) {
    FUN_02b76218();
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0);
  }
  (*(code *)**(undefined8 **)(lVar1 + 0xe0))();
  if (unaff_x21 != 0) {
    FUN_05df2fe0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


