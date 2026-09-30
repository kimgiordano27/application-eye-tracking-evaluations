/*
FUNCTION_NAME: OVRPlugin.OVRP_1_44_0$$ovrp_ResetDefaultExternalCamera
ENTRY_POINT: 05350b98
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_44_0__ovrp_ResetDefaultExternalCamera(void)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x20;
  
  FUN_02f08768(UnityEngine_UIElements_FocusInEvent_TypeInfo);
  FUN_02f08768(UnityEngine_UIElements_FocusOutEvent_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x563) = 1;
  lVar1 = *unaff_x19;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
    lVar1 = *unaff_x19;
  }
  if (**(long **)(lVar1 + 0xb8) != 0) {
    FUN_049c98cc(**(long **)(lVar1 + 0xb8),
                 *(undefined8 *)UnityEngine_UIElements_FocusOutEvent_TypeInfo);
    lVar1 = *(long *)(*(long *)(*unaff_x19 + 0xb8) + 8);
    if (lVar1 != 0) {
      FUN_049c34d4(lVar1,*(undefined8 *)UnityEngine_UIElements_FocusInEvent_TypeInfo);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


