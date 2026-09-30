/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnDisable
ENTRY_POINT: 06ddfe80
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnDisable
               (long *param_1,long param_2,uint param_3,uint param_4)

{
  if (param_2 != 0) {
    if ((param_3 <= *(uint *)(param_2 + 0x18)) && (param_4 <= *(uint *)(param_2 + 0x18) - param_3))
    goto LAB_06ddfec8;
  }
  FUN_0719a0b0(param_2,param_3,param_4,0);
LAB_06ddfec8:
  *param_1 = param_2;
  thunk_FUN_03d1023c(param_1,param_2);
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_4;
  return;
}


