/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_IsConsentSettingsChangeEnabled
ENTRY_POINT: 07ca36d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_OVRP_1_106_0__ovrp_IsConsentSettingsChangeEnabled(long param_1,uint param_2)

{
  long lVar1;
  
                    /* try { // try from 07ca36dc to 07da38df has its CatchHandler @ 07ca335c */
  if ((DAT_0a526a13 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f50920);
    DAT_0a526a13 = 1;
  }
  if (((*(long *)(param_1 + 0x20) != 0) &&
      (lVar1 = FUN_071b94f8(*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_09f50920), lVar1 != 0))
     && (lVar1 = *(long *)(lVar1 + 0x40), lVar1 != 0)) {
    if (param_2 < *(uint *)(lVar1 + 0x18)) {
      return *(undefined4 *)(lVar1 + (long)(int)param_2 * 4 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


