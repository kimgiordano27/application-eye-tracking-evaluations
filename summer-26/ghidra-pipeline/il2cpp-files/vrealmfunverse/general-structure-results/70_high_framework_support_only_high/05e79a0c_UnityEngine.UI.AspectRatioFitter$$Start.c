/*
FUNCTION_NAME: UnityEngine.UI.AspectRatioFitter$$Start
ENTRY_POINT: 05e79a0c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 70
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void UnityEngine_UI_AspectRatioFitter__Start(void)

{
  int in_w8;
  long unaff_x19;
  ulong unaff_x20;
  
  if (in_w8 == 0) {
    if ((unaff_x20 & 1) != 0) {
      FUN_05e7458c();
      FUN_04ca5fcc(unaff_x19 + 0x10,0);
      if (*(long *)(unaff_x19 + 0x20) == 0) {
LAB_05e79a6c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_03f46944(*(long *)(unaff_x19 + 0x20),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_103__);
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_05e79a6c;
      FUN_03f46268(*(long *)(unaff_x19 + 0x28),
                   *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__810_104__);
    }
    *(undefined1 *)(unaff_x19 + 0x30) = 1;
  }
  return;
}


