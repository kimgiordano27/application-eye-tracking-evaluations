/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 036a2bd0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_54__);
    *(undefined1 *)(unaff_x20 + 0xf7f) = 1;
  }
  lVar1 = FUN_02a7787c(param_2,*unaff_x21);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x88) != 0)) {
    return *(undefined8 *)(*(long *)(lVar1 + 0x88) + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


