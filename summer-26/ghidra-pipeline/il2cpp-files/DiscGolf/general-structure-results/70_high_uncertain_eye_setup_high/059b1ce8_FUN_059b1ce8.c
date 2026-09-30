/*
FUNCTION_NAME: FUN_059b1ce8
ENTRY_POINT: 059b1ce8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_3
*/


long FUN_059b1ce8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  if ((DAT_06dc14d3 & 1) == 0) {
                    /* try { // try from 059b1d00 to 05ab1d27 has its CatchHandler @ 059b20f4 */
    FUN_02d965b8(OVRPlugin_OVRP_1_121_0_TypeInfo);
    DAT_06dc14d3 = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_121_0_TypeInfo;
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    lVar2 = *(long *)OVRPlugin_OVRP_1_121_0_TypeInfo;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  }
  return lVar2;
}


