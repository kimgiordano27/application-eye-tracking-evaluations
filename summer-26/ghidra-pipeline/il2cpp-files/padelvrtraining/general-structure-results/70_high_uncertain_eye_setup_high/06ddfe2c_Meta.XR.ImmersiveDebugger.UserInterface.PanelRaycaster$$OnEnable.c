/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnEnable
ENTRY_POINT: 06ddfe2c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnEnable(long *param_1,long param_2)

{
  if (param_2 != 0) {
    *param_1 = param_2;
    thunk_FUN_03d1023c(param_1,param_2);
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((long)param_1 + 0xc) = (int)*(undefined8 *)(param_2 + 0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_07189ddc(3);
}


