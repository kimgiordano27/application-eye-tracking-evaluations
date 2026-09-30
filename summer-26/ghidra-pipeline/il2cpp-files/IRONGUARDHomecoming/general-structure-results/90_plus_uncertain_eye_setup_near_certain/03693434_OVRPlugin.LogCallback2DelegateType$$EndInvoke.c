/*
FUNCTION_NAME: OVRPlugin.LogCallback2DelegateType$$EndInvoke
ENTRY_POINT: 03693434
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_LogCallback2DelegateType__EndInvoke(long param_1)

{
  undefined *puVar1;
  
  puVar1 = Method_Gameplay_MeleeWeaponModule_<>c_<Start>b__21_1__;
  if (param_1 != 0) {
    FUN_02605e30(param_1,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__653_64__);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    FUN_03666ca4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


