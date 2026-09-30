/*
FUNCTION_NAME: UnityEngine.UI.GraphicRegistry$$RegisterRaycastGraphicForCanvas
ENTRY_POINT: 075c43a0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_UI_GraphicRegistry__RegisterRaycastGraphicForCanvas(void)

{
  long unaff_x21;
  long in_stack_00000008;
  
  FUN_05566250();
  if (in_stack_00000008 != 0) {
    if (0 < *(int *)(in_stack_00000008 + 0x18)) {
      return;
    }
    if ((*(long *)(unaff_x21 + 0x10) != 0) &&
       (FUN_049d0340(*(long *)(unaff_x21 + 0x10),in_stack_00000008,
                     *(undefined8 *)OVRPlugin_OVRP_1_68_0_TypeInfo),
       *(long *)(unaff_x21 + 0x18) != 0)) {
      FUN_059ec364();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


