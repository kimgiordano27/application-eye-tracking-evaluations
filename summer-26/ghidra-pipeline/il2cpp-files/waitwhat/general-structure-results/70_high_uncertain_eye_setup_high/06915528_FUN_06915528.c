/*
FUNCTION_NAME: FUN_06915528
ENTRY_POINT: 06915528
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06915528(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if ((bRam0000000007559513 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f9978);
    bRam0000000007559513 = 1;
  }
  uVar2 = FUN_03a2e25c(param_1,param_1 + 0x28,*(undefined8 *)puVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_069d3b50(param_1,0);
    if (lVar3 == 0) goto LAB_069155d4;
    lVar3 = FUN_03ac2e98(lVar3,*(undefined8 *)PTR_DAT_070f9978);
    *(long *)(param_1 + 0x28) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
  }
  if (lVar3 != 0) {
    FUN_0697d68c(lVar3,0,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      FUN_0697d750(*(long *)(param_1 + 0x28),0,0);
      return;
    }
  }
LAB_069155d4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


