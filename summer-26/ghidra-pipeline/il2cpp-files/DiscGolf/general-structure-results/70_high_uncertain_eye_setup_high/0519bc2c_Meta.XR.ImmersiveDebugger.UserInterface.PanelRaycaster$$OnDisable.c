/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelRaycaster$$OnDisable
ENTRY_POINT: 0519bc2c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelRaycaster__OnDisable(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if (*(int *)((long)param_1 + 0xc) != *(int *)(lVar1 + 0x1c)) {
      FUN_055095dc(0);
      lVar1 = *param_1;
      if (lVar1 == 0) goto LAB_0519bc7c;
    }
    *(int *)(param_1 + 1) = *(int *)(lVar1 + 0x18) + 1;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    return 0;
  }
LAB_0519bc7c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


