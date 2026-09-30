/*
FUNCTION_NAME: OVRPlugin$$EnqueueSubmitLayer
ENTRY_POINT: 0367fb64
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__EnqueueSubmitLayer(long param_1)

{
  long lVar1;
  undefined4 unaff_w19;
  
  if ((param_1 != 0) &&
     (lVar1 = FUN_02b070b4(param_1,unaff_w19,
                           *(undefined8 *)
                            Method_UnityEngine_InputSystem_LowLevel_NativeInputRuntime_<>c__DisplayClass7_0_<set_onUpdate>b__0__
                          ), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


