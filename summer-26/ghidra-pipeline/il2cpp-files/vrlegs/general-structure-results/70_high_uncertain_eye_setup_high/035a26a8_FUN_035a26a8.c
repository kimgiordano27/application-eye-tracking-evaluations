/*
FUNCTION_NAME: FUN_035a26a8
ENTRY_POINT: 035a26a8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_035a26a8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = OVRPlugin_OVRP_1_82_0_TypeInfo;
  if ((DAT_0412e116 & 1) == 0) {
    FUN_01ab69ac(OVRPlugin_OVRP_1_82_0_TypeInfo);
    DAT_0412e116 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  lVar2 = FUN_035a1afc();
  if (lVar2 != 0) {
    FUN_035a2728(lVar2,param_1);
    lVar2 = FUN_035a1afc();
    if (lVar2 != 0) {
      FUN_035a27d0(lVar2,param_1);
      lVar2 = FUN_035a1afc();
      if (lVar2 != 0) {
        FUN_035a2600(lVar2,param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


