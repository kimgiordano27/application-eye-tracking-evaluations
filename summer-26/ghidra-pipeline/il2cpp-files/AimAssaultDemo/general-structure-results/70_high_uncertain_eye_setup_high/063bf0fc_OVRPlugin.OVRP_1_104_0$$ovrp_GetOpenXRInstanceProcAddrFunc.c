/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetOpenXRInstanceProcAddrFunc
ENTRY_POINT: 063bf0fc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


void OVRPlugin_OVRP_1_104_0__ovrp_GetOpenXRInstanceProcAddrFunc(void)

{
  undefined *puVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  int iVar3;
  
  FUN_0373b518();
  *(undefined1 *)(unaff_x20 + 0x811) = 1;
  puVar1 = PTR_DAT_07d96018;
  if (unaff_w19 != 0) {
    iVar3 = 1;
    do {
      lVar2 = FUN_063bedb0();
      if (lVar2 == 0) {
        return;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_03798b70();
      }
      OVRPlugin_OVRP_1_103_0__ovrp_StopColocationDiscovery(lVar2);
      lVar2 = (long)iVar3;
      iVar3 = iVar3 + 1;
    } while (lVar2 < (long)(ulong)unaff_w19);
  }
  return;
}


