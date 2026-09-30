/*
FUNCTION_NAME: FUN_068b0db8
ENTRY_POINT: 068b0db8
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


void FUN_068b0db8(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = OVRPlugin_OVRP_1_83_0_TypeInfo;
  if ((DAT_07559116 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_83_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f9978);
    DAT_07559116 = 1;
  }
  uVar2 = FUN_03a2e25c(param_1,param_1 + 0x1a0,*(undefined8 *)puVar1);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_069d3b50(param_1,0);
    if (lVar3 == 0) goto LAB_068b0e64;
    lVar3 = FUN_03ac2e98(lVar3,*(undefined8 *)PTR_DAT_070f9978);
    *(long *)(param_1 + 0x1a0) = lVar3;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x1a0);
  }
  if (lVar3 != 0) {
    FUN_0697d68c(lVar3,0,0);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      FUN_0697d750(*(long *)(param_1 + 0x1a0),0,0);
      return;
    }
  }
LAB_068b0e64:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


