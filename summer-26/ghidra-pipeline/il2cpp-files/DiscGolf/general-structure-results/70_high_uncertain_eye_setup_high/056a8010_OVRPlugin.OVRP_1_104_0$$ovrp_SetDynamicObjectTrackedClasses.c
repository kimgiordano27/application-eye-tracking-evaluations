/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_SetDynamicObjectTrackedClasses
ENTRY_POINT: 056a8010
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_104_0__ovrp_SetDynamicObjectTrackedClasses(long param_1)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  if (**(long **)(param_1 + 0xb8) == 0) {
    uVar1 = thunk_FUN_02dd3144(*(undefined8 *)
                                System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo
                              );
    FUN_04e39494(uVar1,*(undefined8 *)
                        System_Threading_Tasks_TaskCompletionSource<HttpClientResponse>_TypeInfo);
    **(undefined8 **)(*unaff_x22 + 0xb8) = uVar1;
    LeanTween__value(*(undefined8 *)(*unaff_x22 + 0xb8),uVar1);
    if (**(long **)(*unaff_x22 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
  }
  FUN_04e3a230();
  return;
}


