/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_StartKeyboardTracking
ENTRY_POINT: 01f9d96c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_68_0__ovrp_StartKeyboardTracking(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lStack_28;
  
  FUN_011ff104();
  plVar1 = (long *)thunk_FUN_011ff104();
  lStack_28 = 0;
  lVar2 = FUN_01274fc4(DAT_02948300,"UnhandledException");
  if (*param_1 != DAT_029482e8) {
    FUN_01220310(*(undefined8 *)(lVar2 + 8),&lStack_28,*plVar1 + (long)*(int *)(lVar2 + 0x18),1);
    if (lStack_28 != 0) {
      FUN_01222ac0(plVar1,lStack_28,param_1);
    }
  }
  return;
}


