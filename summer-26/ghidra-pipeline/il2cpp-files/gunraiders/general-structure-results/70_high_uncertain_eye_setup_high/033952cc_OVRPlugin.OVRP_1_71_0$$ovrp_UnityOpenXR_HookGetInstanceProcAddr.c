/*
FUNCTION_NAME: OVRPlugin.OVRP_1_71_0$$ovrp_UnityOpenXR_HookGetInstanceProcAddr
ENTRY_POINT: 033952cc
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;ui_or_gameplay_sink_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_71_0__ovrp_UnityOpenXR_HookGetInstanceProcAddr(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_03307544(param_1,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>_get_IsFocusDelegated__
                            );
  FUN_03146988(uVar2,uVar1,0);
  uVar1 = FUN_0335cdc4();
  uVar2 = thunk_FUN_01c273e8(Method_UnityEngine_UIElements_FocusEventBase<FocusEvent>__ctor__);
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


